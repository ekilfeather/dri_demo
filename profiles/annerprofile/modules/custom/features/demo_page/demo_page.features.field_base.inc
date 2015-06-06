<?php
/**
 * @file
 * demo_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function demo_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_tag'
  $field_bases['field_tag'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tag',
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
          'vocabulary' => 'dri_institute',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_timeline_date'
  $field_bases['field_timeline_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_timeline_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => 'optional',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'date',
  );

  // Exported field_base: 'field_timeline_image'
  $field_bases['field_timeline_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_timeline_image',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
