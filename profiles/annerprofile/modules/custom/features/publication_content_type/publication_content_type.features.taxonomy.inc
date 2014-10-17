<?php
/**
 * @file
 * publication_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function publication_content_type_taxonomy_default_vocabularies() {
  return array(
    'publication_category' => array(
      'name' => 'Publication Category',
      'machine_name' => 'publication_category',
      'description' => 'A set of classifications for products & publications',
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
