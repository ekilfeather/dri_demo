<?php
/**
 * @file
 * contexts_sitewide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contexts_sitewide_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
