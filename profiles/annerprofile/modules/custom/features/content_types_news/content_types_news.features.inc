<?php
/**
 * @file
 * content_types_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_types_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_types_news_node_info() {
  $items = array(
    'news_item' => array(
      'name' => t('News Item'),
      'base' => 'node_content',
      'description' => t('A news item for the website'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  return $items;
}
