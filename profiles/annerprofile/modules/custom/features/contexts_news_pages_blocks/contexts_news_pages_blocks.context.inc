<?php
/**
 * @file
 * contexts_news_pages_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function contexts_news_pages_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_pages_blocks';
  $context->description = 'A context to place the news blocks on news pages.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
        'news/archive' => 'news/archive',
        'news/archive/*' => 'news/archive/*',
        'news/tags' => 'news/tags',
        'news/tags/*' => 'news/tags/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_tags-block' => array(
          'module' => 'views',
          'delta' => 'news_tags-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-news_archive-block' => array(
          'module' => 'views',
          'delta' => 'news_archive-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context to place the news blocks on news pages.');
  $export['news_pages_blocks'] = $context;

  return $export;
}
