<?php
/**
 * @file
 * training_provider_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function training_provider_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function training_provider_content_type_node_info() {
  $items = array(
    'providers' => array(
      'name' => t('Providers'),
      'base' => 'node_content',
      'description' => t('This content type lists training providers/courses/learning centres. It includes contact details and a map reference.'),
      'has_title' => '1',
      'title_label' => t('Centre Name'),
      'help' => '',
    ),
  );
  return $items;
}
