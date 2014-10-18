<?php
/**
 * @file
 * demo_page_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function demo_page_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
