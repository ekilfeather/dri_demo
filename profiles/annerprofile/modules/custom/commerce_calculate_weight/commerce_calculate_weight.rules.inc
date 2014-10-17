<?php
/**
 * Implements hook_rules_action_info().
 * @ingroup rules
 */
function commerce_calculate_weight_rules_action_info() {
  return array(
    'commerce_calculate_weight_action_calculate_total_weight' => array(
      'label' => t('Calculate the total weight of an order.'),
      'group' => t('Commerce Order'),
      'parameter' => array(
        'commerce_order' => array(
          'type' => 'commerce_order',
          'label' => t('Order to calculate'),
        ),
      ),  
      'provides' => array(
        'commerce_order_total_weight' => array(
          'label' => t('Commerce Total Order Weight'),
          'type' => 'integer',
          'save' => TRUE,
        ),
      ),
      'base' => 'commerce_calculate_weight_action_calculate_total_weight',
    ),
  );
}

/**
 * Calculates the total weight of an order.
 */
function commerce_calculate_weight_action_calculate_total_weight($order) {
  // NB weight unit hard coded
  $weight = commerce_physical_order_weight($order, 'g');
  $weight_float = $weight['weight'];
  if ($weight_float == null) {
    $weight_float = 0;
  }
  return array('commerce_order_total_weight' => $weight_float);
}

