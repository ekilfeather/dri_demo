<?php
/**
 * @file
 * views_partners.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_partners_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'partners';
  $view->description = 'A view to create a list of partners and the frontpage footer block';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partners Listing Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partners';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Sort criterion: Content: Position in Lists (field_position_in_lists) */
  $handler->display->display_options['sorts']['field_position_in_lists_value']['id'] = 'field_position_in_lists_value';
  $handler->display->display_options['sorts']['field_position_in_lists_value']['table'] = 'field_data_field_position_in_lists';
  $handler->display->display_options['sorts']['field_position_in_lists_value']['field'] = 'field_position_in_lists_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partners' => 'partners',
  );

  /* Display: Page: Partners Listing */
  $handler = $view->new_display('page', 'Page: Partners Listing', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Partners';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Inspiring Ireland is a large scale, unprecedented collaborative project between the Department of Arts, Heritage and the Gaeltacht, the Digital Repository of Ireland, and eight of Ireland’s national cultural institutions. Visit the partner sites below:';
  $handler->display->display_options['header']['area']['format'] = 'extra_html';
  $handler->display->display_options['path'] = 'about/partners';
  $translatables['partners'] = array(
    t('Master'),
    t('Partners'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page: Partners Listing'),
    t('Our Partners'),
    t('Inspiring Ireland is a large scale, unprecedented collaborative project between the Department of Arts, Heritage and the Gaeltacht, the Digital Repository of Ireland, and eight of Ireland’s national cultural institutions. Visit the partner sites below:'),
  );
  $export['partners'] = $view;

  return $export;
}
