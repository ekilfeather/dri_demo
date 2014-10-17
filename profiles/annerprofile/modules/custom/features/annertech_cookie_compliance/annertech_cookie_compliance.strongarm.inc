<?php
/**
 * @file
 * annertech_cookie_compliance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function annertech_cookie_compliance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_en';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_info' => array(
      'value' => 'This site uses cookies. Cookies are small files placed on your computer to improve the quality of your visit to a website. By clicking on this box you agree to our use of cookies.',
      'format' => 'full_html',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_agreed' => array(
      'value' => '<h2>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'plain_text',
    ),
    'popup_link' => 'privacy-policy',
    'popup_height' => '100',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '666',
    'popup_text_hex' => 'ffffff',
  );
  $export['eu_cookie_compliance_en'] = $strongarm;

  return $export;
}
