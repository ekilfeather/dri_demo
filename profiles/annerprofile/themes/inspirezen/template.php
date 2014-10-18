<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function inspirezen_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  inspirezen_preprocess_html($variables, $hook);
  inspirezen_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function inspirezen_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function inspirezen_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function inspirezen_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // inspirezen_preprocess_node_page() or inspirezen_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the fields.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
 

function inspirezen_preprocess_field(&$vars){
  // Preprocess the main slider on homepage.
  if ($vars['element']['#field_name'] == 'field_home_slider_id') {
    foreach ($vars['items'] as $key => $value) {
      $objectid = $vars['items'][$key]['#markup'];

      // @todo Use dri_object_load() instead
      $objects = dri_api_get_objects(array($objectid), array());

      $img = theme('imagecache_external', array(
        // @todo is this the correct image file?
        'path' => $objects[$key]['files'][0]['full_size_web_format'],
        'style_name'=> 'frontpage_main_slider',
      ));
      $vars['items'][$key]['#markup'] = $img;
    }
  }
  // Preprocess the left hand side block on homepage.
  if ($vars['element']['#field_name'] == 'field_home_left_object_id') {
    foreach ($vars['items'] as $key => $value) {
      $objectid = $vars['items'][$key]['#markup'];

      // @todo Use dri_object_load() instead
      $objects = dri_api_get_objects(array($objectid), array());

      $img = theme('imagecache_external', array(
        // @todo is this the correct image file?
        'path' => $objects[$key]['files'][0]['full_size_web_format'],
        'style_name'=> 'frontpage_doormat',
      ));
      $vars['items'][$key]['#markup'] = $img;
    }
  }
  // Preprocess the center block on homepage.
  if ($vars['element']['#field_name'] == 'field_home_center_object_id') {
    foreach ($vars['items'] as $key => $value) {
      $objectid = $vars['items'][$key]['#markup'];

      // @todo Use dri_object_load() instead
      $objects = dri_api_get_objects(array($objectid), array());

      $img = theme('imagecache_external', array(
        // @todo is this the correct image file?
        'path' => $objects[$key]['files'][0]['full_size_web_format'],
        'style_name'=> 'frontpage_doormat',
      ));
      $vars['items'][$key]['#markup'] = $img;
    }
  }
  // // Preprocess the object field on the "Curated Object" page.
  // if ($vars['element']['#field_name'] == 'field_lp_fc_object_id_1x1') {
  //   foreach ($vars['items'] as $key => $value) {
  //     $objectid = $vars['items'][$key]['#markup'];

  //     // @todo Use dri_object_load() instead
  //     $objects = dri_api_get_objects(array($objectid), array());

  //     $img = theme('imagecache_external', array(
  //       // @todo is this the correct image file?
  //       'path' => $objects[$key]['files'][0]['full_size_web_format'],
  //       'style_name'=> 'landing_page_1x1',
  //     ));
  //     $vars['items'][$key]['#markup'] = $img;
  //   }
  // }
  // // Preprocess the object field on the "Curated Object" page.
  // if ($vars['element']['#field_name'] == 'field_lp_fc_object_id_1x2') {
  //   foreach ($vars['items'] as $key => $value) {
  //     $objectid = $vars['items'][$key]['#markup'];

  //     // @todo Use dri_object_load() instead
  //     $objects = dri_api_get_objects(array($objectid), array());

  //     $img = theme('imagecache_external', array(
  //       // @todo is this the correct image file?
  //       'path' => $objects[$key]['files'][0]['full_size_web_format'],
  //       'style_name'=> 'landing_page_1x2',
  //     ));
  //     $vars['items'][$key]['#markup'] = $img;
  //   }
  // }
  // // Preprocess the object field on the "Curated Object" page.
  // if ($vars['element']['#field_name'] == 'field_lp_fc_object_id_2x1') {
  //   foreach ($vars['items'] as $key => $value) {
  //     $objectid = $vars['items'][$key]['#markup'];

  //     // @todo Use dri_object_load() instead
  //     $objects = dri_api_get_objects(array($objectid), array());

  //     $img = theme('imagecache_external', array(
  //       // @todo is this the correct image file?
  //       'path' => $objects[$key]['files'][0]['full_size_web_format'],
  //       'style_name'=> 'landing_page_2x1',
  //     ));
  //     $vars['items'][$key]['#markup'] = $img;
  //   }
  // }
}

// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function inspirezen_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function inspirezen_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function inspirezen_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */


/**
 * Implements hook_preprocess_dri_iframe().
 *
 * Extra info needed for Inspiring Ireland iframe.
 *
 * @param array $variables
 */
function inspirezen_preprocess_dri_iframe(&$variables) {



  $query_params = drupal_get_query_parameters();
  global $language ;
  $lang_name = $language->language;

  if (is_numeric($query_params['fc_item_id']) && intval($query_params['fc_item_id'])) {

    $fc_item = array_shift(entity_load('field_collection_item', array($query_params['fc_item_id'])));

    if (get_class($fc_item) == 'FieldCollectionItemEntity') {
      $variables['fc_item'] = $fc_item;
      $curated_text = field_get_items('field_collection_item', $fc_item, 'field_lp_fc_curated_text', 'ga');
      $variables['curated_text'] = $curated_text[0]['safe_value'];
    }
  }
  else {
    $variables['curated_text'] = NULL;
  }
}


/**
 * Get the field collection item's entity ID.
 *
 * Helper function for field-collection-item template.
 *
 * Rationale: field collections are VERY awkward to deal with in preprocess
 * hooks. Rather than pollute the template with awkward logic, this helper
 * function lets us use a simple function call to obtain the entity ID of the
 * field-collection-item currently being rendered in
 * field-collection-item.tpl.php
 *
 * @param array $content
 *  $content variable as passed in to field collection item template.
 *
 * @return int
 *   The entity ID of the field collection item.
 *
 * @see field-collection-item.tpl.php
 *
 * @todo This approach to get the entity ID is generic enough that it might be
 *   worth moving it to separate module for use in other projects.
 */
function _inspirezen_get_field_collection_item_id(array $content) {
  // Get the name of the first field in the field collection item.
  // Doesn't matter which field it is.
  $fc_field_keys = array_keys($content);
  $fc_field_key = array_shift($fc_field_keys);
  $first_field = $content[$fc_field_key];

  // Each field in a field collection contains a representation of the
  // WHOLE field collection item.
  $fc_item_entity = $first_field['#object'];

  // Now the Entity ID is easy to find.
  return $fc_item_entity->item_id;
}


/**
 * Get a URL for the iframe pop-ups on the landing page nodes.
 *
 * Helper function for field-collection-item template.
 *
 * Rationale: field collections are VERY awkward to deal with in preprocess
 * hooks. Rather than pollute the template with awkward logic, this helper
 * function lets us use a simple function call to obtain the link URL for the
 * field-collection-item currently being rendered in
 * field-collection-item.tpl.php
 *
 * @param array $content
 *  $content variable as passed in to field collection item template.
 *
 * @return string|false
 *   A URL for the iframe. May be false if a DRI Object ID is not specified in
 *   the field collection, so remember to check the return value before printing
 *   this in a template.
 *
 * @see field-collection-item.tpl.php
 * @see _inspirezen_get_field_collection_item_id()
 */
function _inspirezen_get_dri_iframe_link(array $content) {
  // Get the name of the first field in the field collection item.
  // Doesn't matter which field it is.
  $fc_field_keys = array_keys($content);
  $fc_field_key = array_shift($fc_field_keys);
  $first_field = $content[$fc_field_key];

  // Each field in a field collection contains a representation of the
  // WHOLE field collection item.
  $fc_item_entity = $first_field['#object'];

  if (!empty($fc_item_entity->field_lp_fc_object_id['und'][0]['safe_value'])) {
    global $base_url;
    $dri_object_id = $fc_item_entity->field_lp_fc_object_id['und'][0]['safe_value'];
    $fc_item_id = _inspirezen_get_field_collection_item_id($content);

    $dri_iframe_url = $base_url . '/dri/iframe/' . $dri_object_id . '?fc_item_id=' . $fc_item_id;

    return $dri_iframe_url;
  }
  else {
    return FALSE;
  }
}
