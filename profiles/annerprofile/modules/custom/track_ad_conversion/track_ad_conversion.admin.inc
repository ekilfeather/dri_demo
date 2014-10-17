<?php

/**
 * @file
 * Administration forms for track_ad_conversion module.
 */

/**
 * Overview form - lists all configured tracking methods.
 */
function track_ad_conversion_list() {
  $methods = track_ad_conversion_get_methods();

  // No methods found.
  if (empty($methods)) {
    return '<p>' . t('No tracking methods configured. Please <a href="@url">add one</a> now.', array('@url' => url('admin/config/system/track-ad-conversion/add'))) . '</p>';
  }

  $header = array(
    t('Name'),
    t('Enabled'),
    t('Operations'),
  );

  $rows = array();
  foreach ($methods as $method) {
    $row = array();
    $row[] = check_plain($method->name);
    $row[] = ($method->status ? t('Yes') : t('No'));
    $edit = l(t('edit'), 'admin/config/system/track-ad-conversion/' . $method->method_id . '/edit');
    $delete = l(t('delete'), 'admin/config/system/track-ad-conversion/' . $method->method_id . '/delete');
    $row[] = $edit . '&nbsp;' . $delete;
    $rows[] = $row;
  }

  return theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * Add a new ad conversion tracking method.
 */
function track_ad_conversion_add_method_form($form, $form_state = NULL) {
  return track_ad_conversion_method_form(FALSE);
}

/**
 * Submit handler for add method form.
 */
function track_ad_conversion_add_method_form_submit($form, &$form_state) {
  $method = new stdClass;
  $method->name = $form_state['values']['name'];
  $method->snippet = $form_state['values']['snippet'];
  $method->status = $form_state['values']['status'];
  $method->placement = $form_state['values']['placement'];
  foreach ($form_state['values']['track'] as $key => $value) {
    $method->data[$key] = $value;
  }
  if (module_exists('pay')) {
    foreach ($form_state['values']['payment_api_forms'] as $key => $status) {
      $method->data[$key] = $form_state['values']['payment_api_forms'][$key];
    }
  }
  $method->data = serialize($method->data);
  drupal_write_record('track_ad_conversion_methods', $method);

  drupal_set_message(t('Your method has been saved successfully.'));
  $form_state['redirect'] = 'admin/config/system/track-ad-conversion';
}

/**
 * Edit an ad conversion tracking method.
 */
function track_ad_conversion_edit_method_form($form, $form_state = NULL, $method_id) {
  $method = track_ad_conversion_get_methods($method_id);
  if (empty($method)) {
    drupal_set_message(t('Failed to find matching method.'), 'error');
    return;
  }
  return track_ad_conversion_method_form($method);
}

/**
 * Submit handler for edit method form.
 */
function track_ad_conversion_edit_method_form_submit($form, &$form_state) {
  $method = new stdClass;
  $method->method_id = $form_state['values']['method_id'];
  $method->name = $form_state['values']['name'];
  $method->snippet = $form_state['values']['snippet'];
  $method->status = $form_state['values']['status'];
  $method->placement = $form_state['values']['placement'];
  foreach ($form_state['values']['track'] as $key => $value) {
    $method->data[$key] = $value;
  }
  if (module_exists('pay')) {
    foreach ($form_state['values']['payment_api_forms'] as $key => $status) {
      $method->data[$key] = $form_state['values']['payment_api_forms'][$key];
    }
  }
  $method->data = serialize($method->data);
  drupal_write_record('track_ad_conversion_methods', $method, 'method_id');

  drupal_set_message(t('Your method has been saved successfully.'));
  $form_state['redirect'] = 'admin/config/system/track-ad-conversion';
}

/**
 * Helper function to return an add / edit method form.
 */
function track_ad_conversion_method_form($method = FALSE) {
  $form = array();

  if (!empty($method)) {
    $form['method_id'] = array(
      '#type' => 'value',
      '#value' => $method->method_id,
    );
  }

  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Method name'),
    '#description' => t('Assign a name to this method so you can easily identify it later.'),
    '#required' => TRUE,
    '#default_value' => (!empty($method) ? $method->name : ''),
  );

  $form['status'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enabled'),
    '#default_value' => (!empty($method) ? $method->status : 1),
  );

  $form['placement'] = array(
    '#type' => 'radios',
    '#title' => t('Placement'),
    '#options' => array(
      'header' => t('Header'),
      'page_top' => t('Page top'),
      'footer' => t('Footer (recommended)'),
    ),
    '#default_value' => (!empty($method) ? $method->placement : 'footer'),
    '#description' => t('Note, <em>Header</em> option is only valid for JavaScript code and should not contain <em>&lt;script&gt;</em> tags.'),
  );

  $form['snippet'] = array(
    '#type' => 'textarea',
    '#title' => t('Code snippet'),
    '#description' => t('The HTML or JavaScript code snippet provided by the ad provider.'),
    '#required' => TRUE,
    '#default_value' => (!empty($method) ? $method->snippet : ''),
  );
  $form['tokens'] = array(
    '#markup' => theme('token_tree', array('token_types' => array('track-ad-conversion'), '#global_types' => TRUE)),
    '#weight' => 99999
  );

  $form['track'] = array(
    '#tree' => TRUE,
  );

  // Specific pages.
  $form['track']['track_pages'] = array(
    '#type' => 'checkbox',
    '#title' => t('Add code snippet to specified pages.'),
    '#default_value' => (!empty($method) ? $method->data['track_pages'] : 0),
  );
  $form['track']['pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Add code snippet to pages listed below:'),
    '#description' => t("Enter one page per line as Drupal paths. The '*' character is a wildcard. Example paths are blog for the blog page and blog/* for every personal blog. <front> is the front page. Note replacement tokens not supported on these pages."),
    '#default_value' => (!empty($method) ? $method->data['pages'] : ''),
  );
  $form['track']['track_pages_type'] = array(
    '#type' => 'radios',
    '#title' => t('Limit or extend the options below by the pages entered'),
    '#description' => t("If <em>Extend</em> is chosen, then the matching on page path when combined with the other selection options is an <em>OR</em> operation.  If <em>Limit</em> is chosen, then an <em>AND</em> operation is used to determine if this is an active method."),
    '#options' => array(
      'limit' => t('Limit'),
      'extend' => t('Extend'),
    ),
    '#default_value' => (!empty($method) ? $method->data['track_pages_type'] : 'extend'),
  );

  // Drupal Commerce.
  if (module_exists('commerce_order')) {
    $form['track']['drupal_commerce'] = array(
      '#type' => 'checkbox',
      '#title' => t('Add code snippet to Drupal Commerce payment thank you page.'),
      '#default_value' => (!empty($method) && !empty($method->data['drupal_commerce'])) ? $method->data['drupal_commerce'] : 0,
    );
  }

  // Ubercart.
  if (module_exists('uc_order')) {
    $form['track']['ubercart'] = array(
      '#type' => 'checkbox',
      '#title' => t('Add code snippet to Ubercart payment thank you page.'),
      '#default_value' => (!empty($method) && !empty($method->data['ubercart'])) ? $method->data['ubercart'] : 0,
    );
  }

  // Payment API.
  if (module_exists('pay')) {
    $form['track']['payment_api'] = array(
      '#type' => 'checkbox',
      '#title' => t('Add code snippet to Payment API thank you page.'),
      '#default_value' => (!empty($method) && !empty($method->data['payment_api'])) ? $method->data['payment_api'] : 0,
    );
    $pay_forms = pay_forms_list();
    $form['payment_api_forms'] = array(
      '#type' => 'fieldset',
      '#title' => t('Payment forms'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#tree' => TRUE,
    );
    foreach ($pay_forms as $pfid => $pay_form) {
      $form['payment_api_forms']['payment_api_form_' . $pfid] = array(
        '#type' => 'checkbox',
        '#title' => check_plain($pay_form->title),
        '#default_value' => (!empty($method) && !empty($method->data['payment_api_form_' . $pfid])) ? $method->data['payment_api_form_' . $pfid] : FALSE,
      );
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => (!empty($method) ? t('Save') : t('Add')),
  );

  return $form;
}

/**
 * Delete a ad tracking method.
 */
function track_ad_conversion_delete_method_form($form, $form_state = NULL, $method_id) {
  $form = array();
  $method = track_ad_conversion_get_methods($method_id);
  if (empty($method)) {
    drupal_set_message(t('Failed to find matching method.'), 'error');
    return;
  }

  $form['method_id'] = array(
    '#type' => 'value',
    '#value' => $method_id,
  );

  return confirm_form(
    $form,
    t('Are you sure you want to delete method %method?', array('%method' => $method->name)),
    'admin/config/system/track-ad-conversion',
    t('This action cannot be undone.'),
    t('Delete')
  );
}

/**
 * Submit handler for delete ad tracking method.
 */
function track_ad_conversion_delete_method_form_submit($form, &$form_state) {
  db_delete('track_ad_conversion_methods')
  ->condition('method_id', $form_state['values']['method_id'])
  ->execute();
  drupal_set_message(t('Method deleted successfully.'));
  $form_state['redirect'] = 'admin/config/system/track-ad-conversion';
}

