<?php

/**
 * @file
 * Helper functions provide specimen content for dri_api functions.
 */


/**
 * Helper function to return specimen data for the /get_objects API call.
 *
 * @see dri_api_get_objects()
 *
 * @todo update specimen data
 */
function _dri_api_get_objects_specimen() {

  global $base_url;
  $module_path = $base_url . '/' . drupal_get_path('module', 'dri_api');

  $json = file_get_contents($module_path . '/assets/specimen_data/get_objects.json');

  $objects = json_decode($json, TRUE);

  // improve the 'files' nested array
  foreach ($objects as &$object) {

     // some objects don't have files
    if (empty($object['files'])) {
      continue; // no need to process this object
    }

    // fudge the image URI so that it is the correct absolute path for this module.
    // @todo make use of system_stream_wrapper.module instead?
    foreach ($object['files'][0] as &$value) {
       $value = $module_path . '/' . $value;
    }
  }
  return $objects;
}


/**
 * Helper function to return specimen data for the /get_assets API call.
 *
 * @see dri_api_get_assets()
 *
 * @todo treat image urls as relative to api module root, and package images
 *   with the module?
 */
function _dri_api_get_assets_specimen() {

  global $base_url;
  $module_path = $base_url . '/' . drupal_get_path('module', 'dri_api');

  $json = file_get_contents($module_path . '/assets/specimen_data/get_assets.json');

  $objects = json_decode($json, TRUE);

  return $objects;
}



/**
 * Helper function to return specimen data for the /get_objects API call.
 *
 * @see dri_api_get_related_objects()
 */
function _dri_api_get_related_objects_specimen() {
  global $base_url;
  $module_path = $base_url . '/' . drupal_get_path('module', 'dri_api');

  $json = file_get_contents($module_path . '/assets/specimen_data/get_related_objects.json');
  $objects = json_decode($json, TRUE);
  return $objects;
}


/**
 * Helper function to return specimen data for the /get_objects API call.
 *
 * @see dri_api_get_collections()
 */
function _dri_api_get_collections_specimen() {
  global $base_url;
  $module_path = $base_url . '/' . drupal_get_path('module', 'dri_api');

  $json = file_get_contents($module_path . '/assets/specimen_data/get_collections.json');
  $collections = json_decode($json, TRUE);
  return $collections;
}
