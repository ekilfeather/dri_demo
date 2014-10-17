<?php
/**
 * @file
 * content_type_civicrm_form.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function content_type_civicrm_form_field_default_fields() {
  $fields = array();

  // Exported field: 'node-civicrm_form-body'.
  $fields['node-civicrm_form-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'civicrm_form',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'child_menu_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-civicrm_form-field_civicrm_event_form'.
  $fields['node-civicrm_form-field_civicrm_event_form'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_civicrm_event_form',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'civicrm_reference_fields',
      'settings' => array(
        'allowed_end_date' => '',
        'allowed_start_date' => '',
      ),
      'translatable' => '0',
      'type' => 'civicrm_reference_fields_event',
    ),
    'field_instance' => array(
      'bundle' => 'civicrm_form',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select the CiviCRM event you wish to embed.  
It\'s recommended not to configure both an event and a contribution page to be embedded on the same page.',
      'display' => array(
        'child_menu_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'civicrm_reference_fields',
          'settings' => array(),
          'type' => 'civicrm_reference_fields_iframe',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_civicrm_event_form',
      'label' => 'CiviCRM event',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-civicrm_form-field_civicrm_form'.
  $fields['node-civicrm_form-field_civicrm_form'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_civicrm_form',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'civicrm_reference_fields',
      'settings' => array(
        'allowed_end_date' => '',
        'allowed_start_date' => '',
      ),
      'translatable' => '0',
      'type' => 'civicrm_reference_fields_contribution',
    ),
    'field_instance' => array(
      'bundle' => 'civicrm_form',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select the CiviCRM contribution page you wish to embed.  For example, this could be a donation page or membership form.
It\'s recommended not to configure both an event and a contribution page to be embedded on the same page.',
      'display' => array(
        'child_menu_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'civicrm_reference_fields',
          'settings' => array(),
          'type' => 'civicrm_reference_fields_iframe',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_civicrm_form',
      'label' => 'CiviCRM contribution page',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-civicrm_form-field_image'.
  $fields['node-civicrm_form-field_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image',
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
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'civicrm_form',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'child_menu_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'civicrm_form/images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '6',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('CiviCRM contribution page');
  t('CiviCRM event');
  t('Image');
  t('Select the CiviCRM contribution page you wish to embed.  For example, this could be a donation page or membership form.
It\'s recommended not to configure both an event and a contribution page to be embedded on the same page.');
  t('Select the CiviCRM event you wish to embed.  
It\'s recommended not to configure both an event and a contribution page to be embedded on the same page.');

  return $fields;
}
