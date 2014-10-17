<?php
/**
 * @file
 * commerce_banded_shipping_multicurrency.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration_alter().
 */
function commerce_banded_shipping_multicurrency_default_rules_configuration_alter(&$configs) {
  // Add EUR currency conditions.
  if (!empty($configs['rules_calculate_shipping_based_on_weight_bands_eur'])) {
    $eur_bands_condition = rules_condition('data_is', array('data:select' => 'site:commerce-currency', 'value' => 'EUR'));
    $configs['rules_calculate_shipping_based_on_weight_bands_eur']->condition($eur_bands_condition);
  }
  if (!empty($configs['rules_shipping_surcharge_by_weight_eur'])) {
    $eur_surcharge_condition = rules_condition('data_is', array('data:select' => 'site:commerce-currency', 'value' => 'EUR'));
    $configs['rules_shipping_surcharge_by_weight_eur']->condition($eur_surcharge_condition);
  }
  // Add GBP currency conditions.
  if (!empty($configs['rules_calculate_shipping_based_on_weight_bands_gbp'])) {
    $gbp_bands_condition = rules_condition('data_is', array('data:select' => 'site:commerce-currency', 'value' => 'GBP'));
    $configs['rules_calculate_shipping_based_on_weight_bands_gbp']->condition($gbp_bands_condition);
  }
  if (!empty($configs['rules_shipping_surcharge_by_weight_gbp'])) {
    $gbp_surcharge_condition = rules_condition('data_is', array('data:select' => 'site:commerce-currency', 'value' => 'GBP'));
    $configs['rules_shipping_surcharge_by_weight_gbp']->condition($gbp_surcharge_condition);
  }
}

