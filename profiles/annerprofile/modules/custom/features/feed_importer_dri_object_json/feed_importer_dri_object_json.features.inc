<?php
/**
 * @file
 * feed_importer_dri_object_json.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feed_importer_dri_object_json_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
