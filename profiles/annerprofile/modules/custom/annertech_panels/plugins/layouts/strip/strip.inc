<?php

/**
 * Implements hook_panels_layouts()
 */

// Plugin definition
$plugin = array(
  'title' => t('Strip Layout'),
  'category' => t('Annertech'),
  'icon' => 'strip.png',
  'theme' => 'annertech_panels_strip',
  'regions' => array(
    'top' => t('Top'),
    'middle_1' => t('Middle 1'),
    'middle_2' => t('Middle 2'),
    'middle_3' => t('Middle 3'),
    'middle_4' => t('Middle 4'),
    'middle_5' => t('Middle 5'),
    'middle_6' => t('Middle 6'),
    'middle_7' => t('Middle 7'),
    'middle_8' => t('Middle 8'),
    'bottom' => t('Bottom')
  ),
);

