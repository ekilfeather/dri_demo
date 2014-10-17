<?php
/**
 * @file
 * taxonomy_dri_institute.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_dri_institute_taxonomy_default_vocabularies() {
  return array(
    'dri_institute' => array(
      'name' => 'DRI Institute',
      'machine_name' => 'dri_institute',
      'description' => 'Institute field from DRI metadata',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
