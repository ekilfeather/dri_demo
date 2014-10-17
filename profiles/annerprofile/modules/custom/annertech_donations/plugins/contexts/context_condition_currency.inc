<?php
/**
 * Expose oxfam context location as a context condition.
 */
class context_condition_currency extends context_condition {
  function condition_values() {
    $values = array();
    $values['EUR'] = 'Euro';
    $values['GBP'] = 'Pounds Sterling';
    return $values;
  }

  function execute($form_currency) {
    foreach ($this->get_contexts($form_currency) as $context) {
      $this->condition_met($context, $form_currency);
    }
  }
}
