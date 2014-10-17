<?php
/**
 * @file
 * feed_importer_dri_object_json.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feed_importer_dri_object_json_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dri_object_json_importer';
  $feeds_importer->config = array(
    'name' => 'DRI Object JSON importer',
    'description' => 'Import DRI Objects using jsonpath.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'json',
        'direct' => 0,
        'directory' => 'public://feeds/dri_object',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '',
        'sources' => array(),
        'debug' => array(),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'dri_object',
      ),
    ),
    'content_type' => 'dri_object',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['dri_object_json_importer'] = $feeds_importer;

  return $export;
}
