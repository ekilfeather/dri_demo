<?php
/**
 * @file
 * view_dri_demo_timeline.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_dri_demo_timeline_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dri_timeline';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DRI Timeline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timeline';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'timelinejs';
  $handler->display->display_options['style_options']['timeline_fields']['caption'] = 'field_timeline_caption_text';
  $handler->display->display_options['style_options']['timeline_fields']['credit'] = 'field_timeline_credit_text';
  $handler->display->display_options['style_options']['timeline_fields']['media'] = 'field_timeline_media_image';
  $handler->display->display_options['style_options']['timeline_fields']['date'] = 'field_timeline_dates';
  $handler->display->display_options['style_options']['timeline_fields']['bodytext'] = 'body';
  $handler->display->display_options['style_options']['timeline_fields']['headline'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'demo_page' => 'demo_page',
  );

  /* Display: Timeline Filtered by Tag */
  $handler = $view->new_display('page', 'Timeline Filtered by Tag', 'page');
  $handler->display->display_options['display_description'] = 'Use this view to get Demo Pages filtered by Tag';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'timelinejs';
  $handler->display->display_options['style_options']['timeline_fields']['media'] = 'field_timeline_image';
  $handler->display->display_options['style_options']['timeline_fields']['date'] = 'field_timeline_date';
  $handler->display->display_options['style_options']['timeline_fields']['headline'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Timeline Date */
  $handler->display->display_options['fields']['field_timeline_date']['id'] = 'field_timeline_date';
  $handler->display->display_options['fields']['field_timeline_date']['table'] = 'field_data_field_timeline_date';
  $handler->display->display_options['fields']['field_timeline_date']['field'] = 'field_timeline_date';
  $handler->display->display_options['fields']['field_timeline_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_timeline_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_timeline_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_timeline_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '3',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_timeline_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_timeline_date']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_timeline_date']['delta_offset'] = '0';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Link »';
  /* Field: Content: Timeline Image */
  $handler->display->display_options['fields']['field_timeline_image']['id'] = 'field_timeline_image';
  $handler->display->display_options['fields']['field_timeline_image']['table'] = 'field_data_field_timeline_image';
  $handler->display->display_options['fields']['field_timeline_image']['field'] = 'field_timeline_image';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'demo_page' => 'demo_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'demo_timeline/%';
  $translatables['dri_timeline'] = array(
    t('Master'),
    t('Timeline'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Body'),
    t('Title'),
    t('Timeline Filtered by Tag'),
    t('Use this view to get Demo Pages filtered by Tag'),
    t('Date'),
    t('Link »'),
    t('Timeline Image'),
    t('All'),
  );
  $export['dri_timeline'] = $view;

  return $export;
}
