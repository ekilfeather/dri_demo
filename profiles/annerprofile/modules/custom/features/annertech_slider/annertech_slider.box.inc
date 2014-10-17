<?php
/**
 * @file
 * annertech_slider.box.inc
 */

/**
 * Implements hook_default_box().
 */
function annertech_slider_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'first_steps_slider_content';
  $box->plugin_key = 'simple';
  $box->title = 'Take the first step';
  $box->description = 'First Steps Slider Content';
  $box->options = array(
    'body' => array(
      'value' => '<div class="content">Call <b>1800 20 20 65</b> <br>Improve reading, writing, maths</div>',
      'format' => 'only_html',
    ),
  );
  $export['first_steps_slider_content'] = $box;

  return $export;
}
