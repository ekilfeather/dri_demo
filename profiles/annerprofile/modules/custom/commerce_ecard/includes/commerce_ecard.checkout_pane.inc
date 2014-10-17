<?php

/**
 * @file
 * Ecard checkout pane.
 *
 * Note the ecard field name is currently hardcoded as "field_ecard". Could make
 * this configurable later if required.
 */

/**
 * Configure the ecard checkout pane.
 */
function commerce_ecard_checkout_pane_settings_form($checkout_pane) {
  $options = array();

  $form['commerce_ecard_checkout_pane_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Checkout pane title'),
    '#default_value' => variable_get('commerce_ecard_checkout_pane_title', ''),
  );

  $description = variable_get('commerce_ecard_checkout_pane_description', t('Please select a card type below.  Traditional cards will be posted to your billing address, for you to give to the recipient.  E-cards will be sent directly to the recipient you specify, as a beautifully designed email.'));
  $form['commerce_ecard_checkout_pane_description'] = array(
    '#type' => 'textarea',
    '#title' => t('Checkout pane description'),
    '#default_value' => variable_get('commerce_ecard_checkout_pane_description', $description),
  );

  $no_js_message = variable_get('commerce_ecard_checkout_pane_no_js_message', t('If you wish to purchase an ecard, pleas enable javascript in your browser settings and reload the page. Otherwise you can select the "Traditional" card type and it will be sent by post.'));
  $form['commerce_ecard_checkout_pane_no_js_message'] = array(
    '#type' => 'textarea',
    '#title' => t('No javascript message'),
    '#default_value' => variable_get('commerce_ecard_checkout_pane_no_js_message', $no_js_message),
  );

  return $form;
}

/**
 * Display ecard checkout pane.
 */
function commerce_ecard_checkout_pane_checkout_form($form, &$form_state, $checkout_pane, $order) {
  //add in javascript
  drupal_add_js(drupal_get_path('module', 'commerce_ecard') . '/js/commerce_ecard_js_enabled.js');
  $pane_id = $checkout_pane['pane_id'];
  $pane_values = !empty($form_state['values'][$pane_id]) ? $form_state['values'][$pane_id] : array();
  $pane_form = $ecard_fields = array();

  // For each line item on the order, find those with ecard fields.
  $order_wrapper = entity_metadata_wrapper('commerce_order', $order);
  foreach ($order_wrapper->commerce_line_items as $delta => $line_item_wrapper) {

    // Only interested in product line items.
    if ($line_item_wrapper->type->value() == 'product') {
      $product = $line_item_wrapper->commerce_product->value();
      $items = field_get_items('commerce_product', $product, 'field_ecard');

      // Note: If we want the product display node, use
      // $line_item_wrapper->data['context']['entity']['entity_id'], where
      // entity_type = 'node'.


      // We found an field_ecard field.
      if (!empty($items)) {
        $field = field_info_instance('commerce_product', 'field_ecard', $product->type);
        $description = check_plain($product->title);

        // Loop through the product quantity and setup a form for each one.
        for ($i = 0; $i < $line_item_wrapper->quantity->value(); $i++) {
          $product_key = $product->product_id . '_' . $i;

          // Get submitted values.
          $defaults = isset($pane_values['ecards'][$product_key]) ? $pane_values['ecards'][$product_key] : array();
          // Otherwise check if there's any saved on the order.
          if (empty($defaults) && !empty($order->data[$pane_id]['commerce_ecards'])) {
            $defaults = $order->data[$pane_id]['commerce_ecards'][$product_key];
          }
          // Create a temporary array for now.
          $ecard_fields[$product_key] = commerce_ecard_send_ecard_form($product, $field, $product_key, $defaults);
          $ecard_fields[$product_key]['#title'] = $description;
          $ecard_fields[$product_key]['#type'] = 'fieldset';
        }
      }
    }
  }
  
  // No ecard configured products found, so just return.
  if (empty($ecard_fields)) {
    return $pane_form;
  }


  // Description markup.
  $description = variable_get('commerce_ecard_checkout_pane_description', t('Please select a card type below.  Traditional cards will be posted to your billing address, for you to give to the recipient.  Ecards will be sent directly to the recipient you specify, as a beautifully designed email.'));
  $pane_form['introduction'] = array(
    '#markup' => filter_xss_admin($description),
    '#prefix' => '<div class="description">',
    '#suffix' => '</div>',
  );

  // Radio button choice.
  $options = array(
    'traditional' => t('Traditional'),
    'ecard' => t('E-card'),
  );
  $ecard_type = variable_get('commerce_ecard_default_type', 'traditional');
  if (!empty($pane_values['ecard_type']) && !empty($options[$pane_values['ecard_type']])) {
    $ecard_type = $pane_values['ecard_type'];
  }
  elseif (!empty($order->data[$pane_id]['ecard_type'])) {
    $ecard_type = $order->data[$pane_id]['ecard_type'];
  }
  $pane_form['ecard_type'] = array(
    '#type' => 'radios',
    '#title' => t('Card type'),
    '#options' => $options,
    '#default_value' => $ecard_type,
    '#prefix' => '<div class="ecard-type">',
    '#suffix' => '</div>',
    '#attributes' => array('disabled' => 'disabled', 'class' => array('ecard-type')),
    '#ajax' => array(
      'callback' => 'commerce_ecard_ecards_forms',
      'wrapper' => 'commerce-ecard-forms',
      'method' => 'replace',
      'effect' => 'fade',
    ),
  );
  $no_js_message = variable_get('commerce_ecard_checkout_pane_no_js_message', t('In order to send an e-card, please enable JavaScript in your browser settings and reload the page.'));
  $pane_form['nojs_message'] = array(
    '#markup' => '<p id="commerce-ecard-nojs-message">' . $no_js_message . '</p>',
  );
  // Ecard forms, already generated above.
  if ($ecard_type == 'ecard') {
    $pane_form['commerce_ecards'] = $ecard_fields;
    $help_text = '<div class="description">' . t('Please add a personal message to your e-card below. This message will appear on the e-card which is emailed to the recipient.') . '</div>';
    $pane_form['commerce_ecards']['#prefix'] = '<div id="commerce-ecard-forms">' . $help_text;
    $pane_form['commerce_ecards']['#suffix'] = '</div>';
  }
  else {
    $pane_form['commerce_ecards'] = array();
    $pane_form['commerce_ecards']['#prefix'] = '<div id="commerce-ecard-forms">';
    $pane_form['commerce_ecards']['#suffix'] = '</div>';
  }

  return $pane_form;
}

/**
 * Returns form element for ajax card type choice toggle functionality.
 */
function commerce_ecard_ecards_forms($form, &$form_state) {
  return $form['checkout_ecard']['commerce_ecards'];
}

/**
 * Validate the ecard recipient email addresses.
 */
function commerce_ecard_checkout_pane_checkout_form_validate($form, &$form_state, $checkout_pane, $order) {
  $pane_id = $checkout_pane['pane_id'];

  if (!empty($form[$pane_id]) && !empty($form_state['values'])) {
    $pane_form = $form[$pane_id];
    $pane_values = $form_state['values'][$pane_id];
    if ($pane_values['ecard_type'] == 'ecard' && !empty($pane_values['commerce_ecards'])) {
      foreach ($pane_values['commerce_ecards'] as $product_key => $ecard) {
        $email = $ecard['to_email'];
        if (!valid_email_address($email)) {
          $error = t('%email is not a valid email address.', array('%email' => $email));
          form_set_error($checkout_pane['pane_id'] . '][commerce_ecards][' . $product_key . '][to_email', $error);
          return FALSE;
        }
      }
    }
  }

  return TRUE;
}

/**
 * Store the ecards for sending.
 */
function commerce_ecard_checkout_pane_checkout_form_submit($form, &$form_state, $checkout_pane, $order) {
  $pane_id = $checkout_pane['pane_id'];
  if (empty($form_state['values'][$pane_id])) {
    return;
  }
  $pane_values = $form_state['values'][$pane_id];
  $order_id = $order->order_id;

  $order->data[$checkout_pane['pane_id']] = array();
  $order->data[$checkout_pane['pane_id']]['ecard_type'] = $pane_values['ecard_type'];

  // Only continue if the card type selected was ecard.
  if ($pane_values['ecard_type'] == 'ecard' && !empty($pane_values['commerce_ecards'])) {
    $order->commerce_ecard_order = TRUE;
    $order->data[$checkout_pane['pane_id']]['commerce_ecards'] = $pane_values['commerce_ecards'];

    // Get the list of ecards in draft mode (if any) for this order.
    $drafts = array();
    $result = db_select('commerce_ecard_drafts', 'd')
                ->fields('d', array('product_key', 'hash'))
                ->condition('d.order_id', $order_id)
                ->execute();
    while ($row = $result->fetchObject()) {
      $drafts[$row->product_key] = $row->hash;
    }

    // Loop through ecards values in the order.
    foreach ($pane_values['commerce_ecards'] as $product_key => $value) {
      $product = entity_load('commerce_product', array($value['product_id']));

      // Requires billing address field.
      $addressfield = $form_state['values']['customer_profile_billing']['commerce_customer_address']['und'][0];
      $name_from = '';
      if (isset($addressfield['name_line'])) {
        $name_from = $addressfield['name_line'];
      }
      elseif (isset($addressfield['first_name'])) {
        $name_from = implode(' ', array($addressfield['first_name'], $addressfield['last_name']));
      }

      // Set up entry for commerce_ecard_drafts table.
      $draft = new stdClass;
      $draft->order_id = $order_id;
      $draft->product_key = $product_key;

      // Get the hash value if we have it and update existing ecard record.
      if (isset($drafts[$product_key])) {
        $hash = $drafts[$product_key];
        $ecards = ecard_read($hash);
        foreach ($ecards as $ecard) {
          $ecard->name_from = $name_from;
          $ecard->mail_from = isset($order->mail) ? $order->mail : $order->mail;
          $ecard->name_to = $value['to_name'];
          $ecard->mail_from = $value['to_email'];
          $ecard->notify = (isset($value['notify']) ? $value['notify'] : 0);
          $ecard->text = filter_xss_admin($value['message']);
          $ecard_record = ecard_update($ecard);
        }

        // Write the record to the drafts table.
        $draft->hash = $ecard_record->hash;
        drupal_write_record('commerce_ecard_drafts', $draft, array('order_id', 'hash'));

        // Remove from drafts array so we know later what is no longer in the
        // cart.
        unset($drafts[$product_key]);
      }

      // Otherwise create a new ecard.
      else {
        // Put together the ecard array for saving to the db.
        $ecard = array(
          'entity_type' => 'commerce_product',
          'bundle' => $product[$value['product_id']]->type,
          'entity_id' => $value['product_id'],
          'uid' => $order->uid,
          'name_from' => $name_from,
          'mail_from' => isset($order->mail) ? $order->mail : $order->mail,
          'name_to' => $value['to_name'],
          'mail_to' => $value['to_email'],
          'notify' => (isset($value['notify']) ? $value['notify'] : 0),
          'text' => filter_xss_admin($value['message']),
          'scheduled_time' => 0,
          'field_name' => 'field_ecard',
        );
        $ecard_record = ecard_create($ecard);

        // Write the record to the drafts table.
        $draft->hash = $ecard_record->hash;
        drupal_write_record('commerce_ecard_drafts', $draft);
      }
    }

    // Delete the ecards for the remaining items in $drafts.
    if (!empty($drafts)) {
      db_delete('commerce_ecard_drafts')
        ->condition('order_id', $order_id)
        ->condition('product_key', array_keys($drafts), 'IN')
        ->execute();
      ecard_delete_multiple(array_values($drafts));
    }
  }
}

