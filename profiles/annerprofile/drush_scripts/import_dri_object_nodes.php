<?php

/**
 * Pre-requisites:
 *   Needs the JSON file output from get_all_objects.php
 *   Entity API module.
 *   content_types_dri_object feature module.
 *
 * @todo make it work on a dir of json objects
 *
 * @todo check for module dependencies
 *
 * @todo wrap up the JSON file loading into a helper function?
 */

// @todo better, variable?
$dir = drupal_realpath('private://') . '/dri_api';

// load json
$json = file_get_contents($dir .'/output.json');
$objects = json_decode($json, TRUE);

importDriObjects($objects);
// done


/**
 * Imports DRI Object data into dri_object nodes.
 *
 * Updated existing nodes, or creates a new one if necessary. We're treating
 * the Node Title as the DRI Object ID.
 *
 * @param array $objects
 *   Array representing DRI Objects from JSON
 */
function importDriObjects(array $objects) {
  foreach ($objects as $object) {
    drush_print(''); // readability, make new objects and errors stand out.

    // check if node exists
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
          ->entityCondition('bundle', 'dri_object')
          ->propertyCondition('title', $object['pid']);
    $result = $query->execute();

    if (isset($result['node'])) {
      $node = array_shift($result['node']);
      $entity = node_load($node->nid);
    }
    else {
      $entity = createDriNode($object);
    }

    updateDriNode($object, $entity);
  }
}


/**
 * Creates a basic dri_object node from a DRI Object JSON.
 *
 * Only handles node properties, not field_api fields.
 *
 * @param array $object
 *   Array representing DRI Object JSON
 *
 * @return stdClass
 *   Node object, title set to DRI Object ID.
 */
function createDriNode(array $object) {

  drush_print('Creating new DRI Object - ' . $object['pid']);

  global $user;

  $values = array(
    'title' => $object['pid'],
    'type' => 'dri_object',
    'uid' => $user->uid,
    'status' => 1,
    'comment' => 0,
    'promote' => 0,
    'language' => 'en',
  );

  $entity = entity_create('node', $values);
  return $entity;
}


/**
 * Updates node Fields with DRI Object data.
 *
 * @param array $object
 *   Array representing DRI Object JSON
 * @param stdClass $entity
 *   dri_object node to be updated.
 */
function updateDriNode($object, $entity) {
  drush_print('Updating DRI Object:' . $entity->title);

  $ewrapper = entity_metadata_wrapper('node', $entity);

  // misc text fields
  $ewrapper->field_dri_title->set($object['metadata']['title'][0]);
  $ewrapper->field_dri_rights->set($object['metadata']['rights'][0]);
  $ewrapper->field_dri_description->set($object['metadata']['description'][0]);
  $ewrapper->field_dri_creator->set($object['metadata']['creator'][0]);
  $ewrapper->field_dri_publisher->set($object['metadata']['publisher'][0]);
  $ewrapper->field_dri_date->set($object['metadata']['date'][0]);

  // taxonomy fields
  $ewrapper->field_dri_subject = process_terms($object['metadata']['subject'], 'dri_subject');
  $ewrapper->field_dri_type = process_terms($object['metadata']['type'], 'dri_type');
  // just the first institute name
  $ewrapper->field_dri_institute = process_terms($object['metadata']['institute'][0]['name'], 'dri_institute');
  $ewrapper->field_dri_format = process_terms($object['metadata']['format'], 'dri_format');

  // extract era name from the temporal strings first
  $eras = munge_temporal_coverage($object['metadata']['temporal_coverage']);
  $ewrapper->field_dri_temporal_coverage = process_terms($eras, 'dri_temporal_coverage');

  // geocode points for map
  $ewrapper->field_dri_geocode_point = process_geocode_points($object);

  $ewrapper->save();
}


/**
 * Process DRI Object metadata into taxonomy_term IDs terms.
 *
 * Creates new taxonomy_terms if necessary.
 *
 * @param array|string $dri_values
 *   Values for a particular DRI metadata field (JSON property)
 *   to be treated as taxonomy_terms. Either a single string or
 *   an array of strings.
 * @param string $vocab_name
 *   Vocabulary machine name for imported terms.
 * @return array
 *   Array of taxonomy_term IDs.
 */
function process_terms(array $dri_values, $vocab_name) {

  if (!is_array($dri_values)) {
    $dri_values = array($dri_values);
  }

  $vocab = taxonomy_vocabulary_machine_name_load($vocab_name);

  // Track term ids to return.
  $tids = array();

  foreach ($dri_values as $dri_value) {

    // Check if term exists already.
    $terms = taxonomy_get_term_by_name($dri_value, $vocab_name);

    if (empty($terms)) {
      // Need to create term
      drush_print('Creating NEW term: ' . $dri_value);
      $term = new stdClass();
      $term->vid = $vocab->vid;
      $term->name = $dri_value;
      taxonomy_term_save($term);

      // Need to retrieve new term id
      $terms = taxonomy_get_term_by_name($dri_value, $vocab_name);
    }
    $term = array_shift($terms);
    $tids[] = $term->tid;
  }
  return $tids;
}


/**
 * Process DRI Object Geocode Point metadata.
 *
 * @param array $object
 *   Array representing DRI Object JSON
 * @return array
 *   Nested array of Lat + Long, or NULL if not available in JSON
 */
function process_geocode_points($object) {
  $points = array();
  if (empty($object['metadata']['geocode_point'][0] )) {
    return NULL;
  }
  foreach ($object['metadata']['geocode_point'] as $point) {
    if ($point['geometry']['type'] != 'Point') {
      drush_print("Geometry not of type 'Point', ignoring.");
      continue;
    }
    $data = array( // get the order right ;-)
      'lat' => $point['geometry']['coordinates'][1],
      'lon' => $point['geometry']['coordinates'][0],
    );
    $points[] = $data;
  }
  return $points;
}


/**
 * Extract prose name of era from temporal coverage string.
 *
 * DRI JSON contains metadata strings in the forms:
 *   "name=17th century; start=1600-01-01; end=1699-12-31"
 *
 * This function takes an array of metadata string and returns an array of just
 * the names. A few instances are unstructured; i.e. Just a plain name string.
 * These will be left as they are.
 *
 * @param array $values
 *   Array of Temporal Coverage strings.
 *
 * @return array
 *   Array of strings.
 */
function munge_temporal_coverage($values) {
  $names = array();
  foreach ($values as $value) {
    // Catch unstructured instances.
    if (substr($value, 0, 5) != 'name=') {
      $names[] = $value;
      continue;
    }

    $parts = explode(';', $value);
    $name = array_shift($parts); // first part only
    $name = substr($name, 5); // after 'name='
    $name = trim($name);
    $names[] = $name;
  }
  return $names;
}
