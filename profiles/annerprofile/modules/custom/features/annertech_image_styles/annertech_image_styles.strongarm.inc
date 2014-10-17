<?php
/**
 * @file
 * annertech_image_styles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function annertech_image_styles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecache_external_hosts';
  $strongarm->value = 'objects.dri.ie';
  $export['imagecache_external_hosts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecache_external_option';
  $strongarm->value = 'white';
  $export['imagecache_external_option'] = $strongarm;

  return $export;
}
