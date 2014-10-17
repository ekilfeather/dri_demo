<?php
/**
 * @file
 * home_page_tabs_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_tabs_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
