<?php
/**
 * @file
 * training_provider_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function training_provider_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|providers|form';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'providers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_1',
      1 => 'field_address_2',
      2 => 'field_city_town',
      3 => 'field_contact_email',
      4 => 'field_contact_name',
      5 => 'field_county',
      6 => 'field_mobile_number',
      7 => 'field_phone_number',
      8 => 'field_address_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_details|node|providers|form'] = $field_group;

  return $export;
}
