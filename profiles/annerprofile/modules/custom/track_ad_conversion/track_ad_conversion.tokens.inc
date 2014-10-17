<?php

/**
 * Implements hook_token_info().
 */
function track_ad_conversion_token_info() {
  $type = array(
    'name' => t('Track ad conversions'),
    'description' => t('Tokens related to tracking ad conversions.'),
    'needs-data' => 'track-ad-conversion',
  );

  // Tokens for ad conversions
  $tokens = array();

  $tokens['order-id'] = array(
    'name' => t('Order ID'),
    'description' => t('The unique numeric ID of the order.'),
  );
  $tokens['amount'] = array(
    'name' => t('Amount'),
    'description' => t('The total amount of the order, in cents.'),
  );
  $tokens['currency'] = array(
    'name' => t('Currency'),
    'description' => t('The order currency.'),
  );

  return array(
    'types' => array('track-ad-conversion' => $type),
    'tokens' => array('track-ad-conversion' => $tokens),
  );
}

/**
 * Implements hook_tokens().
 */
function track_ad_conversion_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  $sanitize = !empty($options['sanitize']);

  if ($type == 'track-ad-conversion' && !empty($data['track-ad-conversion'])) {
    $track_ad_conversion = $data['track-ad-conversion'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        // Simple key values on the ad conversion.
        case 'order-id':
          $replacements[$original] = $sanitize ? check_plain($track_ad_conversion->order_id) : $track_ad_conversion->order_id;
          break;
        case 'amount':
          $replacements[$original] = $sanitize ? check_plain($track_ad_conversion->order_total) : $track_ad_conversion->order_total;
          break;
        case 'currency':
          $replacements[$original] = $sanitize ? check_plain($track_ad_conversion->currency) : $track_ad_conversion->currency;
          break;
      }
    }
  }

  return $replacements;
}

