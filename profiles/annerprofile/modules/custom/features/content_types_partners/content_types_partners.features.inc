<?php
/**
 * @file
 * content_types_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_types_partners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_types_partners_node_info() {
  $items = array(
    'partners' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => t('Use this content type to add partners pages to the website.'),
      'has_title' => '1',
      'title_label' => t('Partner\'s Name'),
      'help' => '',
    ),
  );
  return $items;
}
