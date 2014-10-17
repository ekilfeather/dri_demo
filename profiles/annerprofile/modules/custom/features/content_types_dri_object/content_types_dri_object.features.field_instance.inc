<?php
/**
 * @file
 * content_types_dri_object.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_types_dri_object_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-dri_object-field_dri_creator'
  $field_instances['node-dri_object-field_dri_creator'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object Metadata - Creator field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_creator',
    'label' => 'Creator',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_date'
  $field_instances['node-dri_object-field_dri_date'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object Metadata - Date field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_description'
  $field_instances['node-dri_object-field_dri_description'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object Metadata - Decripotion field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_format'
  $field_instances['node-dri_object-field_dri_format'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object metadata - Format field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_format',
    'label' => 'Format',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_geocode_point'
  $field_instances['node-dri_object-field_dri_geocode_point'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object metadata - Geocode Point field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_geocode_point',
    'label' => 'Geocode Point',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'html5_geolocation' => 0,
      ),
      'type' => 'geofield_latlon',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_geographical_coverage'
  $field_instances['node-dri_object-field_dri_geographical_coverage'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object Metadata - Geographical Coverage field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_geographical_coverage',
    'label' => 'Geographical Coverage',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_institute'
  $field_instances['node-dri_object-field_dri_institute'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object metadata - Institute field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_institute',
    'label' => 'Institute',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_publisher'
  $field_instances['node-dri_object-field_dri_publisher'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object Metadata - Publisher field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_publisher',
    'label' => 'Publisher',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_rights'
  $field_instances['node-dri_object-field_dri_rights'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object Metadata - Rights field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_rights',
    'label' => 'Rights',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_subject'
  $field_instances['node-dri_object-field_dri_subject'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object metadata - Subject field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_subject',
    'label' => 'Subject',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_temporal_coverage'
  $field_instances['node-dri_object-field_dri_temporal_coverage'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object metadata - Temporal Coverage field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_temporal_coverage',
    'label' => 'Temporal Coverage',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_title'
  $field_instances['node-dri_object-field_dri_title'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object metadata - Title field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-dri_object-field_dri_type'
  $field_instances['node-dri_object-field_dri_type'] = array(
    'bundle' => 'dri_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'DRI Object metadata - Type field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dri_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Creator');
  t('DRI Object Metadata - Creator field');
  t('DRI Object Metadata - Date field');
  t('DRI Object Metadata - Decripotion field');
  t('DRI Object Metadata - Geographical Coverage field');
  t('DRI Object Metadata - Publisher field');
  t('DRI Object Metadata - Rights field');
  t('DRI Object metadata - Format field');
  t('DRI Object metadata - Geocode Point field');
  t('DRI Object metadata - Institute field');
  t('DRI Object metadata - Subject field');
  t('DRI Object metadata - Temporal Coverage field');
  t('DRI Object metadata - Title field');
  t('DRI Object metadata - Type field');
  t('Date');
  t('Description');
  t('Format');
  t('Geocode Point');
  t('Geographical Coverage');
  t('Institute');
  t('Publisher');
  t('Rights');
  t('Subject');
  t('Temporal Coverage');
  t('Title');
  t('Type');

  return $field_instances;
}
