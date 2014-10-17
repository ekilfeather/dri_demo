<?php
/**
 * @file
 * home_page_tabs_block.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function home_page_tabs_block_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'home_page_tabs_block';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Home Page Tabs Block';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_latest_news-block_1',
      'hide_title' => 1,
      'title' => 'Latest News',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_civicrm_events-block_1',
      'hide_title' => 1,
      'title' => 'Upcoming Events',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'boxes_delta_facebook_widget_block',
      'hide_title' => 1,
      'title' => 'Facebook',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook');
  t('Home Page Tabs Block');
  t('Latest News');
  t('Upcoming Events');

  $export['home_page_tabs_block'] = $quicktabs;

  return $export;
}
