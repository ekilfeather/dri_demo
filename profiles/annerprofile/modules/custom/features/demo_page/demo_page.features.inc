<?php
/**
 * @file
 * demo_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function demo_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function demo_page_node_info() {
  $items = array(
    'demo_page' => array(
      'name' => t('Demo Page'),
      'base' => 'node_content',
      'description' => t('Test'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}