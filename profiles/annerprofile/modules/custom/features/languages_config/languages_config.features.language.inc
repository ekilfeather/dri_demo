<?php
/**
 * @file
 * languages_config.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function languages_config_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  // Exported language: ga.
  $languages['ga'] = array(
    'language' => 'ga',
    'name' => 'Irish',
    'native' => 'Gaeilge',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ga',
    'weight' => 0,
  );
  return $languages;
}
