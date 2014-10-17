<?php
/**
 * @file
 * context_dri_object_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_dri_object_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'facet_search_collections';
  $context->description = 'Facetted Search page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/collections' => 'search/collections',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-5yehNZCo1IglL3IekUfSppGGJxeUZDzP' => array(
          'module' => 'facetapi',
          'delta' => '5yehNZCo1IglL3IekUfSppGGJxeUZDzP',
          'region' => 'content_inset_left',
          'weight' => '-10',
        ),
        'facetapi-hVCQ3KtFFkSi4l0XTOjfJ0KdAYsfltPz' => array(
          'module' => 'facetapi',
          'delta' => 'hVCQ3KtFFkSi4l0XTOjfJ0KdAYsfltPz',
          'region' => 'content_inset_left',
          'weight' => '-9',
        ),
        'facetapi-Y1FsEZkzYvvAxBXfJvqyaaxETF9ZuJ05' => array(
          'module' => 'facetapi',
          'delta' => 'Y1FsEZkzYvvAxBXfJvqyaaxETF9ZuJ05',
          'region' => 'content_inset_left',
          'weight' => '-8',
        ),
        'facetapi-l0FEMUxZ9XnDZV5Pv0CSBRXMs4Y1v576' => array(
          'module' => 'facetapi',
          'delta' => 'l0FEMUxZ9XnDZV5Pv0CSBRXMs4Y1v576',
          'region' => 'content_inset_left',
          'weight' => '-7',
        ),
        'facetapi-sl4W1X0POaR4LT1Jr0ul1DUKL3BZanNi' => array(
          'module' => 'facetapi',
          'delta' => 'sl4W1X0POaR4LT1Jr0ul1DUKL3BZanNi',
          'region' => 'content_inset_left',
          'weight' => '-6',
        ),
        'views--exp-dri_object_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-dri_object_search-page',
          'region' => 'content_inset_upper',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Facetted Search page');
  $export['facet_search_collections'] = $context;

  return $export;
}
