<?php
/**
 * @file
 * taxonomy_dri_temporal_coverage.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_dri_temporal_coverage_taxonomy_default_vocabularies() {
  return array(
    'dri_temporal_coverage' => array(
      'name' => 'DRI Temporal Coverage',
      'machine_name' => 'dri_temporal_coverage',
      'description' => 'Temporal Coverage field from DRI metadata',
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
