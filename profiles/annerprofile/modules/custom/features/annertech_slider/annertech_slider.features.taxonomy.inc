<?php
/**
 * @file
 * annertech_slider.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function annertech_slider_taxonomy_default_vocabularies() {
  return array(
    'slide_category' => array(
      'name' => 'Slide Category',
      'machine_name' => 'slide_category',
      'description' => 'Categorizes slide content for inclusion in one or more slide queues.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
