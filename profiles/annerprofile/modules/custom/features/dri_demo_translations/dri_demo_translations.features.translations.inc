<?php
/**
 * @file
 * dri_demo_translations.features.translations.inc
 */

/**
 * Implements hook_translations_defaults().
 */
function dri_demo_translations_translations_defaults() {
  $translations = array();
  $translations['ga:default']['49ee3087348e8d44e1feda1917443987'] = array(
    'source' => 'Name',
    'context' => '',
    'location' => '/ga/node/704',
    'translation' => 'Ainm',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['ga:default']['4f2f5e1d6e2a13469ad431474a68ab82'] = array(
    'source' => 'Go Back',
    'context' => '',
    'location' => '/ga/object-detail/dri:1n79h8287',
    'translation' => 'Ar Ais ',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['ga:default']['630ead0b738486e13184dbce88614541'] = array(
    'source' => 'Welcome to @site-name',
    'context' => '',
    'location' => '/ga/',
    'translation' => 'Fáilte go dtí @site-name',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['ga:menu']['0ade6a3b212df40aad56e4fd85b82d13'] = array(
    'source' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'context' => 'menu:main-menu:description',
    'location' => 'menu:menu:main-menu:description',
    'translation' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['ga:menu']['5cf36afb9ce6ecdf2895b7b364262da2'] = array(
    'source' => 'Main menu',
    'context' => 'menu:main-menu:title',
    'location' => 'menu:menu:main-menu:title',
    'translation' => 'Main menu',
    'plid' => 0,
    'plural' => 0,
  );
  return $translations;
}
