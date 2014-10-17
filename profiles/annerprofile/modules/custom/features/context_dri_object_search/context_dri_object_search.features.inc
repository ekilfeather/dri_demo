<?php
/**
 * @file
 * context_dri_object_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function context_dri_object_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
