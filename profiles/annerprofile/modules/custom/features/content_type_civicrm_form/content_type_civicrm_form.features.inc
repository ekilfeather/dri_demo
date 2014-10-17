<?php
/**
 * @file
 * content_type_civicrm_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_civicrm_form_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_civicrm_form_node_info() {
  $items = array(
    'civicrm_form' => array(
      'name' => t('CiviCRM form'),
      'base' => 'node_content',
      'description' => t('Use this to embed a CiviCRM event page or contribution page within your content.  This allows you to easily place your CiviCRM page in the menu and have the breadcrumbs and sidebar menu appear.  It also allows you to specify a custom URL alias (e.g. /donate) which you can\'t do in CiviCRM.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
