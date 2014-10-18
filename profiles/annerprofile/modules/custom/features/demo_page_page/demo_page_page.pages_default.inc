<?php
/**
 * @file
 * demo_page_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function demo_page_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Demo Node Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'demo_page' => 'demo_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e56cd4d7-1dad-43c0-9873-dd8a9f4558db';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ddb4774b-7bd9-4184-a009-89150a324161';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ddb4774b-7bd9-4184-a009-89150a324161';
    $display->content['new-ddb4774b-7bd9-4184-a009-89150a324161'] = $pane;
    $display->panels['left'][0] = 'new-ddb4774b-7bd9-4184-a009-89150a324161';
    $pane = new stdClass();
    $pane->pid = 'new-07733f65-1d57-44ab-b241-d6972e726e41';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_lp_object_id';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => '',
        'delete' => '',
        'add' => '',
        'description' => 1,
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '07733f65-1d57-44ab-b241-d6972e726e41';
    $display->content['new-07733f65-1d57-44ab-b241-d6972e726e41'] = $pane;
    $display->panels['right'][0] = 'new-07733f65-1d57-44ab-b241-d6972e726e41';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
