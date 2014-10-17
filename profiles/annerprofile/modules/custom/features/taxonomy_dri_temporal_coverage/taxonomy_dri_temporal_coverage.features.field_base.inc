<?php
/**
 * @file
 * taxonomy_dri_temporal_coverage.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function taxonomy_dri_temporal_coverage_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_dri_temporal_coverage'
  $field_bases['field_dri_temporal_coverage'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dri_temporal_coverage',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'dri_temporal_coverage',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
