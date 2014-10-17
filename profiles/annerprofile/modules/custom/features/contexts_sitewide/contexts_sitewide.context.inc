<?php
/**
 * @file
 * contexts_sitewide.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function contexts_sitewide_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'A context for blocks that are available on every page.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-custom_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-custom_search-page',
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-8',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'header',
          'weight' => '-7',
        ),
        'menu_block-main_links-1' => array(
          'module' => 'menu_block',
          'delta' => 'main_links-1',
          'region' => 'header',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context for blocks that are available on every page.');
  $export['sitewide'] = $context;

  return $export;
}
