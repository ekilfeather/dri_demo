<?php
/**
 * @file
 * content_types_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_types_landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_types_landing_page_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('We use this to create landing pages, laid out in a \'masonry\' format of images that are clickable.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
