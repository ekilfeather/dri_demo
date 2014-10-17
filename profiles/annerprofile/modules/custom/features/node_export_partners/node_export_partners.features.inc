<?php
/**
 * @file
 * node_export_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_export_partners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
