<?php
/**
 * @file
 * annertech_date_formats.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function annertech_date_formats_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_numerical_month_year';
  $strongarm->value = 'd m Y';
  $export['date_format_date_numerical_month_year'] = $strongarm;

  return $export;
}
