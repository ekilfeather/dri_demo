<?php

/**
 * @file
 * Integrates commerce_ecard tables with Views.
 */

/**
 * Implements hook_views_data().
 */
function commerce_ecard_views_data() {
  $data['commerce_ecard_drafts']['table']['group'] = t('Commerce Ecard');
  $data['commerce_ecard_drafts']['table']['join'] = array(
    'commerce_order' => array(
      'left_field' => 'order_id',
      'field' => 'order_id',
    ),
    'ecard' => array(
      'left_field' => 'hash',
      'field' => 'hash',
    ),
  );

  // Expose the order ID.
  $data['commerce_ecard_drafts']['order_id'] = array(
    'title' => t('Order ID', array(), array('context' => 'a drupal commerce order')),
    'help' => t('The unique internal identifier of the associated order.'),
    'field' => array(
      'handler' => 'commerce_order_handler_field_order',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'commerce_order_handler_argument_order_order_id',
      'name field' => 'order_number',
      'numeric' => TRUE,
      'validate type' => 'order_id',
    ),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'commerce_order',
      'field' => 'order_id',
      'label' => t('Order', array(), array('context' => 'a drupal commerce order')),
    ),
  );

  $data['commerce_ecard_drafts']['hash'] = array(
    'title' => t('Ecard hash'),
    'help' => t('The ecard unique token or hash.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'ecard',
      'base field' => 'hash',
      'label' => t('Ecard'),
    ),
  );


  $data['commerce_order']['commerce_ecard_order'] = array(
    'title' => t('Ecard order'),
    'help' => t('Whether or not this is an ecard order.'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  return $data;
}

