<?php

/**
 * @file
 * dri_api test calls.
 * Suitable for dropping into devel/php
 */


/**
 * POST /get_objects
 */
$objects_specimen = dri_api_get_objects(array(), NULL, TRUE);
dpm($objects_specimen, '$objects_specimen');

$objects_real = dri_api_get_objects(
  array(
    'dri:1n79h822k', 
    'dri:1n79h8180',
    'dri:1n79h8198',
    'dri:1n79h8201',
  ),
  NULL
);
dpm($objects_real, '$objects_real');


/**
 * GET /related
 */
$related_specimen = dri_api_get_related_objects('foo-bar', 4, TRUE);
dpm($related_specimen, '$related_specimen');

$related_real = dri_api_get_related_objects('dri:1n79h822k', 4);
dpm($related_real, '$related_real');


/**
 * dri_object_load() is a wrappper around dri_api_get_objects().
 */
$object_loaded = dri_object_load('dri:1n79h822k');
dpm($object_loaded, '$object_loaded with dr_object_load()');


/**
 * GET /collections
 */
$collections_specimen = dri_api_get_collections(TRUE);
dpm($collections_specimen, '$collections_specimen');

$collections_real = dri_api_get_collections();
dpm($collections_real, '$collections_real');


/**
 * POST /get_assets
 */
$assets_specimen = dri_api_get_assets(array(), TRUE);
dpm($assets_specimen, '$assets_specimen');

$assets_real = dri_api_get_assets(
  array(
    'dri:1n79h822k',
    'dri:1n79h8180',
    'dri:1n79h8198',
    'dri:1n79h8201',
  ),
  NULL
);
dpm($assets_real, '$assets_real');
