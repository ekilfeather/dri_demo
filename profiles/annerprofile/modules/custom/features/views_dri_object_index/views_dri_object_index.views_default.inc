<?php
/**
 * @file
 * views_dri_object_index.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_dri_object_index_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dri_object_search';
  $view->description = 'Search API view for DRI Objects';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_dri_object_index';
  $view->human_name = 'DRI Object Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Newest';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Oldest';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '|<<';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '<';
  $handler->display->display_options['pager']['options']['tags']['next'] = '>';
  $handler->display->display_options['pager']['options']['tags']['last'] = '>>|';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: DRI Object ID (node title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_dri_object_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'DRI Object ID (node title)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: DRI Title */
  $handler->display->display_options['fields']['field_dri_title']['id'] = 'field_dri_title';
  $handler->display->display_options['fields']['field_dri_title']['table'] = 'search_api_index_dri_object_index';
  $handler->display->display_options['fields']['field_dri_title']['field'] = 'field_dri_title';
  $handler->display->display_options['fields']['field_dri_title']['ui_name'] = 'DRI Title';
  $handler->display->display_options['fields']['field_dri_title']['label'] = '';
  $handler->display->display_options['fields']['field_dri_title']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Node: Date */
  $handler->display->display_options['sorts']['field_dri_date']['id'] = 'field_dri_date';
  $handler->display->display_options['sorts']['field_dri_date']['table'] = 'search_api_index_dri_object_index';
  $handler->display->display_options['sorts']['field_dri_date']['field'] = 'field_dri_date';
  $handler->display->display_options['sorts']['field_dri_date']['expose']['label'] = 'Date';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_dri_object_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search/collections';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Collections';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['dri_object_search'] = array(
    t('Master'),
    t('Search'),
    t('more'),
    t('Reset'),
    t('Sort by'),
    t('Newest'),
    t('Oldest'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('|<<'),
    t('<'),
    t('>'),
    t('>>|'),
    t('Date'),
    t('Fulltext search'),
    t('Page'),
  );
  $export['dri_object_search'] = $view;

  return $export;
}
