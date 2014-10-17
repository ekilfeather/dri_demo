<?php
/**
 * @file
 * section_content_listing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_content_listing_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_content_listing_page_node_info() {
  $items = array(
    'section_content_listing_page' => array(
      'name' => t('Section Content Listing Page'),
      'base' => 'node_content',
      'description' => t('Create a new landing page for a section.  This will display a teaser for all pages that are children of this page\'s menu item.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
