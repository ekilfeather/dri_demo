<?php
/**
 * @file
 * content_types_content_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_types_content_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_types_content_page_node_info() {
  $items = array(
    'content_page' => array(
      'name' => t('Content Page'),
      'base' => 'node_content',
      'description' => t('A content Page on the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
