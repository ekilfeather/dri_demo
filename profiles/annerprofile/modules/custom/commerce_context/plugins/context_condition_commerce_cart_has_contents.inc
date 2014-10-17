<?php

/**
 * Expose commerce cart as a context condition.
 */
class context_condition_commerce_cart_has_contents extends context_condition {
  function condition_values() {
    return array(1 => t('Drupal Commerce cart contains products'));
  }

  function execute() {
    global $user;

    if ($this->condition_used()) {

      // Count the number of product line items on the order.
      $cart_has_contents = FALSE;
      if ($order = commerce_cart_order_load($user->uid)) {
        $wrapper = entity_metadata_wrapper('commerce_order', $order);
        $quantity = commerce_line_items_quantity($wrapper->commerce_line_items, commerce_product_line_item_types());
        if ($quantity > 0) {
          $cart_has_contents = TRUE;
        }
      }

      foreach ($this->get_contexts() as $context) {
        if ($cart_has_contents) {
          $this->condition_met($context);
        }
      }
    }
  }
}

