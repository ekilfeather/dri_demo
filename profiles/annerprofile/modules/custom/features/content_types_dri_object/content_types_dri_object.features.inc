<?php
/**
 * @file
 * content_types_dri_object.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_types_dri_object_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_types_dri_object_node_info() {
  $items = array(
    'dri_object' => array(
      'name' => t('DRI Object'),
      'base' => 'node_content',
      'description' => t('Content Type to store local copies of DRI object information. Used to power the advanced search page.'),
      'has_title' => '1',
      'title_label' => t('DRI Object ID'),
      'help' => '',
    ),
  );
  return $items;
}
