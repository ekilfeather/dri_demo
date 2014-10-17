<?php
/**
 * @file
 * content_types_partners.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_types_partners_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partners_basic_info|node|partners|form';
  $field_group->group_name = 'group_partners_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partners';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_partners_website',
      2 => 'title_field',
      3 => 'field_position_in_lists',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-partners-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_partners_basic_info|node|partners|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partners_images|node|partners|form';
  $field_group->group_name = 'group_partners_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partners';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_partners_image_frontpage',
      1 => 'field_partners_image_listing_pg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-partners-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_partners_images|node|partners|form'] = $field_group;

  return $export;
}
