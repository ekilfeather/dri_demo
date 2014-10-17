<?php
/**
 * @file
 * views_partners_homepage_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_partners_homepage_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'partners_homepage_list';
  $view->description = 'A view to create a list of partners and the frontpage footer block';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partners Homepage List';
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
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
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

  /* Display: Block: Footer Homepage */
  $handler = $view->new_display('block', 'Block: Footer Homepage', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'In Partnership With';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Partners Image (Frontpage) */
  $handler->display->display_options['fields']['field_partners_image_frontpage']['id'] = 'field_partners_image_frontpage';
  $handler->display->display_options['fields']['field_partners_image_frontpage']['table'] = 'field_data_field_partners_image_frontpage';
  $handler->display->display_options['fields']['field_partners_image_frontpage']['field'] = 'field_partners_image_frontpage';
  $handler->display->display_options['fields']['field_partners_image_frontpage']['label'] = '';
  $handler->display->display_options['fields']['field_partners_image_frontpage']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_partners_image_frontpage']['alter']['path'] = 'partners#[nid]';
  $handler->display->display_options['fields']['field_partners_image_frontpage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partners_image_frontpage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_partners_image_frontpage']['settings'] = array(
    'image_style' => 'partners_footer_block',
    'image_link' => '',
  );
  $translatables['partners_homepage_list'] = array(
    t('Master'),
    t('Partners'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block: Footer Homepage'),
    t('In Partnership With'),
  );
  $export['partners_homepage_list'] = $view;

  return $export;
}
