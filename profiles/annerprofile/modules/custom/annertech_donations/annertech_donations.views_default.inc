<?php
/**
 * @file
 * annertech_donations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function annertech_donations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'regular_donations_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Regular donations report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Regular donations - EUR';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view donations reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'sid' => 'sid',
    'data' => 'data',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'data' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No matching transactions found.';
  $handler->display->display_options['empty']['area']['format'] = 'extra_html';
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '25';
  $handler->display->display_options['relationships']['data']['submission_data'] = '';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '26';
  $handler->display->display_options['relationships']['data_1']['submission_data'] = '';
  /* Relationship: Address line 1 */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '27';
  $handler->display->display_options['relationships']['data_2']['submission_data'] = '';
  /* Relationship: Address line 2 */
  $handler->display->display_options['relationships']['data_3']['id'] = 'data_3';
  $handler->display->display_options['relationships']['data_3']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_3']['field'] = 'data';
  $handler->display->display_options['relationships']['data_3']['ui_name'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_3']['webform_cid'] = '38';
  $handler->display->display_options['relationships']['data_3']['submission_data'] = '';
  /* Relationship: City */
  $handler->display->display_options['relationships']['data_4']['id'] = 'data_4';
  $handler->display->display_options['relationships']['data_4']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_4']['field'] = 'data';
  $handler->display->display_options['relationships']['data_4']['ui_name'] = 'City';
  $handler->display->display_options['relationships']['data_4']['label'] = 'City';
  $handler->display->display_options['relationships']['data_4']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_4']['webform_cid'] = '28';
  $handler->display->display_options['relationships']['data_4']['submission_data'] = '';
  /* Relationship: County */
  $handler->display->display_options['relationships']['data_5']['id'] = 'data_5';
  $handler->display->display_options['relationships']['data_5']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_5']['field'] = 'data';
  $handler->display->display_options['relationships']['data_5']['ui_name'] = 'County';
  $handler->display->display_options['relationships']['data_5']['label'] = 'County';
  $handler->display->display_options['relationships']['data_5']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_5']['webform_cid'] = '30';
  $handler->display->display_options['relationships']['data_5']['submission_data'] = '';
  /* Relationship: Country */
  $handler->display->display_options['relationships']['data_6']['id'] = 'data_6';
  $handler->display->display_options['relationships']['data_6']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_6']['field'] = 'data';
  $handler->display->display_options['relationships']['data_6']['ui_name'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['label'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_6']['webform_cid'] = '29';
  $handler->display->display_options['relationships']['data_6']['submission_data'] = '';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_7']['id'] = 'data_7';
  $handler->display->display_options['relationships']['data_7']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_7']['field'] = 'data';
  $handler->display->display_options['relationships']['data_7']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_7']['webform_cid'] = '32';
  $handler->display->display_options['relationships']['data_7']['submission_data'] = '';
  /* Relationship: Phone */
  $handler->display->display_options['relationships']['data_8']['id'] = 'data_8';
  $handler->display->display_options['relationships']['data_8']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_8']['field'] = 'data';
  $handler->display->display_options['relationships']['data_8']['ui_name'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['label'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_8']['webform_cid'] = '31';
  $handler->display->display_options['relationships']['data_8']['submission_data'] = '';
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '3';
  $handler->display->display_options['relationships']['data_9']['submission_data'] = '';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '4';
  $handler->display->display_options['relationships']['data_10']['submission_data'] = '';
  /* Relationship: Hear more - email */
  $handler->display->display_options['relationships']['data_12']['id'] = 'data_12';
  $handler->display->display_options['relationships']['data_12']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_12']['field'] = 'data';
  $handler->display->display_options['relationships']['data_12']['ui_name'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['label'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_12']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_12']['submission_data'] = 'email';
  /* Relationship: Hear more - sms */
  $handler->display->display_options['relationships']['data_13']['id'] = 'data_13';
  $handler->display->display_options['relationships']['data_13']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_13']['field'] = 'data';
  $handler->display->display_options['relationships']['data_13']['ui_name'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['label'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_13']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_13']['submission_data'] = 'sms';
  /* Relationship: Hear more - phone */
  $handler->display->display_options['relationships']['data_14']['id'] = 'data_14';
  $handler->display->display_options['relationships']['data_14']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_14']['field'] = 'data';
  $handler->display->display_options['relationships']['data_14']['ui_name'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['label'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_14']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_14']['submission_data'] = 'phone';
  /* Relationship: Hear more - post */
  $handler->display->display_options['relationships']['data_15']['id'] = 'data_15';
  $handler->display->display_options['relationships']['data_15']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_15']['field'] = 'data';
  $handler->display->display_options['relationships']['data_15']['ui_name'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['label'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_15']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_15']['submission_data'] = 'post';
  /* Relationship: Frequency */
  $handler->display->display_options['relationships']['data_11']['id'] = 'data_11';
  $handler->display->display_options['relationships']['data_11']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_11']['field'] = 'data';
  $handler->display->display_options['relationships']['data_11']['ui_name'] = 'Frequency';
  $handler->display->display_options['relationships']['data_11']['label'] = 'Frequency';
  $handler->display->display_options['relationships']['data_11']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_11']['webform_cid'] = '5';
  $handler->display->display_options['relationships']['data_11']['submission_data'] = '';
  /* Relationship: Bank account name */
  $handler->display->display_options['relationships']['data_16']['id'] = 'data_16';
  $handler->display->display_options['relationships']['data_16']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_16']['field'] = 'data';
  $handler->display->display_options['relationships']['data_16']['ui_name'] = 'Bank account name';
  $handler->display->display_options['relationships']['data_16']['label'] = 'Bank account name';
  $handler->display->display_options['relationships']['data_16']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_16']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_16']['submission_data'] = '';
  /* Relationship: Bank name */
  $handler->display->display_options['relationships']['data_17']['id'] = 'data_17';
  $handler->display->display_options['relationships']['data_17']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_17']['field'] = 'data';
  $handler->display->display_options['relationships']['data_17']['ui_name'] = 'Bank name';
  $handler->display->display_options['relationships']['data_17']['label'] = 'Bank name';
  $handler->display->display_options['relationships']['data_17']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_17']['webform_cid'] = '20';
  $handler->display->display_options['relationships']['data_17']['submission_data'] = '';
  /* Relationship: Bank sort code */
  $handler->display->display_options['relationships']['data_18']['id'] = 'data_18';
  $handler->display->display_options['relationships']['data_18']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_18']['field'] = 'data';
  $handler->display->display_options['relationships']['data_18']['ui_name'] = 'Bank sort code';
  $handler->display->display_options['relationships']['data_18']['label'] = 'Bank sort code';
  $handler->display->display_options['relationships']['data_18']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_18']['webform_cid'] = '47';
  $handler->display->display_options['relationships']['data_18']['submission_data'] = '';
  /* Relationship: Bank account number */
  $handler->display->display_options['relationships']['data_19']['id'] = 'data_19';
  $handler->display->display_options['relationships']['data_19']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_19']['field'] = 'data';
  $handler->display->display_options['relationships']['data_19']['ui_name'] = 'Bank account number';
  $handler->display->display_options['relationships']['data_19']['label'] = 'Bank account number';
  $handler->display->display_options['relationships']['data_19']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_19']['webform_cid'] = '46';
  $handler->display->display_options['relationships']['data_19']['submission_data'] = '';
  /* Relationship: Bank address */
  $handler->display->display_options['relationships']['data_20']['id'] = 'data_20';
  $handler->display->display_options['relationships']['data_20']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_20']['field'] = 'data';
  $handler->display->display_options['relationships']['data_20']['ui_name'] = 'Bank address';
  $handler->display->display_options['relationships']['data_20']['label'] = 'Bank address';
  $handler->display->display_options['relationships']['data_20']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_20']['webform_cid'] = '21';
  $handler->display->display_options['relationships']['data_20']['submission_data'] = '';
  /* Relationship: DD starting date */
  $handler->display->display_options['relationships']['data_22']['id'] = 'data_22';
  $handler->display->display_options['relationships']['data_22']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_22']['field'] = 'data';
  $handler->display->display_options['relationships']['data_22']['ui_name'] = 'DD starting date';
  $handler->display->display_options['relationships']['data_22']['label'] = 'DD starting date';
  $handler->display->display_options['relationships']['data_22']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_22']['webform_cid'] = '53';
  $handler->display->display_options['relationships']['data_22']['submission_data'] = '';
  /* Relationship: Postcode */
  $handler->display->display_options['relationships']['data_21']['id'] = 'data_21';
  $handler->display->display_options['relationships']['data_21']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_21']['field'] = 'data';
  $handler->display->display_options['relationships']['data_21']['ui_name'] = 'Postcode';
  $handler->display->display_options['relationships']['data_21']['label'] = 'Postcode';
  $handler->display->display_options['relationships']['data_21']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_21']['webform_cid'] = '48';
  $handler->display->display_options['relationships']['data_21']['submission_data'] = '';
  /* Relationship: Title */
  $handler->display->display_options['relationships']['data_23']['id'] = 'data_23';
  $handler->display->display_options['relationships']['data_23']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_23']['field'] = 'data';
  $handler->display->display_options['relationships']['data_23']['ui_name'] = 'Title';
  $handler->display->display_options['relationships']['data_23']['label'] = 'Title';
  $handler->display->display_options['relationships']['data_23']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_23']['webform_cid'] = '54';
  $handler->display->display_options['relationships']['data_23']['submission_data'] = '';
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Record Id';
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['label'] = 'Submission date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'd/m/Y';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_27']['id'] = 'data_27';
  $handler->display->display_options['fields']['data_27']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_27']['field'] = 'data';
  $handler->display->display_options['fields']['data_27']['relationship'] = 'data_23';
  $handler->display->display_options['fields']['data_27']['label'] = 'Title';
  $handler->display->display_options['fields']['data_27']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_27']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data';
  $handler->display->display_options['fields']['data']['label'] = 'First name';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['data_1']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['fields']['data_2']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_3']['id'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_3']['field'] = 'data';
  $handler->display->display_options['fields']['data_3']['relationship'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['fields']['data_3']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_4']['id'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_4']['field'] = 'data';
  $handler->display->display_options['fields']['data_4']['relationship'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['label'] = 'City';
  $handler->display->display_options['fields']['data_4']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_5']['id'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_5']['field'] = 'data';
  $handler->display->display_options['fields']['data_5']['relationship'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['label'] = 'County';
  $handler->display->display_options['fields']['data_5']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_26']['id'] = 'data_26';
  $handler->display->display_options['fields']['data_26']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_26']['field'] = 'data';
  $handler->display->display_options['fields']['data_26']['relationship'] = 'data_21';
  $handler->display->display_options['fields']['data_26']['label'] = 'Postcode';
  $handler->display->display_options['fields']['data_26']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_6']['id'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_6']['field'] = 'data';
  $handler->display->display_options['fields']['data_6']['relationship'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['label'] = 'Country';
  $handler->display->display_options['fields']['data_6']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_7']['id'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_7']['field'] = 'data';
  $handler->display->display_options['fields']['data_7']['relationship'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['label'] = 'Email address';
  $handler->display->display_options['fields']['data_7']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_8']['id'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_8']['field'] = 'data';
  $handler->display->display_options['fields']['data_8']['relationship'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['label'] = 'Phone number';
  $handler->display->display_options['fields']['data_8']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_15']['id'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_15']['field'] = 'data';
  $handler->display->display_options['fields']['data_15']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['label'] = 'Mail';
  $handler->display->display_options['fields']['data_15']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_15']['alter']['text'] = 'All mail';
  $handler->display->display_options['fields']['data_15']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_15']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_19']['id'] = 'data_19';
  $handler->display->display_options['fields']['data_19']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_19']['field'] = 'data';
  $handler->display->display_options['fields']['data_19']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_19']['label'] = 'No Mail';
  $handler->display->display_options['fields']['data_19']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_19']['alter']['text'] = '    ';
  $handler->display->display_options['fields']['data_19']['empty'] = 'Donor requests no mail';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_12']['id'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_12']['field'] = 'data';
  $handler->display->display_options['fields']['data_12']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['label'] = 'Email';
  $handler->display->display_options['fields']['data_12']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_12']['alter']['text'] = 'All email';
  $handler->display->display_options['fields']['data_12']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_12']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_16']['id'] = 'data_16';
  $handler->display->display_options['fields']['data_16']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_16']['field'] = 'data';
  $handler->display->display_options['fields']['data_16']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_16']['label'] = 'No email';
  $handler->display->display_options['fields']['data_16']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_16']['alter']['text'] = '  ';
  $handler->display->display_options['fields']['data_16']['empty'] = 'Donor requests no email';
  $handler->display->display_options['fields']['data_16']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_14']['id'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_14']['field'] = 'data';
  $handler->display->display_options['fields']['data_14']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['label'] = 'Phone';
  $handler->display->display_options['fields']['data_14']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_14']['alter']['text'] = 'All phone';
  $handler->display->display_options['fields']['data_14']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_14']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_18']['id'] = 'data_18';
  $handler->display->display_options['fields']['data_18']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_18']['field'] = 'data';
  $handler->display->display_options['fields']['data_18']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_18']['label'] = 'No Phone';
  $handler->display->display_options['fields']['data_18']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_18']['alter']['text'] = '     ';
  $handler->display->display_options['fields']['data_18']['empty'] = 'Donor requests no phone';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_13']['id'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_13']['field'] = 'data';
  $handler->display->display_options['fields']['data_13']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['label'] = 'SMS';
  $handler->display->display_options['fields']['data_13']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_13']['alter']['text'] = 'All SMS';
  $handler->display->display_options['fields']['data_13']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_13']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_17']['id'] = 'data_17';
  $handler->display->display_options['fields']['data_17']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_17']['field'] = 'data';
  $handler->display->display_options['fields']['data_17']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_17']['label'] = 'No SMS';
  $handler->display->display_options['fields']['data_17']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_17']['alter']['text'] = '   ';
  $handler->display->display_options['fields']['data_17']['empty'] = 'Donor requests no SMS';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['label'] = 'Gift amount';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Currency';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_25']['id'] = 'data_25';
  $handler->display->display_options['fields']['data_25']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_25']['field'] = 'data';
  $handler->display->display_options['fields']['data_25']['relationship'] = 'data_22';
  $handler->display->display_options['fields']['data_25']['label'] = 'Gift start date';
  $handler->display->display_options['fields']['data_25']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_11']['id'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_11']['field'] = 'data';
  $handler->display->display_options['fields']['data_11']['relationship'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['label'] = 'Frequency';
  $handler->display->display_options['fields']['data_11']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_20']['id'] = 'data_20';
  $handler->display->display_options['fields']['data_20']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_20']['field'] = 'data';
  $handler->display->display_options['fields']['data_20']['relationship'] = 'data_16';
  $handler->display->display_options['fields']['data_20']['label'] = 'Bank account name';
  $handler->display->display_options['fields']['data_20']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_22']['id'] = 'data_22';
  $handler->display->display_options['fields']['data_22']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_22']['field'] = 'data';
  $handler->display->display_options['fields']['data_22']['relationship'] = 'data_17';
  $handler->display->display_options['fields']['data_22']['label'] = 'Bank name';
  $handler->display->display_options['fields']['data_22']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_21']['id'] = 'data_21';
  $handler->display->display_options['fields']['data_21']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_21']['field'] = 'data';
  $handler->display->display_options['fields']['data_21']['relationship'] = 'data_18';
  $handler->display->display_options['fields']['data_21']['label'] = 'Bank sort code';
  $handler->display->display_options['fields']['data_21']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_23']['id'] = 'data_23';
  $handler->display->display_options['fields']['data_23']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_23']['field'] = 'data';
  $handler->display->display_options['fields']['data_23']['relationship'] = 'data_19';
  $handler->display->display_options['fields']['data_23']['label'] = 'Bank account number';
  $handler->display->display_options['fields']['data_23']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_24']['id'] = 'data_24';
  $handler->display->display_options['fields']['data_24']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_24']['field'] = 'data';
  $handler->display->display_options['fields']['data_24']['relationship'] = 'data_20';
  $handler->display->display_options['fields']['data_24']['label'] = 'Bank address';
  $handler->display->display_options['fields']['data_24']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_28']['id'] = 'data_28';
  $handler->display->display_options['fields']['data_28']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_28']['field'] = 'data';
  $handler->display->display_options['fields']['data_28']['relationship'] = 'data';
  /* Field: Webform submissions: Remote address */
  $handler->display->display_options['fields']['remote_addr']['id'] = 'remote_addr';
  $handler->display->display_options['fields']['remote_addr']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['remote_addr']['field'] = 'remote_addr';
  $handler->display->display_options['fields']['remote_addr']['label'] = 'IP address';
  $handler->display->display_options['fields']['remote_addr']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['remote_addr']['alter']['strip_tags'] = TRUE;
  /* Sort criterion: Webform submissions: Submitted */
  $handler->display->display_options['sorts']['submitted']['id'] = 'submitted';
  $handler->display->display_options['sorts']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['sorts']['submitted']['field'] = 'submitted';
  $handler->display->display_options['sorts']['submitted']['order'] = 'DESC';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '45';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data_10';
  $handler->display->display_options['filters']['data']['value'] = 'EUR';
  $handler->display->display_options['filters']['data']['expose']['operator_id'] = 'data_op';
  $handler->display->display_options['filters']['data']['expose']['label'] = 'Data field';
  $handler->display->display_options['filters']['data']['expose']['operator'] = 'data_op';
  $handler->display->display_options['filters']['data']['expose']['identifier'] = 'data';
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'From date';
  $handler->display->display_options['filters']['submitted']['expose']['description'] = 'Enter date formats yyyy-mm-dd';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['submitted']['group_info']['label'] = 'Submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['group_items'] = array(
    2 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'firstname';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_2']['id'] = 'data_2';
  $handler->display->display_options['filters']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_2']['field'] = 'data';
  $handler->display->display_options['filters']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['filters']['data_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_2']['expose']['operator_id'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['data_2']['expose']['operator'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['identifier'] = 'lastname';
  $handler->display->display_options['filters']['data_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_3']['id'] = 'data_3';
  $handler->display->display_options['filters']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_3']['field'] = 'data';
  $handler->display->display_options['filters']['data_3']['relationship'] = 'data_7';
  $handler->display->display_options['filters']['data_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_3']['expose']['operator_id'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['label'] = 'Email address';
  $handler->display->display_options['filters']['data_3']['expose']['operator'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['data_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: EUR - Page */
  $handler = $view->new_display('page', 'EUR - Page', 'regular_donations_eur_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/reports/donations/regular/euro';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'EUR';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Regular Donations';
  $handler->display->display_options['tab_options']['weight'] = '1';

  /* Display: GBP - Page */
  $handler = $view->new_display('page', 'GBP - Page', 'regular_donations_gbp_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Regular donations - GBP';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '25';
  $handler->display->display_options['relationships']['data']['submission_data'] = '';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '26';
  $handler->display->display_options['relationships']['data_1']['submission_data'] = '';
  /* Relationship: Address line 1 */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '27';
  $handler->display->display_options['relationships']['data_2']['submission_data'] = '';
  /* Relationship: Address line 2 */
  $handler->display->display_options['relationships']['data_3']['id'] = 'data_3';
  $handler->display->display_options['relationships']['data_3']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_3']['field'] = 'data';
  $handler->display->display_options['relationships']['data_3']['ui_name'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_3']['webform_cid'] = '38';
  $handler->display->display_options['relationships']['data_3']['submission_data'] = '';
  /* Relationship: City */
  $handler->display->display_options['relationships']['data_4']['id'] = 'data_4';
  $handler->display->display_options['relationships']['data_4']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_4']['field'] = 'data';
  $handler->display->display_options['relationships']['data_4']['ui_name'] = 'City';
  $handler->display->display_options['relationships']['data_4']['label'] = 'City';
  $handler->display->display_options['relationships']['data_4']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_4']['webform_cid'] = '28';
  $handler->display->display_options['relationships']['data_4']['submission_data'] = '';
  /* Relationship: County */
  $handler->display->display_options['relationships']['data_5']['id'] = 'data_5';
  $handler->display->display_options['relationships']['data_5']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_5']['field'] = 'data';
  $handler->display->display_options['relationships']['data_5']['ui_name'] = 'County';
  $handler->display->display_options['relationships']['data_5']['label'] = 'County';
  $handler->display->display_options['relationships']['data_5']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_5']['webform_cid'] = '30';
  $handler->display->display_options['relationships']['data_5']['submission_data'] = '';
  /* Relationship: Country */
  $handler->display->display_options['relationships']['data_6']['id'] = 'data_6';
  $handler->display->display_options['relationships']['data_6']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_6']['field'] = 'data';
  $handler->display->display_options['relationships']['data_6']['ui_name'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['label'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_6']['webform_cid'] = '29';
  $handler->display->display_options['relationships']['data_6']['submission_data'] = '';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_7']['id'] = 'data_7';
  $handler->display->display_options['relationships']['data_7']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_7']['field'] = 'data';
  $handler->display->display_options['relationships']['data_7']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_7']['webform_cid'] = '32';
  $handler->display->display_options['relationships']['data_7']['submission_data'] = '';
  /* Relationship: Phone */
  $handler->display->display_options['relationships']['data_8']['id'] = 'data_8';
  $handler->display->display_options['relationships']['data_8']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_8']['field'] = 'data';
  $handler->display->display_options['relationships']['data_8']['ui_name'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['label'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_8']['webform_cid'] = '31';
  $handler->display->display_options['relationships']['data_8']['submission_data'] = '';
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '3';
  $handler->display->display_options['relationships']['data_9']['submission_data'] = '';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '4';
  $handler->display->display_options['relationships']['data_10']['submission_data'] = '';
  /* Relationship: Hear more - email */
  $handler->display->display_options['relationships']['data_12']['id'] = 'data_12';
  $handler->display->display_options['relationships']['data_12']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_12']['field'] = 'data';
  $handler->display->display_options['relationships']['data_12']['ui_name'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['label'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_12']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_12']['submission_data'] = 'email';
  /* Relationship: Hear more - sms */
  $handler->display->display_options['relationships']['data_13']['id'] = 'data_13';
  $handler->display->display_options['relationships']['data_13']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_13']['field'] = 'data';
  $handler->display->display_options['relationships']['data_13']['ui_name'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['label'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_13']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_13']['submission_data'] = 'sms';
  /* Relationship: Hear more - phone */
  $handler->display->display_options['relationships']['data_14']['id'] = 'data_14';
  $handler->display->display_options['relationships']['data_14']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_14']['field'] = 'data';
  $handler->display->display_options['relationships']['data_14']['ui_name'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['label'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_14']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_14']['submission_data'] = 'phone';
  /* Relationship: Hear more - post */
  $handler->display->display_options['relationships']['data_15']['id'] = 'data_15';
  $handler->display->display_options['relationships']['data_15']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_15']['field'] = 'data';
  $handler->display->display_options['relationships']['data_15']['ui_name'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['label'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_15']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_15']['submission_data'] = 'post';
  /* Relationship: Frequency */
  $handler->display->display_options['relationships']['data_11']['id'] = 'data_11';
  $handler->display->display_options['relationships']['data_11']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_11']['field'] = 'data';
  $handler->display->display_options['relationships']['data_11']['ui_name'] = 'Frequency';
  $handler->display->display_options['relationships']['data_11']['label'] = 'Frequency';
  $handler->display->display_options['relationships']['data_11']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_11']['webform_cid'] = '5';
  $handler->display->display_options['relationships']['data_11']['submission_data'] = '';
  /* Relationship: Bank account name */
  $handler->display->display_options['relationships']['data_16']['id'] = 'data_16';
  $handler->display->display_options['relationships']['data_16']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_16']['field'] = 'data';
  $handler->display->display_options['relationships']['data_16']['ui_name'] = 'Bank account name';
  $handler->display->display_options['relationships']['data_16']['label'] = 'Bank account name';
  $handler->display->display_options['relationships']['data_16']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_16']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_16']['submission_data'] = '';
  /* Relationship: Bank name */
  $handler->display->display_options['relationships']['data_17']['id'] = 'data_17';
  $handler->display->display_options['relationships']['data_17']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_17']['field'] = 'data';
  $handler->display->display_options['relationships']['data_17']['ui_name'] = 'Bank name';
  $handler->display->display_options['relationships']['data_17']['label'] = 'Bank name';
  $handler->display->display_options['relationships']['data_17']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_17']['webform_cid'] = '20';
  $handler->display->display_options['relationships']['data_17']['submission_data'] = '';
  /* Relationship: Bank sort code */
  $handler->display->display_options['relationships']['data_18']['id'] = 'data_18';
  $handler->display->display_options['relationships']['data_18']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_18']['field'] = 'data';
  $handler->display->display_options['relationships']['data_18']['ui_name'] = 'Bank sort code';
  $handler->display->display_options['relationships']['data_18']['label'] = 'Bank sort code';
  $handler->display->display_options['relationships']['data_18']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_18']['webform_cid'] = '47';
  $handler->display->display_options['relationships']['data_18']['submission_data'] = '';
  /* Relationship: Bank account number */
  $handler->display->display_options['relationships']['data_19']['id'] = 'data_19';
  $handler->display->display_options['relationships']['data_19']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_19']['field'] = 'data';
  $handler->display->display_options['relationships']['data_19']['ui_name'] = 'Bank account number';
  $handler->display->display_options['relationships']['data_19']['label'] = 'Bank account number';
  $handler->display->display_options['relationships']['data_19']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_19']['webform_cid'] = '46';
  $handler->display->display_options['relationships']['data_19']['submission_data'] = '';
  /* Relationship: Bank address */
  $handler->display->display_options['relationships']['data_20']['id'] = 'data_20';
  $handler->display->display_options['relationships']['data_20']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_20']['field'] = 'data';
  $handler->display->display_options['relationships']['data_20']['ui_name'] = 'Bank address';
  $handler->display->display_options['relationships']['data_20']['label'] = 'Bank address';
  $handler->display->display_options['relationships']['data_20']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_20']['webform_cid'] = '21';
  $handler->display->display_options['relationships']['data_20']['submission_data'] = '';
  /* Relationship: DD starting date */
  $handler->display->display_options['relationships']['data_22']['id'] = 'data_22';
  $handler->display->display_options['relationships']['data_22']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_22']['field'] = 'data';
  $handler->display->display_options['relationships']['data_22']['ui_name'] = 'DD starting date';
  $handler->display->display_options['relationships']['data_22']['label'] = 'DD starting date';
  $handler->display->display_options['relationships']['data_22']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_22']['webform_cid'] = '53';
  $handler->display->display_options['relationships']['data_22']['submission_data'] = '';
  /* Relationship: Postcode */
  $handler->display->display_options['relationships']['data_21']['id'] = 'data_21';
  $handler->display->display_options['relationships']['data_21']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_21']['field'] = 'data';
  $handler->display->display_options['relationships']['data_21']['ui_name'] = 'Postcode';
  $handler->display->display_options['relationships']['data_21']['label'] = 'Postcode';
  $handler->display->display_options['relationships']['data_21']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_21']['webform_cid'] = '48';
  $handler->display->display_options['relationships']['data_21']['submission_data'] = '';
  /* Relationship: Gift aid */
  $handler->display->display_options['relationships']['data_23']['id'] = 'data_23';
  $handler->display->display_options['relationships']['data_23']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_23']['field'] = 'data';
  $handler->display->display_options['relationships']['data_23']['ui_name'] = 'Gift aid';
  $handler->display->display_options['relationships']['data_23']['label'] = 'Gift aid';
  $handler->display->display_options['relationships']['data_23']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_23']['webform_cid'] = '9';
  $handler->display->display_options['relationships']['data_23']['submission_data'] = '';
  /* Relationship: Bank post code */
  $handler->display->display_options['relationships']['data_24']['id'] = 'data_24';
  $handler->display->display_options['relationships']['data_24']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_24']['field'] = 'data';
  $handler->display->display_options['relationships']['data_24']['ui_name'] = 'Bank post code';
  $handler->display->display_options['relationships']['data_24']['label'] = 'Bank post code';
  $handler->display->display_options['relationships']['data_24']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_24']['webform_cid'] = '42';
  $handler->display->display_options['relationships']['data_24']['submission_data'] = '';
  /* Relationship: Title */
  $handler->display->display_options['relationships']['data_25']['id'] = 'data_25';
  $handler->display->display_options['relationships']['data_25']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_25']['field'] = 'data';
  $handler->display->display_options['relationships']['data_25']['ui_name'] = 'Title';
  $handler->display->display_options['relationships']['data_25']['label'] = 'Title';
  $handler->display->display_options['relationships']['data_25']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_25']['webform_cid'] = '54';
  $handler->display->display_options['relationships']['data_25']['submission_data'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Record Id';
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['label'] = 'Submission date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'd/m/Y';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_29']['id'] = 'data_29';
  $handler->display->display_options['fields']['data_29']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_29']['field'] = 'data';
  $handler->display->display_options['fields']['data_29']['relationship'] = 'data_25';
  $handler->display->display_options['fields']['data_29']['label'] = 'Title';
  $handler->display->display_options['fields']['data_29']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_29']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data';
  $handler->display->display_options['fields']['data']['label'] = 'First name';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['data_1']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['fields']['data_2']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_3']['id'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_3']['field'] = 'data';
  $handler->display->display_options['fields']['data_3']['relationship'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['fields']['data_3']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_4']['id'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_4']['field'] = 'data';
  $handler->display->display_options['fields']['data_4']['relationship'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['label'] = 'City';
  $handler->display->display_options['fields']['data_4']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_5']['id'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_5']['field'] = 'data';
  $handler->display->display_options['fields']['data_5']['relationship'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['label'] = 'County';
  $handler->display->display_options['fields']['data_5']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_26']['id'] = 'data_26';
  $handler->display->display_options['fields']['data_26']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_26']['field'] = 'data';
  $handler->display->display_options['fields']['data_26']['relationship'] = 'data_21';
  $handler->display->display_options['fields']['data_26']['label'] = 'Postcode';
  $handler->display->display_options['fields']['data_26']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_6']['id'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_6']['field'] = 'data';
  $handler->display->display_options['fields']['data_6']['relationship'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['label'] = 'Country';
  $handler->display->display_options['fields']['data_6']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_27']['id'] = 'data_27';
  $handler->display->display_options['fields']['data_27']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_27']['field'] = 'data';
  $handler->display->display_options['fields']['data_27']['relationship'] = 'data_23';
  $handler->display->display_options['fields']['data_27']['label'] = 'Gift aid';
  $handler->display->display_options['fields']['data_27']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_27']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['data_27']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data_27']['empty'] = 'No';
  $handler->display->display_options['fields']['data_27']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_7']['id'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_7']['field'] = 'data';
  $handler->display->display_options['fields']['data_7']['relationship'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['label'] = 'Email address';
  $handler->display->display_options['fields']['data_7']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_8']['id'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_8']['field'] = 'data';
  $handler->display->display_options['fields']['data_8']['relationship'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['label'] = 'Phone number';
  $handler->display->display_options['fields']['data_8']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_15']['id'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_15']['field'] = 'data';
  $handler->display->display_options['fields']['data_15']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['label'] = 'Mail';
  $handler->display->display_options['fields']['data_15']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_15']['alter']['text'] = 'All mail';
  $handler->display->display_options['fields']['data_15']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_15']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_19']['id'] = 'data_19';
  $handler->display->display_options['fields']['data_19']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_19']['field'] = 'data';
  $handler->display->display_options['fields']['data_19']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_19']['label'] = 'No Mail';
  $handler->display->display_options['fields']['data_19']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_19']['alter']['text'] = '    ';
  $handler->display->display_options['fields']['data_19']['empty'] = 'Donor requests no mail';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_12']['id'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_12']['field'] = 'data';
  $handler->display->display_options['fields']['data_12']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['label'] = 'Email';
  $handler->display->display_options['fields']['data_12']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_12']['alter']['text'] = 'All email';
  $handler->display->display_options['fields']['data_12']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_12']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_16']['id'] = 'data_16';
  $handler->display->display_options['fields']['data_16']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_16']['field'] = 'data';
  $handler->display->display_options['fields']['data_16']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_16']['label'] = 'No email';
  $handler->display->display_options['fields']['data_16']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_16']['alter']['text'] = '  ';
  $handler->display->display_options['fields']['data_16']['empty'] = 'Donor requests no email';
  $handler->display->display_options['fields']['data_16']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_14']['id'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_14']['field'] = 'data';
  $handler->display->display_options['fields']['data_14']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['label'] = 'Phone';
  $handler->display->display_options['fields']['data_14']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_14']['alter']['text'] = 'All phone';
  $handler->display->display_options['fields']['data_14']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_14']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_18']['id'] = 'data_18';
  $handler->display->display_options['fields']['data_18']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_18']['field'] = 'data';
  $handler->display->display_options['fields']['data_18']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_18']['label'] = 'No Phone';
  $handler->display->display_options['fields']['data_18']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_18']['alter']['text'] = '     ';
  $handler->display->display_options['fields']['data_18']['empty'] = 'Donor requests no phone';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_13']['id'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_13']['field'] = 'data';
  $handler->display->display_options['fields']['data_13']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['label'] = 'SMS';
  $handler->display->display_options['fields']['data_13']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_13']['alter']['text'] = 'All SMS';
  $handler->display->display_options['fields']['data_13']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_13']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_17']['id'] = 'data_17';
  $handler->display->display_options['fields']['data_17']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_17']['field'] = 'data';
  $handler->display->display_options['fields']['data_17']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_17']['label'] = 'No SMS';
  $handler->display->display_options['fields']['data_17']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_17']['alter']['text'] = '   ';
  $handler->display->display_options['fields']['data_17']['empty'] = 'Donor requests no SMS';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['label'] = 'Gift amount';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Currency';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_25']['id'] = 'data_25';
  $handler->display->display_options['fields']['data_25']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_25']['field'] = 'data';
  $handler->display->display_options['fields']['data_25']['relationship'] = 'data_22';
  $handler->display->display_options['fields']['data_25']['label'] = 'Gift start date';
  $handler->display->display_options['fields']['data_25']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_11']['id'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_11']['field'] = 'data';
  $handler->display->display_options['fields']['data_11']['relationship'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['label'] = 'Frequency';
  $handler->display->display_options['fields']['data_11']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_20']['id'] = 'data_20';
  $handler->display->display_options['fields']['data_20']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_20']['field'] = 'data';
  $handler->display->display_options['fields']['data_20']['relationship'] = 'data_16';
  $handler->display->display_options['fields']['data_20']['label'] = 'Bank account name';
  $handler->display->display_options['fields']['data_20']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_22']['id'] = 'data_22';
  $handler->display->display_options['fields']['data_22']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_22']['field'] = 'data';
  $handler->display->display_options['fields']['data_22']['relationship'] = 'data_17';
  $handler->display->display_options['fields']['data_22']['label'] = 'Bank name';
  $handler->display->display_options['fields']['data_22']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_21']['id'] = 'data_21';
  $handler->display->display_options['fields']['data_21']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_21']['field'] = 'data';
  $handler->display->display_options['fields']['data_21']['relationship'] = 'data_18';
  $handler->display->display_options['fields']['data_21']['label'] = 'Bank sort code';
  $handler->display->display_options['fields']['data_21']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_23']['id'] = 'data_23';
  $handler->display->display_options['fields']['data_23']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_23']['field'] = 'data';
  $handler->display->display_options['fields']['data_23']['relationship'] = 'data_19';
  $handler->display->display_options['fields']['data_23']['label'] = 'Bank account number';
  $handler->display->display_options['fields']['data_23']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_24']['id'] = 'data_24';
  $handler->display->display_options['fields']['data_24']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_24']['field'] = 'data';
  $handler->display->display_options['fields']['data_24']['relationship'] = 'data_20';
  $handler->display->display_options['fields']['data_24']['label'] = 'Bank address';
  $handler->display->display_options['fields']['data_24']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_28']['id'] = 'data_28';
  $handler->display->display_options['fields']['data_28']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_28']['field'] = 'data';
  $handler->display->display_options['fields']['data_28']['relationship'] = 'data_24';
  $handler->display->display_options['fields']['data_28']['label'] = 'Bank post code';
  /* Field: Webform submissions: Remote address */
  $handler->display->display_options['fields']['remote_addr']['id'] = 'remote_addr';
  $handler->display->display_options['fields']['remote_addr']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['remote_addr']['field'] = 'remote_addr';
  $handler->display->display_options['fields']['remote_addr']['label'] = 'IP address';
  $handler->display->display_options['fields']['remote_addr']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['remote_addr']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '45';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data_10';
  $handler->display->display_options['filters']['data']['value'] = 'GBP';
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'From date';
  $handler->display->display_options['filters']['submitted']['expose']['description'] = 'Enter date formats yyyy-mm-dd';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['submitted']['group_info']['label'] = 'Submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['group_items'] = array(
    2 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'firstname';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_2']['id'] = 'data_2';
  $handler->display->display_options['filters']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_2']['field'] = 'data';
  $handler->display->display_options['filters']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['filters']['data_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_2']['expose']['operator_id'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['data_2']['expose']['operator'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['identifier'] = 'lastname';
  $handler->display->display_options['filters']['data_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_3']['id'] = 'data_3';
  $handler->display->display_options['filters']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_3']['field'] = 'data';
  $handler->display->display_options['filters']['data_3']['relationship'] = 'data_7';
  $handler->display->display_options['filters']['data_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_3']['expose']['operator_id'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['label'] = 'Email address';
  $handler->display->display_options['filters']['data_3']['expose']['operator'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['data_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/reports/donations/regular/gbp';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'GBP';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Donations';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: EUR - Attachment */
  $handler = $view->new_display('attachment', 'EUR - Attachment', 'euro_attachment');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'data' => 'data',
    'data_9' => 'data_9',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>Total: EUR 0.00</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'extra_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '3';
  $handler->display->display_options['relationships']['data_9']['submission_data'] = '';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '4';
  $handler->display->display_options['relationships']['data_10']['submission_data'] = '';
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '25';
  $handler->display->display_options['relationships']['data']['submission_data'] = '';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '26';
  $handler->display->display_options['relationships']['data_1']['submission_data'] = '';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '32';
  $handler->display->display_options['relationships']['data_2']['submission_data'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data']['label'] = 'Total';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data']['element_wrapper_type'] = 'strong';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['group_type'] = 'sum';
  $handler->display->display_options['fields']['data_9']['label'] = '';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['data_9']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'single_donations_eur_page' => 'single_donations_eur_page',
    'default' => 0,
    'regular_donations_gbp_page' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: GBP - Attachment */
  $handler = $view->new_display('attachment', 'GBP - Attachment', 'gbp_attachment');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'data' => 'data',
    'data_9' => 'data_9',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>Total: GBP 0.00</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'extra_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '3';
  $handler->display->display_options['relationships']['data_9']['submission_data'] = '';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '4';
  $handler->display->display_options['relationships']['data_10']['submission_data'] = '';
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '25';
  $handler->display->display_options['relationships']['data']['submission_data'] = '';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '26';
  $handler->display->display_options['relationships']['data_1']['submission_data'] = '';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '32';
  $handler->display->display_options['relationships']['data_2']['submission_data'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data']['label'] = 'Total';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data']['element_wrapper_type'] = 'strong';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['group_type'] = 'sum';
  $handler->display->display_options['fields']['data_9']['label'] = '';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['data_9']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '45';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data_10';
  $handler->display->display_options['filters']['data']['value'] = 'GBP';
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'Gift Date';
  $handler->display->display_options['filters']['submitted']['expose']['description'] = 'Enter date formats yyyy-mm-dd';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['submitted']['group_info']['label'] = 'Submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['group_items'] = array(
    2 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'firstname';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_2']['id'] = 'data_2';
  $handler->display->display_options['filters']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_2']['field'] = 'data';
  $handler->display->display_options['filters']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['filters']['data_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_2']['expose']['operator_id'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['data_2']['expose']['operator'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['identifier'] = 'lastname';
  $handler->display->display_options['filters']['data_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_3']['id'] = 'data_3';
  $handler->display->display_options['filters']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_3']['field'] = 'data';
  $handler->display->display_options['filters']['data_3']['relationship'] = 'data_7';
  $handler->display->display_options['filters']['data_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_3']['expose']['operator_id'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['label'] = 'Email address';
  $handler->display->display_options['filters']['data_3']['expose']['operator'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['data_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['displays'] = array(
    'regular_donations_gbp_page' => 'regular_donations_gbp_page',
    'default' => 0,
    'single_donations_eur_page' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: EUR - Data export */
  $handler = $view->new_display('views_data_export', 'EUR - Data export', 'eur_views_data_export');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_eur.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Record Id';
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['label'] = 'Submission date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'd/m/Y';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_27']['id'] = 'data_27';
  $handler->display->display_options['fields']['data_27']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_27']['field'] = 'data';
  $handler->display->display_options['fields']['data_27']['relationship'] = 'data_23';
  $handler->display->display_options['fields']['data_27']['label'] = 'Title';
  $handler->display->display_options['fields']['data_27']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_27']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data';
  $handler->display->display_options['fields']['data']['label'] = 'First name';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['data_1']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['fields']['data_2']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_3']['id'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_3']['field'] = 'data';
  $handler->display->display_options['fields']['data_3']['relationship'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['fields']['data_3']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_4']['id'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_4']['field'] = 'data';
  $handler->display->display_options['fields']['data_4']['relationship'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['label'] = 'City';
  $handler->display->display_options['fields']['data_4']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_5']['id'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_5']['field'] = 'data';
  $handler->display->display_options['fields']['data_5']['relationship'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['label'] = 'County';
  $handler->display->display_options['fields']['data_5']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_26']['id'] = 'data_26';
  $handler->display->display_options['fields']['data_26']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_26']['field'] = 'data';
  $handler->display->display_options['fields']['data_26']['relationship'] = 'data_21';
  $handler->display->display_options['fields']['data_26']['label'] = 'Postcode';
  $handler->display->display_options['fields']['data_26']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_6']['id'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_6']['field'] = 'data';
  $handler->display->display_options['fields']['data_6']['relationship'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['label'] = 'Country';
  $handler->display->display_options['fields']['data_6']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_7']['id'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_7']['field'] = 'data';
  $handler->display->display_options['fields']['data_7']['relationship'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['label'] = 'Email address';
  $handler->display->display_options['fields']['data_7']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_8']['id'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_8']['field'] = 'data';
  $handler->display->display_options['fields']['data_8']['relationship'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['label'] = 'Phone number';
  $handler->display->display_options['fields']['data_8']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_15']['id'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_15']['field'] = 'data';
  $handler->display->display_options['fields']['data_15']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['label'] = 'Mail';
  $handler->display->display_options['fields']['data_15']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_15']['alter']['text'] = 'All mail';
  $handler->display->display_options['fields']['data_15']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_15']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_19']['id'] = 'data_19';
  $handler->display->display_options['fields']['data_19']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_19']['field'] = 'data';
  $handler->display->display_options['fields']['data_19']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_19']['label'] = 'No Mail';
  $handler->display->display_options['fields']['data_19']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_19']['alter']['text'] = '    ';
  $handler->display->display_options['fields']['data_19']['empty'] = 'Donor requests no mail';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_12']['id'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_12']['field'] = 'data';
  $handler->display->display_options['fields']['data_12']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['label'] = 'Email';
  $handler->display->display_options['fields']['data_12']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_12']['alter']['text'] = 'All email';
  $handler->display->display_options['fields']['data_12']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_12']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_16']['id'] = 'data_16';
  $handler->display->display_options['fields']['data_16']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_16']['field'] = 'data';
  $handler->display->display_options['fields']['data_16']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_16']['label'] = 'No email';
  $handler->display->display_options['fields']['data_16']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_16']['alter']['text'] = '  ';
  $handler->display->display_options['fields']['data_16']['empty'] = 'Donor requests no email';
  $handler->display->display_options['fields']['data_16']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_14']['id'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_14']['field'] = 'data';
  $handler->display->display_options['fields']['data_14']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['label'] = 'Phone';
  $handler->display->display_options['fields']['data_14']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_14']['alter']['text'] = 'All phone';
  $handler->display->display_options['fields']['data_14']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_14']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_18']['id'] = 'data_18';
  $handler->display->display_options['fields']['data_18']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_18']['field'] = 'data';
  $handler->display->display_options['fields']['data_18']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_18']['label'] = 'No Phone';
  $handler->display->display_options['fields']['data_18']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_18']['alter']['text'] = '     ';
  $handler->display->display_options['fields']['data_18']['empty'] = 'Donor requests no phone';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_13']['id'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_13']['field'] = 'data';
  $handler->display->display_options['fields']['data_13']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['label'] = 'SMS';
  $handler->display->display_options['fields']['data_13']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_13']['alter']['text'] = 'All SMS';
  $handler->display->display_options['fields']['data_13']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_13']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_17']['id'] = 'data_17';
  $handler->display->display_options['fields']['data_17']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_17']['field'] = 'data';
  $handler->display->display_options['fields']['data_17']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_17']['label'] = 'No SMS';
  $handler->display->display_options['fields']['data_17']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_17']['alter']['text'] = '   ';
  $handler->display->display_options['fields']['data_17']['empty'] = 'Donor requests no SMS';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['label'] = 'Gift amount';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Currency';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_25']['id'] = 'data_25';
  $handler->display->display_options['fields']['data_25']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_25']['field'] = 'data';
  $handler->display->display_options['fields']['data_25']['relationship'] = 'data_22';
  $handler->display->display_options['fields']['data_25']['label'] = 'Gift start date';
  $handler->display->display_options['fields']['data_25']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_11']['id'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_11']['field'] = 'data';
  $handler->display->display_options['fields']['data_11']['relationship'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['label'] = 'Frequency';
  $handler->display->display_options['fields']['data_11']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_20']['id'] = 'data_20';
  $handler->display->display_options['fields']['data_20']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_20']['field'] = 'data';
  $handler->display->display_options['fields']['data_20']['relationship'] = 'data_16';
  $handler->display->display_options['fields']['data_20']['label'] = 'Bank account name';
  $handler->display->display_options['fields']['data_20']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_22']['id'] = 'data_22';
  $handler->display->display_options['fields']['data_22']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_22']['field'] = 'data';
  $handler->display->display_options['fields']['data_22']['relationship'] = 'data_17';
  $handler->display->display_options['fields']['data_22']['label'] = 'Bank name';
  $handler->display->display_options['fields']['data_22']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_21']['id'] = 'data_21';
  $handler->display->display_options['fields']['data_21']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_21']['field'] = 'data';
  $handler->display->display_options['fields']['data_21']['relationship'] = 'data_18';
  $handler->display->display_options['fields']['data_21']['label'] = 'Bank sort code';
  $handler->display->display_options['fields']['data_21']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_23']['id'] = 'data_23';
  $handler->display->display_options['fields']['data_23']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_23']['field'] = 'data';
  $handler->display->display_options['fields']['data_23']['relationship'] = 'data_19';
  $handler->display->display_options['fields']['data_23']['label'] = 'Bank account number';
  $handler->display->display_options['fields']['data_23']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_24']['id'] = 'data_24';
  $handler->display->display_options['fields']['data_24']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_24']['field'] = 'data';
  $handler->display->display_options['fields']['data_24']['relationship'] = 'data_20';
  $handler->display->display_options['fields']['data_24']['label'] = 'Bank address';
  $handler->display->display_options['fields']['data_24']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_28']['id'] = 'data_28';
  $handler->display->display_options['fields']['data_28']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_28']['field'] = 'data';
  $handler->display->display_options['fields']['data_28']['relationship'] = 'data';
  $handler->display->display_options['path'] = 'admin/reports/donations/regular/euro/export';
  $handler->display->display_options['displays'] = array(
    'single_donations_eur_page' => 'single_donations_eur_page',
    'default' => 0,
    'regular_donations_gbp_page' => 0,
  );

  /* Display: GBP - Data export */
  $handler = $view->new_display('views_data_export', 'GBP - Data export', 'gbp_views_data_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Regular donations - GBP';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_gbp.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '25';
  $handler->display->display_options['relationships']['data']['submission_data'] = '';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '26';
  $handler->display->display_options['relationships']['data_1']['submission_data'] = '';
  /* Relationship: Address line 1 */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '27';
  $handler->display->display_options['relationships']['data_2']['submission_data'] = '';
  /* Relationship: Address line 2 */
  $handler->display->display_options['relationships']['data_3']['id'] = 'data_3';
  $handler->display->display_options['relationships']['data_3']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_3']['field'] = 'data';
  $handler->display->display_options['relationships']['data_3']['ui_name'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_3']['webform_cid'] = '38';
  $handler->display->display_options['relationships']['data_3']['submission_data'] = '';
  /* Relationship: City */
  $handler->display->display_options['relationships']['data_4']['id'] = 'data_4';
  $handler->display->display_options['relationships']['data_4']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_4']['field'] = 'data';
  $handler->display->display_options['relationships']['data_4']['ui_name'] = 'City';
  $handler->display->display_options['relationships']['data_4']['label'] = 'City';
  $handler->display->display_options['relationships']['data_4']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_4']['webform_cid'] = '28';
  $handler->display->display_options['relationships']['data_4']['submission_data'] = '';
  /* Relationship: County */
  $handler->display->display_options['relationships']['data_5']['id'] = 'data_5';
  $handler->display->display_options['relationships']['data_5']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_5']['field'] = 'data';
  $handler->display->display_options['relationships']['data_5']['ui_name'] = 'County';
  $handler->display->display_options['relationships']['data_5']['label'] = 'County';
  $handler->display->display_options['relationships']['data_5']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_5']['webform_cid'] = '30';
  $handler->display->display_options['relationships']['data_5']['submission_data'] = '';
  /* Relationship: Country */
  $handler->display->display_options['relationships']['data_6']['id'] = 'data_6';
  $handler->display->display_options['relationships']['data_6']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_6']['field'] = 'data';
  $handler->display->display_options['relationships']['data_6']['ui_name'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['label'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_6']['webform_cid'] = '29';
  $handler->display->display_options['relationships']['data_6']['submission_data'] = '';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_7']['id'] = 'data_7';
  $handler->display->display_options['relationships']['data_7']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_7']['field'] = 'data';
  $handler->display->display_options['relationships']['data_7']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_7']['webform_cid'] = '32';
  $handler->display->display_options['relationships']['data_7']['submission_data'] = '';
  /* Relationship: Phone */
  $handler->display->display_options['relationships']['data_8']['id'] = 'data_8';
  $handler->display->display_options['relationships']['data_8']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_8']['field'] = 'data';
  $handler->display->display_options['relationships']['data_8']['ui_name'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['label'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_8']['webform_cid'] = '31';
  $handler->display->display_options['relationships']['data_8']['submission_data'] = '';
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '3';
  $handler->display->display_options['relationships']['data_9']['submission_data'] = '';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '4';
  $handler->display->display_options['relationships']['data_10']['submission_data'] = '';
  /* Relationship: Hear more - email */
  $handler->display->display_options['relationships']['data_12']['id'] = 'data_12';
  $handler->display->display_options['relationships']['data_12']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_12']['field'] = 'data';
  $handler->display->display_options['relationships']['data_12']['ui_name'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['label'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_12']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_12']['submission_data'] = 'email';
  /* Relationship: Hear more - sms */
  $handler->display->display_options['relationships']['data_13']['id'] = 'data_13';
  $handler->display->display_options['relationships']['data_13']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_13']['field'] = 'data';
  $handler->display->display_options['relationships']['data_13']['ui_name'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['label'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_13']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_13']['submission_data'] = 'sms';
  /* Relationship: Hear more - phone */
  $handler->display->display_options['relationships']['data_14']['id'] = 'data_14';
  $handler->display->display_options['relationships']['data_14']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_14']['field'] = 'data';
  $handler->display->display_options['relationships']['data_14']['ui_name'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['label'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_14']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_14']['submission_data'] = 'phone';
  /* Relationship: Hear more - post */
  $handler->display->display_options['relationships']['data_15']['id'] = 'data_15';
  $handler->display->display_options['relationships']['data_15']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_15']['field'] = 'data';
  $handler->display->display_options['relationships']['data_15']['ui_name'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['label'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_15']['webform_cid'] = '33';
  $handler->display->display_options['relationships']['data_15']['submission_data'] = 'post';
  /* Relationship: Frequency */
  $handler->display->display_options['relationships']['data_11']['id'] = 'data_11';
  $handler->display->display_options['relationships']['data_11']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_11']['field'] = 'data';
  $handler->display->display_options['relationships']['data_11']['ui_name'] = 'Frequency';
  $handler->display->display_options['relationships']['data_11']['label'] = 'Frequency';
  $handler->display->display_options['relationships']['data_11']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_11']['webform_cid'] = '5';
  $handler->display->display_options['relationships']['data_11']['submission_data'] = '';
  /* Relationship: Bank account name */
  $handler->display->display_options['relationships']['data_16']['id'] = 'data_16';
  $handler->display->display_options['relationships']['data_16']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_16']['field'] = 'data';
  $handler->display->display_options['relationships']['data_16']['ui_name'] = 'Bank account name';
  $handler->display->display_options['relationships']['data_16']['label'] = 'Bank account name';
  $handler->display->display_options['relationships']['data_16']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_16']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_16']['submission_data'] = '';
  /* Relationship: Bank name */
  $handler->display->display_options['relationships']['data_17']['id'] = 'data_17';
  $handler->display->display_options['relationships']['data_17']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_17']['field'] = 'data';
  $handler->display->display_options['relationships']['data_17']['ui_name'] = 'Bank name';
  $handler->display->display_options['relationships']['data_17']['label'] = 'Bank name';
  $handler->display->display_options['relationships']['data_17']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_17']['webform_cid'] = '20';
  $handler->display->display_options['relationships']['data_17']['submission_data'] = '';
  /* Relationship: Bank sort code */
  $handler->display->display_options['relationships']['data_18']['id'] = 'data_18';
  $handler->display->display_options['relationships']['data_18']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_18']['field'] = 'data';
  $handler->display->display_options['relationships']['data_18']['ui_name'] = 'Bank sort code';
  $handler->display->display_options['relationships']['data_18']['label'] = 'Bank sort code';
  $handler->display->display_options['relationships']['data_18']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_18']['webform_cid'] = '47';
  $handler->display->display_options['relationships']['data_18']['submission_data'] = '';
  /* Relationship: Bank account number */
  $handler->display->display_options['relationships']['data_19']['id'] = 'data_19';
  $handler->display->display_options['relationships']['data_19']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_19']['field'] = 'data';
  $handler->display->display_options['relationships']['data_19']['ui_name'] = 'Bank account number';
  $handler->display->display_options['relationships']['data_19']['label'] = 'Bank account number';
  $handler->display->display_options['relationships']['data_19']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_19']['webform_cid'] = '46';
  $handler->display->display_options['relationships']['data_19']['submission_data'] = '';
  /* Relationship: Bank address */
  $handler->display->display_options['relationships']['data_20']['id'] = 'data_20';
  $handler->display->display_options['relationships']['data_20']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_20']['field'] = 'data';
  $handler->display->display_options['relationships']['data_20']['ui_name'] = 'Bank address';
  $handler->display->display_options['relationships']['data_20']['label'] = 'Bank address';
  $handler->display->display_options['relationships']['data_20']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_20']['webform_cid'] = '21';
  $handler->display->display_options['relationships']['data_20']['submission_data'] = '';
  /* Relationship: DD starting date */
  $handler->display->display_options['relationships']['data_22']['id'] = 'data_22';
  $handler->display->display_options['relationships']['data_22']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_22']['field'] = 'data';
  $handler->display->display_options['relationships']['data_22']['ui_name'] = 'DD starting date';
  $handler->display->display_options['relationships']['data_22']['label'] = 'DD starting date';
  $handler->display->display_options['relationships']['data_22']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_22']['webform_cid'] = '53';
  $handler->display->display_options['relationships']['data_22']['submission_data'] = '';
  /* Relationship: Postcode */
  $handler->display->display_options['relationships']['data_21']['id'] = 'data_21';
  $handler->display->display_options['relationships']['data_21']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_21']['field'] = 'data';
  $handler->display->display_options['relationships']['data_21']['ui_name'] = 'Postcode';
  $handler->display->display_options['relationships']['data_21']['label'] = 'Postcode';
  $handler->display->display_options['relationships']['data_21']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_21']['webform_cid'] = '48';
  $handler->display->display_options['relationships']['data_21']['submission_data'] = '';
  /* Relationship: Title */
  $handler->display->display_options['relationships']['data_23']['id'] = 'data_23';
  $handler->display->display_options['relationships']['data_23']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_23']['field'] = 'data';
  $handler->display->display_options['relationships']['data_23']['ui_name'] = 'Title';
  $handler->display->display_options['relationships']['data_23']['label'] = 'Title';
  $handler->display->display_options['relationships']['data_23']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_23']['webform_cid'] = '54';
  $handler->display->display_options['relationships']['data_23']['submission_data'] = '';
  /* Relationship: Bank post code */
  $handler->display->display_options['relationships']['data_24']['id'] = 'data_24';
  $handler->display->display_options['relationships']['data_24']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_24']['field'] = 'data';
  $handler->display->display_options['relationships']['data_24']['ui_name'] = 'Bank post code';
  $handler->display->display_options['relationships']['data_24']['label'] = 'Bank post code';
  $handler->display->display_options['relationships']['data_24']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_24']['webform_cid'] = '42';
  $handler->display->display_options['relationships']['data_24']['submission_data'] = '';
  /* Relationship: Gift aid */
  $handler->display->display_options['relationships']['data_25']['id'] = 'data_25';
  $handler->display->display_options['relationships']['data_25']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_25']['field'] = 'data';
  $handler->display->display_options['relationships']['data_25']['ui_name'] = 'Gift aid';
  $handler->display->display_options['relationships']['data_25']['label'] = 'Gift aid';
  $handler->display->display_options['relationships']['data_25']['webform_nid'] = '45';
  $handler->display->display_options['relationships']['data_25']['webform_cid'] = '9';
  $handler->display->display_options['relationships']['data_25']['submission_data'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Record Id';
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['label'] = 'Submission date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'd/m/Y';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_27']['id'] = 'data_27';
  $handler->display->display_options['fields']['data_27']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_27']['field'] = 'data';
  $handler->display->display_options['fields']['data_27']['relationship'] = 'data_23';
  $handler->display->display_options['fields']['data_27']['label'] = 'Title';
  $handler->display->display_options['fields']['data_27']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_27']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data';
  $handler->display->display_options['fields']['data']['label'] = 'First name';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['data_1']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['fields']['data_2']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_3']['id'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_3']['field'] = 'data';
  $handler->display->display_options['fields']['data_3']['relationship'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['fields']['data_3']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_4']['id'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_4']['field'] = 'data';
  $handler->display->display_options['fields']['data_4']['relationship'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['label'] = 'City';
  $handler->display->display_options['fields']['data_4']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_5']['id'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_5']['field'] = 'data';
  $handler->display->display_options['fields']['data_5']['relationship'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['label'] = 'County';
  $handler->display->display_options['fields']['data_5']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_26']['id'] = 'data_26';
  $handler->display->display_options['fields']['data_26']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_26']['field'] = 'data';
  $handler->display->display_options['fields']['data_26']['relationship'] = 'data_21';
  $handler->display->display_options['fields']['data_26']['label'] = 'Postcode';
  $handler->display->display_options['fields']['data_26']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_6']['id'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_6']['field'] = 'data';
  $handler->display->display_options['fields']['data_6']['relationship'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['label'] = 'Country';
  $handler->display->display_options['fields']['data_6']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_28']['id'] = 'data_28';
  $handler->display->display_options['fields']['data_28']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_28']['field'] = 'data';
  $handler->display->display_options['fields']['data_28']['relationship'] = 'data_25';
  $handler->display->display_options['fields']['data_28']['label'] = 'Gift aid';
  $handler->display->display_options['fields']['data_28']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_28']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['data_28']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_28']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data_28']['empty'] = 'No';
  $handler->display->display_options['fields']['data_28']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_7']['id'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_7']['field'] = 'data';
  $handler->display->display_options['fields']['data_7']['relationship'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['label'] = 'Email address';
  $handler->display->display_options['fields']['data_7']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_8']['id'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_8']['field'] = 'data';
  $handler->display->display_options['fields']['data_8']['relationship'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['label'] = 'Phone number';
  $handler->display->display_options['fields']['data_8']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_15']['id'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_15']['field'] = 'data';
  $handler->display->display_options['fields']['data_15']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['label'] = 'Mail';
  $handler->display->display_options['fields']['data_15']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_15']['alter']['text'] = 'All mail';
  $handler->display->display_options['fields']['data_15']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_15']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_19']['id'] = 'data_19';
  $handler->display->display_options['fields']['data_19']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_19']['field'] = 'data';
  $handler->display->display_options['fields']['data_19']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_19']['label'] = 'No Mail';
  $handler->display->display_options['fields']['data_19']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_19']['alter']['text'] = '    ';
  $handler->display->display_options['fields']['data_19']['empty'] = 'Donor requests no mail';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_12']['id'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_12']['field'] = 'data';
  $handler->display->display_options['fields']['data_12']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['label'] = 'Email';
  $handler->display->display_options['fields']['data_12']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_12']['alter']['text'] = 'All email';
  $handler->display->display_options['fields']['data_12']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_12']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_16']['id'] = 'data_16';
  $handler->display->display_options['fields']['data_16']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_16']['field'] = 'data';
  $handler->display->display_options['fields']['data_16']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_16']['label'] = 'No email';
  $handler->display->display_options['fields']['data_16']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_16']['alter']['text'] = '  ';
  $handler->display->display_options['fields']['data_16']['empty'] = 'Donor requests no email';
  $handler->display->display_options['fields']['data_16']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_14']['id'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_14']['field'] = 'data';
  $handler->display->display_options['fields']['data_14']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['label'] = 'Phone';
  $handler->display->display_options['fields']['data_14']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_14']['alter']['text'] = 'All phone';
  $handler->display->display_options['fields']['data_14']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_14']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_18']['id'] = 'data_18';
  $handler->display->display_options['fields']['data_18']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_18']['field'] = 'data';
  $handler->display->display_options['fields']['data_18']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_18']['label'] = 'No Phone';
  $handler->display->display_options['fields']['data_18']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_18']['alter']['text'] = '     ';
  $handler->display->display_options['fields']['data_18']['empty'] = 'Donor requests no phone';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_13']['id'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_13']['field'] = 'data';
  $handler->display->display_options['fields']['data_13']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['label'] = 'SMS';
  $handler->display->display_options['fields']['data_13']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_13']['alter']['text'] = 'All SMS';
  $handler->display->display_options['fields']['data_13']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_13']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_17']['id'] = 'data_17';
  $handler->display->display_options['fields']['data_17']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_17']['field'] = 'data';
  $handler->display->display_options['fields']['data_17']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_17']['label'] = 'No SMS';
  $handler->display->display_options['fields']['data_17']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_17']['alter']['text'] = '   ';
  $handler->display->display_options['fields']['data_17']['empty'] = 'Donor requests no SMS';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['label'] = 'Gift amount';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Currency';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_25']['id'] = 'data_25';
  $handler->display->display_options['fields']['data_25']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_25']['field'] = 'data';
  $handler->display->display_options['fields']['data_25']['relationship'] = 'data_22';
  $handler->display->display_options['fields']['data_25']['label'] = 'Gift start date';
  $handler->display->display_options['fields']['data_25']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_11']['id'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_11']['field'] = 'data';
  $handler->display->display_options['fields']['data_11']['relationship'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['label'] = 'Frequency';
  $handler->display->display_options['fields']['data_11']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_20']['id'] = 'data_20';
  $handler->display->display_options['fields']['data_20']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_20']['field'] = 'data';
  $handler->display->display_options['fields']['data_20']['relationship'] = 'data_16';
  $handler->display->display_options['fields']['data_20']['label'] = 'Bank account name';
  $handler->display->display_options['fields']['data_20']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_22']['id'] = 'data_22';
  $handler->display->display_options['fields']['data_22']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_22']['field'] = 'data';
  $handler->display->display_options['fields']['data_22']['relationship'] = 'data_17';
  $handler->display->display_options['fields']['data_22']['label'] = 'Bank name';
  $handler->display->display_options['fields']['data_22']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_21']['id'] = 'data_21';
  $handler->display->display_options['fields']['data_21']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_21']['field'] = 'data';
  $handler->display->display_options['fields']['data_21']['relationship'] = 'data_18';
  $handler->display->display_options['fields']['data_21']['label'] = 'Bank sort code';
  $handler->display->display_options['fields']['data_21']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_23']['id'] = 'data_23';
  $handler->display->display_options['fields']['data_23']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_23']['field'] = 'data';
  $handler->display->display_options['fields']['data_23']['relationship'] = 'data_19';
  $handler->display->display_options['fields']['data_23']['label'] = 'Bank account number';
  $handler->display->display_options['fields']['data_23']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_24']['id'] = 'data_24';
  $handler->display->display_options['fields']['data_24']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_24']['field'] = 'data';
  $handler->display->display_options['fields']['data_24']['relationship'] = 'data_20';
  $handler->display->display_options['fields']['data_24']['label'] = 'Bank address';
  $handler->display->display_options['fields']['data_24']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_29']['id'] = 'data_29';
  $handler->display->display_options['fields']['data_29']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_29']['field'] = 'data';
  $handler->display->display_options['fields']['data_29']['relationship'] = 'data_24';
  $handler->display->display_options['fields']['data_29']['label'] = 'Bank post code';
  $handler->display->display_options['fields']['data_29']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_29']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '45';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data_10';
  $handler->display->display_options['filters']['data']['value'] = 'GBP';
  $handler->display->display_options['filters']['data']['expose']['operator_id'] = 'data_op';
  $handler->display->display_options['filters']['data']['expose']['label'] = 'Data field';
  $handler->display->display_options['filters']['data']['expose']['operator'] = 'data_op';
  $handler->display->display_options['filters']['data']['expose']['identifier'] = 'data';
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'Gift Date';
  $handler->display->display_options['filters']['submitted']['expose']['description'] = 'Enter date formats yyyy-mm-dd';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['submitted']['group_info']['label'] = 'Submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['group_items'] = array(
    2 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'firstname';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_2']['id'] = 'data_2';
  $handler->display->display_options['filters']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_2']['field'] = 'data';
  $handler->display->display_options['filters']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['filters']['data_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_2']['expose']['operator_id'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['data_2']['expose']['operator'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['identifier'] = 'lastname';
  $handler->display->display_options['filters']['data_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_3']['id'] = 'data_3';
  $handler->display->display_options['filters']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_3']['field'] = 'data';
  $handler->display->display_options['filters']['data_3']['relationship'] = 'data_7';
  $handler->display->display_options['filters']['data_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_3']['expose']['operator_id'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['label'] = 'Email address';
  $handler->display->display_options['filters']['data_3']['expose']['operator'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['data_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/reports/donations/regular/gbp/export';
  $handler->display->display_options['displays'] = array(
    'regular_donations_gbp_page' => 'regular_donations_gbp_page',
    'default' => 0,
    'single_donations_eur_page' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['regular_donations_report'] = $view;

  $view = new view();
  $view->name = 'single_donations_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Single donations report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Single donations - EUR';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view donations reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'sid' => 'sid',
    'data' => 'data',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'data' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No matching transactions found.';
  $handler->display->display_options['empty']['area']['format'] = 'extra_html';
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '7';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '8';
  /* Relationship: Address line 1 */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '9';
  /* Relationship: Address line 2 */
  $handler->display->display_options['relationships']['data_3']['id'] = 'data_3';
  $handler->display->display_options['relationships']['data_3']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_3']['field'] = 'data';
  $handler->display->display_options['relationships']['data_3']['ui_name'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_3']['webform_cid'] = '25';
  /* Relationship: City */
  $handler->display->display_options['relationships']['data_4']['id'] = 'data_4';
  $handler->display->display_options['relationships']['data_4']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_4']['field'] = 'data';
  $handler->display->display_options['relationships']['data_4']['ui_name'] = 'City';
  $handler->display->display_options['relationships']['data_4']['label'] = 'City';
  $handler->display->display_options['relationships']['data_4']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_4']['webform_cid'] = '10';
  /* Relationship: County */
  $handler->display->display_options['relationships']['data_5']['id'] = 'data_5';
  $handler->display->display_options['relationships']['data_5']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_5']['field'] = 'data';
  $handler->display->display_options['relationships']['data_5']['ui_name'] = 'County';
  $handler->display->display_options['relationships']['data_5']['label'] = 'County';
  $handler->display->display_options['relationships']['data_5']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_5']['webform_cid'] = '11';
  /* Relationship: Country */
  $handler->display->display_options['relationships']['data_6']['id'] = 'data_6';
  $handler->display->display_options['relationships']['data_6']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_6']['field'] = 'data';
  $handler->display->display_options['relationships']['data_6']['ui_name'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['label'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_6']['webform_cid'] = '26';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_7']['id'] = 'data_7';
  $handler->display->display_options['relationships']['data_7']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_7']['field'] = 'data';
  $handler->display->display_options['relationships']['data_7']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_7']['webform_cid'] = '13';
  /* Relationship: Phone */
  $handler->display->display_options['relationships']['data_8']['id'] = 'data_8';
  $handler->display->display_options['relationships']['data_8']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_8']['field'] = 'data';
  $handler->display->display_options['relationships']['data_8']['ui_name'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['label'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_8']['webform_cid'] = '12';
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '34';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '3';
  /* Relationship: Fund */
  $handler->display->display_options['relationships']['data_11']['id'] = 'data_11';
  $handler->display->display_options['relationships']['data_11']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_11']['field'] = 'data';
  $handler->display->display_options['relationships']['data_11']['ui_name'] = 'Fund';
  $handler->display->display_options['relationships']['data_11']['label'] = 'Fund';
  $handler->display->display_options['relationships']['data_11']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_11']['webform_cid'] = '2';
  /* Relationship: Hear more - email */
  $handler->display->display_options['relationships']['data_12']['id'] = 'data_12';
  $handler->display->display_options['relationships']['data_12']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_12']['field'] = 'data';
  $handler->display->display_options['relationships']['data_12']['ui_name'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['label'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_12']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_12']['submission_data'] = 'email';
  /* Relationship: Hear more - sms */
  $handler->display->display_options['relationships']['data_13']['id'] = 'data_13';
  $handler->display->display_options['relationships']['data_13']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_13']['field'] = 'data';
  $handler->display->display_options['relationships']['data_13']['ui_name'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['label'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_13']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_13']['submission_data'] = 'sms';
  /* Relationship: Hear more - phone */
  $handler->display->display_options['relationships']['data_14']['id'] = 'data_14';
  $handler->display->display_options['relationships']['data_14']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_14']['field'] = 'data';
  $handler->display->display_options['relationships']['data_14']['ui_name'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['label'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_14']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_14']['submission_data'] = 'phone';
  /* Relationship: Hear more - post */
  $handler->display->display_options['relationships']['data_15']['id'] = 'data_15';
  $handler->display->display_options['relationships']['data_15']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_15']['field'] = 'data';
  $handler->display->display_options['relationships']['data_15']['ui_name'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['label'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_15']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_15']['submission_data'] = 'post';
  /* Relationship: Postcode */
  $handler->display->display_options['relationships']['data_16']['id'] = 'data_16';
  $handler->display->display_options['relationships']['data_16']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_16']['field'] = 'data';
  $handler->display->display_options['relationships']['data_16']['ui_name'] = 'Postcode';
  $handler->display->display_options['relationships']['data_16']['label'] = 'Postcode';
  $handler->display->display_options['relationships']['data_16']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_16']['webform_cid'] = '27';
  $handler->display->display_options['relationships']['data_16']['submission_data'] = '';
  /* Relationship: Title */
  $handler->display->display_options['relationships']['data_17']['id'] = 'data_17';
  $handler->display->display_options['relationships']['data_17']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_17']['field'] = 'data';
  $handler->display->display_options['relationships']['data_17']['ui_name'] = 'Title';
  $handler->display->display_options['relationships']['data_17']['label'] = 'Title';
  $handler->display->display_options['relationships']['data_17']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_17']['webform_cid'] = '35';
  $handler->display->display_options['relationships']['data_17']['submission_data'] = '';
  /* Relationship: Payment method EUR */
  $handler->display->display_options['relationships']['data_18']['id'] = 'data_18';
  $handler->display->display_options['relationships']['data_18']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_18']['field'] = 'data';
  $handler->display->display_options['relationships']['data_18']['ui_name'] = 'Payment method EUR';
  $handler->display->display_options['relationships']['data_18']['label'] = 'Payment method EUR';
  $handler->display->display_options['relationships']['data_18']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_18']['webform_cid'] = '21';
  $handler->display->display_options['relationships']['data_18']['submission_data'] = '';
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Record Id';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_21']['id'] = 'data_21';
  $handler->display->display_options['fields']['data_21']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_21']['field'] = 'data';
  $handler->display->display_options['fields']['data_21']['relationship'] = 'data_17';
  $handler->display->display_options['fields']['data_21']['label'] = 'Title';
  $handler->display->display_options['fields']['data_21']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_21']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data';
  $handler->display->display_options['fields']['data']['label'] = 'First name';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['data_1']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['fields']['data_2']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_3']['id'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_3']['field'] = 'data';
  $handler->display->display_options['fields']['data_3']['relationship'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['fields']['data_3']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_4']['id'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_4']['field'] = 'data';
  $handler->display->display_options['fields']['data_4']['relationship'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['label'] = 'City';
  $handler->display->display_options['fields']['data_4']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_5']['id'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_5']['field'] = 'data';
  $handler->display->display_options['fields']['data_5']['relationship'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['label'] = 'County';
  $handler->display->display_options['fields']['data_5']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_20']['id'] = 'data_20';
  $handler->display->display_options['fields']['data_20']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_20']['field'] = 'data';
  $handler->display->display_options['fields']['data_20']['relationship'] = 'data_16';
  $handler->display->display_options['fields']['data_20']['label'] = 'Postcode';
  $handler->display->display_options['fields']['data_20']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_6']['id'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_6']['field'] = 'data';
  $handler->display->display_options['fields']['data_6']['relationship'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['label'] = 'Country';
  $handler->display->display_options['fields']['data_6']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_7']['id'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_7']['field'] = 'data';
  $handler->display->display_options['fields']['data_7']['relationship'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['label'] = 'Email address';
  $handler->display->display_options['fields']['data_7']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_8']['id'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_8']['field'] = 'data';
  $handler->display->display_options['fields']['data_8']['relationship'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['label'] = 'Phone number';
  $handler->display->display_options['fields']['data_8']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_15']['id'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_15']['field'] = 'data';
  $handler->display->display_options['fields']['data_15']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['label'] = 'Mail';
  $handler->display->display_options['fields']['data_15']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_15']['alter']['text'] = 'All mail';
  $handler->display->display_options['fields']['data_15']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_15']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_19']['id'] = 'data_19';
  $handler->display->display_options['fields']['data_19']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_19']['field'] = 'data';
  $handler->display->display_options['fields']['data_19']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_19']['label'] = 'No Mail';
  $handler->display->display_options['fields']['data_19']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_19']['alter']['text'] = '    ';
  $handler->display->display_options['fields']['data_19']['empty'] = 'Donor requests no mail';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_12']['id'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_12']['field'] = 'data';
  $handler->display->display_options['fields']['data_12']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['label'] = 'Email';
  $handler->display->display_options['fields']['data_12']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_12']['alter']['text'] = 'All email';
  $handler->display->display_options['fields']['data_12']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_12']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_16']['id'] = 'data_16';
  $handler->display->display_options['fields']['data_16']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_16']['field'] = 'data';
  $handler->display->display_options['fields']['data_16']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_16']['label'] = 'No email';
  $handler->display->display_options['fields']['data_16']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_16']['alter']['text'] = '  ';
  $handler->display->display_options['fields']['data_16']['empty'] = 'Donor requests no email';
  $handler->display->display_options['fields']['data_16']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_14']['id'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_14']['field'] = 'data';
  $handler->display->display_options['fields']['data_14']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['label'] = 'Phone';
  $handler->display->display_options['fields']['data_14']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_14']['alter']['text'] = 'All phone';
  $handler->display->display_options['fields']['data_14']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_14']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_18']['id'] = 'data_18';
  $handler->display->display_options['fields']['data_18']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_18']['field'] = 'data';
  $handler->display->display_options['fields']['data_18']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_18']['label'] = 'No Phone';
  $handler->display->display_options['fields']['data_18']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_18']['alter']['text'] = '     ';
  $handler->display->display_options['fields']['data_18']['empty'] = 'Donor requests no phone';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_13']['id'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_13']['field'] = 'data';
  $handler->display->display_options['fields']['data_13']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['label'] = 'SMS';
  $handler->display->display_options['fields']['data_13']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_13']['alter']['text'] = 'All SMS';
  $handler->display->display_options['fields']['data_13']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_13']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_17']['id'] = 'data_17';
  $handler->display->display_options['fields']['data_17']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_17']['field'] = 'data';
  $handler->display->display_options['fields']['data_17']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_17']['label'] = 'No SMS';
  $handler->display->display_options['fields']['data_17']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_17']['alter']['text'] = '   ';
  $handler->display->display_options['fields']['data_17']['empty'] = 'Donor requests no SMS';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['label'] = 'Gift amount';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Currency';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['label'] = 'Gift date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'd/m/Y';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_11']['id'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_11']['field'] = 'data';
  $handler->display->display_options['fields']['data_11']['relationship'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['label'] = 'Appeal';
  $handler->display->display_options['fields']['data_11']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_22']['id'] = 'data_22';
  $handler->display->display_options['fields']['data_22']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_22']['field'] = 'data';
  $handler->display->display_options['fields']['data_22']['relationship'] = 'data_18';
  $handler->display->display_options['fields']['data_22']['label'] = 'Payment method';
  $handler->display->display_options['fields']['data_22']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_22']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submissions: Remote address */
  $handler->display->display_options['fields']['remote_addr']['id'] = 'remote_addr';
  $handler->display->display_options['fields']['remote_addr']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['remote_addr']['field'] = 'remote_addr';
  $handler->display->display_options['fields']['remote_addr']['label'] = 'IP address';
  $handler->display->display_options['fields']['remote_addr']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['remote_addr']['alter']['strip_tags'] = TRUE;
  /* Sort criterion: Webform submissions: Submitted */
  $handler->display->display_options['sorts']['submitted']['id'] = 'submitted';
  $handler->display->display_options['sorts']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['sorts']['submitted']['field'] = 'submitted';
  $handler->display->display_options['sorts']['submitted']['order'] = 'DESC';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data_10';
  $handler->display->display_options['filters']['data']['value'] = 'EUR';
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'From date';
  $handler->display->display_options['filters']['submitted']['expose']['description'] = 'Enter date formats yyyy-mm-dd';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['submitted']['group_info']['label'] = 'Submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['group_items'] = array(
    2 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'firstname';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_2']['id'] = 'data_2';
  $handler->display->display_options['filters']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_2']['field'] = 'data';
  $handler->display->display_options['filters']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['filters']['data_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_2']['expose']['operator_id'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['data_2']['expose']['operator'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['identifier'] = 'lastname';
  $handler->display->display_options['filters']['data_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_3']['id'] = 'data_3';
  $handler->display->display_options['filters']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_3']['field'] = 'data';
  $handler->display->display_options['filters']['data_3']['relationship'] = 'data_9';
  $handler->display->display_options['filters']['data_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_3']['expose']['operator_id'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['label'] = 'Email address';
  $handler->display->display_options['filters']['data_3']['expose']['operator'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['data_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_4']['id'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_4']['field'] = 'data';
  $handler->display->display_options['filters']['data_4']['relationship'] = 'data_18';
  $handler->display->display_options['filters']['data_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_4']['expose']['operator_id'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['label'] = 'Data field';
  $handler->display->display_options['filters']['data_4']['expose']['operator'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['identifier'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['data_4']['group_info']['label'] = 'Payment method';
  $handler->display->display_options['filters']['data_4']['group_info']['identifier'] = 'paymentmethod';
  $handler->display->display_options['filters']['data_4']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Realex',
      'operator' => '=',
      'value' => 'realex',
    ),
    2 => array(
      'title' => 'PayPal',
      'operator' => '=',
      'value' => 'paypal',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );

  /* Display: EUR - Page */
  $handler = $view->new_display('page', 'EUR - Page', 'single_donations_eur_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/reports/donations/single/euro';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'EUR';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Single Donations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: GBP - Page */
  $handler = $view->new_display('page', 'GBP - Page', 'single_donations_gbp_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Single donations - GBP';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '7';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '8';
  /* Relationship: Address line 1 */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '9';
  /* Relationship: Address line 2 */
  $handler->display->display_options['relationships']['data_3']['id'] = 'data_3';
  $handler->display->display_options['relationships']['data_3']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_3']['field'] = 'data';
  $handler->display->display_options['relationships']['data_3']['ui_name'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_3']['webform_cid'] = '25';
  /* Relationship: City */
  $handler->display->display_options['relationships']['data_4']['id'] = 'data_4';
  $handler->display->display_options['relationships']['data_4']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_4']['field'] = 'data';
  $handler->display->display_options['relationships']['data_4']['ui_name'] = 'City';
  $handler->display->display_options['relationships']['data_4']['label'] = 'City';
  $handler->display->display_options['relationships']['data_4']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_4']['webform_cid'] = '10';
  /* Relationship: County */
  $handler->display->display_options['relationships']['data_5']['id'] = 'data_5';
  $handler->display->display_options['relationships']['data_5']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_5']['field'] = 'data';
  $handler->display->display_options['relationships']['data_5']['ui_name'] = 'County';
  $handler->display->display_options['relationships']['data_5']['label'] = 'County';
  $handler->display->display_options['relationships']['data_5']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_5']['webform_cid'] = '11';
  /* Relationship: Country */
  $handler->display->display_options['relationships']['data_6']['id'] = 'data_6';
  $handler->display->display_options['relationships']['data_6']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_6']['field'] = 'data';
  $handler->display->display_options['relationships']['data_6']['ui_name'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['label'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_6']['webform_cid'] = '26';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_7']['id'] = 'data_7';
  $handler->display->display_options['relationships']['data_7']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_7']['field'] = 'data';
  $handler->display->display_options['relationships']['data_7']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_7']['webform_cid'] = '13';
  /* Relationship: Phone */
  $handler->display->display_options['relationships']['data_8']['id'] = 'data_8';
  $handler->display->display_options['relationships']['data_8']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_8']['field'] = 'data';
  $handler->display->display_options['relationships']['data_8']['ui_name'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['label'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_8']['webform_cid'] = '12';
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '34';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '3';
  /* Relationship: Fund */
  $handler->display->display_options['relationships']['data_11']['id'] = 'data_11';
  $handler->display->display_options['relationships']['data_11']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_11']['field'] = 'data';
  $handler->display->display_options['relationships']['data_11']['ui_name'] = 'Fund';
  $handler->display->display_options['relationships']['data_11']['label'] = 'Fund';
  $handler->display->display_options['relationships']['data_11']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_11']['webform_cid'] = '2';
  /* Relationship: Hear more - email */
  $handler->display->display_options['relationships']['data_12']['id'] = 'data_12';
  $handler->display->display_options['relationships']['data_12']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_12']['field'] = 'data';
  $handler->display->display_options['relationships']['data_12']['ui_name'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['label'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_12']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_12']['submission_data'] = 'email';
  /* Relationship: Hear more - sms */
  $handler->display->display_options['relationships']['data_13']['id'] = 'data_13';
  $handler->display->display_options['relationships']['data_13']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_13']['field'] = 'data';
  $handler->display->display_options['relationships']['data_13']['ui_name'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['label'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_13']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_13']['submission_data'] = 'sms';
  /* Relationship: Hear more - phone */
  $handler->display->display_options['relationships']['data_14']['id'] = 'data_14';
  $handler->display->display_options['relationships']['data_14']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_14']['field'] = 'data';
  $handler->display->display_options['relationships']['data_14']['ui_name'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['label'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_14']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_14']['submission_data'] = 'phone';
  /* Relationship: Hear more - post */
  $handler->display->display_options['relationships']['data_15']['id'] = 'data_15';
  $handler->display->display_options['relationships']['data_15']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_15']['field'] = 'data';
  $handler->display->display_options['relationships']['data_15']['ui_name'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['label'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_15']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_15']['submission_data'] = 'post';
  /* Relationship: Postcode */
  $handler->display->display_options['relationships']['data_16']['id'] = 'data_16';
  $handler->display->display_options['relationships']['data_16']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_16']['field'] = 'data';
  $handler->display->display_options['relationships']['data_16']['ui_name'] = 'Postcode';
  $handler->display->display_options['relationships']['data_16']['label'] = 'Postcode';
  $handler->display->display_options['relationships']['data_16']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_16']['webform_cid'] = '27';
  $handler->display->display_options['relationships']['data_16']['submission_data'] = '';
  /* Relationship: Gift aid */
  $handler->display->display_options['relationships']['data_17']['id'] = 'data_17';
  $handler->display->display_options['relationships']['data_17']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_17']['field'] = 'data';
  $handler->display->display_options['relationships']['data_17']['ui_name'] = 'Gift aid';
  $handler->display->display_options['relationships']['data_17']['label'] = 'Gift aid';
  $handler->display->display_options['relationships']['data_17']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_17']['webform_cid'] = '32';
  $handler->display->display_options['relationships']['data_17']['submission_data'] = '';
  /* Relationship: Title */
  $handler->display->display_options['relationships']['data_18']['id'] = 'data_18';
  $handler->display->display_options['relationships']['data_18']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_18']['field'] = 'data';
  $handler->display->display_options['relationships']['data_18']['ui_name'] = 'Title';
  $handler->display->display_options['relationships']['data_18']['label'] = 'Title';
  $handler->display->display_options['relationships']['data_18']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_18']['webform_cid'] = '35';
  $handler->display->display_options['relationships']['data_18']['submission_data'] = '';
  /* Relationship: Payment method GBP */
  $handler->display->display_options['relationships']['data_19']['id'] = 'data_19';
  $handler->display->display_options['relationships']['data_19']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_19']['field'] = 'data';
  $handler->display->display_options['relationships']['data_19']['ui_name'] = 'Payment method GBP';
  $handler->display->display_options['relationships']['data_19']['label'] = 'Payment method GBP';
  $handler->display->display_options['relationships']['data_19']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_19']['webform_cid'] = '22';
  $handler->display->display_options['relationships']['data_19']['submission_data'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Record Id';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_22']['id'] = 'data_22';
  $handler->display->display_options['fields']['data_22']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_22']['field'] = 'data';
  $handler->display->display_options['fields']['data_22']['relationship'] = 'data_18';
  $handler->display->display_options['fields']['data_22']['label'] = 'Title';
  $handler->display->display_options['fields']['data_22']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_22']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data';
  $handler->display->display_options['fields']['data']['label'] = 'First name';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['data_1']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['fields']['data_2']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_3']['id'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_3']['field'] = 'data';
  $handler->display->display_options['fields']['data_3']['relationship'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['fields']['data_3']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_4']['id'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_4']['field'] = 'data';
  $handler->display->display_options['fields']['data_4']['relationship'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['label'] = 'City';
  $handler->display->display_options['fields']['data_4']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_5']['id'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_5']['field'] = 'data';
  $handler->display->display_options['fields']['data_5']['relationship'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['label'] = 'County';
  $handler->display->display_options['fields']['data_5']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_20']['id'] = 'data_20';
  $handler->display->display_options['fields']['data_20']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_20']['field'] = 'data';
  $handler->display->display_options['fields']['data_20']['relationship'] = 'data_16';
  $handler->display->display_options['fields']['data_20']['label'] = 'Postcode';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_6']['id'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_6']['field'] = 'data';
  $handler->display->display_options['fields']['data_6']['relationship'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['label'] = 'Country';
  $handler->display->display_options['fields']['data_6']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_21']['id'] = 'data_21';
  $handler->display->display_options['fields']['data_21']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_21']['field'] = 'data';
  $handler->display->display_options['fields']['data_21']['relationship'] = 'data_17';
  $handler->display->display_options['fields']['data_21']['label'] = 'Gift aid';
  $handler->display->display_options['fields']['data_21']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_21']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['data_21']['empty'] = 'No';
  $handler->display->display_options['fields']['data_21']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_7']['id'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_7']['field'] = 'data';
  $handler->display->display_options['fields']['data_7']['relationship'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['label'] = 'Email address';
  $handler->display->display_options['fields']['data_7']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_8']['id'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_8']['field'] = 'data';
  $handler->display->display_options['fields']['data_8']['relationship'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['label'] = 'Phone number';
  $handler->display->display_options['fields']['data_8']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_15']['id'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_15']['field'] = 'data';
  $handler->display->display_options['fields']['data_15']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['label'] = 'Mail';
  $handler->display->display_options['fields']['data_15']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_15']['alter']['text'] = 'All mail';
  $handler->display->display_options['fields']['data_15']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_15']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_19']['id'] = 'data_19';
  $handler->display->display_options['fields']['data_19']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_19']['field'] = 'data';
  $handler->display->display_options['fields']['data_19']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_19']['label'] = 'No Mail';
  $handler->display->display_options['fields']['data_19']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_19']['alter']['text'] = '    ';
  $handler->display->display_options['fields']['data_19']['empty'] = 'Donor requests no mail';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_12']['id'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_12']['field'] = 'data';
  $handler->display->display_options['fields']['data_12']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['label'] = 'Email';
  $handler->display->display_options['fields']['data_12']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_12']['alter']['text'] = 'All email';
  $handler->display->display_options['fields']['data_12']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_12']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_16']['id'] = 'data_16';
  $handler->display->display_options['fields']['data_16']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_16']['field'] = 'data';
  $handler->display->display_options['fields']['data_16']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_16']['label'] = 'No email';
  $handler->display->display_options['fields']['data_16']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_16']['alter']['text'] = '  ';
  $handler->display->display_options['fields']['data_16']['empty'] = 'Donor requests no email';
  $handler->display->display_options['fields']['data_16']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_14']['id'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_14']['field'] = 'data';
  $handler->display->display_options['fields']['data_14']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['label'] = 'Phone';
  $handler->display->display_options['fields']['data_14']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_14']['alter']['text'] = 'All phone';
  $handler->display->display_options['fields']['data_14']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_14']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_18']['id'] = 'data_18';
  $handler->display->display_options['fields']['data_18']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_18']['field'] = 'data';
  $handler->display->display_options['fields']['data_18']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_18']['label'] = 'No Phone';
  $handler->display->display_options['fields']['data_18']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_18']['alter']['text'] = '     ';
  $handler->display->display_options['fields']['data_18']['empty'] = 'Donor requests no phone';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_13']['id'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_13']['field'] = 'data';
  $handler->display->display_options['fields']['data_13']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['label'] = 'SMS';
  $handler->display->display_options['fields']['data_13']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_13']['alter']['text'] = 'All SMS';
  $handler->display->display_options['fields']['data_13']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_13']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_17']['id'] = 'data_17';
  $handler->display->display_options['fields']['data_17']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_17']['field'] = 'data';
  $handler->display->display_options['fields']['data_17']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_17']['label'] = 'No SMS';
  $handler->display->display_options['fields']['data_17']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_17']['alter']['text'] = '   ';
  $handler->display->display_options['fields']['data_17']['empty'] = 'Donor requests no SMS';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['label'] = 'Gift amount';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Currency';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['label'] = 'Gift date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'd/m/Y';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_11']['id'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_11']['field'] = 'data';
  $handler->display->display_options['fields']['data_11']['relationship'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['label'] = 'Appeal';
  $handler->display->display_options['fields']['data_11']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_23']['id'] = 'data_23';
  $handler->display->display_options['fields']['data_23']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_23']['field'] = 'data';
  $handler->display->display_options['fields']['data_23']['relationship'] = 'data_19';
  $handler->display->display_options['fields']['data_23']['label'] = 'Payment method';
  $handler->display->display_options['fields']['data_23']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_23']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submissions: Remote address */
  $handler->display->display_options['fields']['remote_addr']['id'] = 'remote_addr';
  $handler->display->display_options['fields']['remote_addr']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['remote_addr']['field'] = 'remote_addr';
  $handler->display->display_options['fields']['remote_addr']['label'] = 'IP address';
  $handler->display->display_options['fields']['remote_addr']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['remote_addr']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data_10';
  $handler->display->display_options['filters']['data']['value'] = 'GBP';
  $handler->display->display_options['filters']['data']['group'] = 1;
  $handler->display->display_options['filters']['data']['expose']['operator_id'] = 'data_op';
  $handler->display->display_options['filters']['data']['expose']['label'] = 'Data field';
  $handler->display->display_options['filters']['data']['expose']['operator'] = 'data_op';
  $handler->display->display_options['filters']['data']['expose']['identifier'] = 'data';
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['group'] = 1;
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'From date';
  $handler->display->display_options['filters']['submitted']['expose']['description'] = 'Enter date formats yyyy-mm-dd';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['submitted']['group_info']['label'] = 'Submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['group_items'] = array(
    2 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_1']['group'] = 1;
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'firstname';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_2']['id'] = 'data_2';
  $handler->display->display_options['filters']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_2']['field'] = 'data';
  $handler->display->display_options['filters']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['filters']['data_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_2']['group'] = 1;
  $handler->display->display_options['filters']['data_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_2']['expose']['operator_id'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['data_2']['expose']['operator'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['identifier'] = 'lastname';
  $handler->display->display_options['filters']['data_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_3']['id'] = 'data_3';
  $handler->display->display_options['filters']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_3']['field'] = 'data';
  $handler->display->display_options['filters']['data_3']['relationship'] = 'data_7';
  $handler->display->display_options['filters']['data_3']['group'] = 1;
  $handler->display->display_options['filters']['data_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_3']['expose']['operator_id'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['label'] = 'Email address';
  $handler->display->display_options['filters']['data_3']['expose']['operator'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['data_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_4']['id'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_4']['field'] = 'data';
  $handler->display->display_options['filters']['data_4']['relationship'] = 'data_19';
  $handler->display->display_options['filters']['data_4']['group'] = 1;
  $handler->display->display_options['filters']['data_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_4']['expose']['operator_id'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['label'] = 'Data field';
  $handler->display->display_options['filters']['data_4']['expose']['operator'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['identifier'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['data_4']['group_info']['label'] = 'Payment method';
  $handler->display->display_options['filters']['data_4']['group_info']['identifier'] = 'paymentmethod';
  $handler->display->display_options['filters']['data_4']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Realex',
      'operator' => '=',
      'value' => 'realex',
    ),
    2 => array(
      'title' => 'PayPal',
      'operator' => '=',
      'value' => 'paypal',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  $handler->display->display_options['path'] = 'admin/reports/donations/single/gbp';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'GBP';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Donations';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: EUR - Attachment */
  $handler = $view->new_display('attachment', 'EUR - Attachment', 'euro_attachment');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'data_10' => 'data_10',
    'data_9' => 'data_9',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>Total: EUR 0.00</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'extra_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '34';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '3';
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '7';
  $handler->display->display_options['relationships']['data']['submission_data'] = '';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '8';
  $handler->display->display_options['relationships']['data_1']['submission_data'] = '';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '13';
  $handler->display->display_options['relationships']['data_2']['submission_data'] = '';
  /* Relationship: Payment method EUR */
  $handler->display->display_options['relationships']['data_3']['id'] = 'data_3';
  $handler->display->display_options['relationships']['data_3']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_3']['field'] = 'data';
  $handler->display->display_options['relationships']['data_3']['ui_name'] = 'Payment method EUR';
  $handler->display->display_options['relationships']['data_3']['label'] = 'Payment method EUR';
  $handler->display->display_options['relationships']['data_3']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_3']['webform_cid'] = '21';
  $handler->display->display_options['relationships']['data_3']['submission_data'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Total';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data_10']['element_wrapper_type'] = 'strong';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['group_type'] = 'sum';
  $handler->display->display_options['fields']['data_9']['label'] = '';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['data_9']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data_10';
  $handler->display->display_options['filters']['data']['value'] = 'EUR';
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'From date';
  $handler->display->display_options['filters']['submitted']['expose']['description'] = 'Enter date formats yyyy-mm-dd';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['submitted']['group_info']['label'] = 'Submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['group_items'] = array(
    2 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'firstname';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_2']['id'] = 'data_2';
  $handler->display->display_options['filters']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_2']['field'] = 'data';
  $handler->display->display_options['filters']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['filters']['data_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_2']['expose']['operator_id'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['data_2']['expose']['operator'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['identifier'] = 'lastname';
  $handler->display->display_options['filters']['data_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_3']['id'] = 'data_3';
  $handler->display->display_options['filters']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_3']['field'] = 'data';
  $handler->display->display_options['filters']['data_3']['relationship'] = 'data_2';
  $handler->display->display_options['filters']['data_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_3']['expose']['operator_id'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['label'] = 'Email address';
  $handler->display->display_options['filters']['data_3']['expose']['operator'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['data_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_4']['id'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_4']['field'] = 'data';
  $handler->display->display_options['filters']['data_4']['relationship'] = 'data_3';
  $handler->display->display_options['filters']['data_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_4']['expose']['operator_id'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['label'] = 'Data field';
  $handler->display->display_options['filters']['data_4']['expose']['operator'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['identifier'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['data_4']['group_info']['label'] = 'Payment method';
  $handler->display->display_options['filters']['data_4']['group_info']['identifier'] = 'paymentmethod';
  $handler->display->display_options['filters']['data_4']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Realex',
      'operator' => '=',
      'value' => 'realex',
    ),
    2 => array(
      'title' => 'PayPal',
      'operator' => '=',
      'value' => 'paypal',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  $handler->display->display_options['displays'] = array(
    'single_donations_eur_page' => 'single_donations_eur_page',
    'default' => 0,
    'single_donations_gbp_page' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: GBP - Attachment */
  $handler = $view->new_display('attachment', 'GBP - Attachment', 'gbp_attachment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Single donations - GBP';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'single_donations_gbp_page';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'data_10' => 'data_10',
    'data_9' => 'data_9',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>Total: GBP 0.00</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'extra_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '34';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '3';
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '7';
  $handler->display->display_options['relationships']['data']['submission_data'] = '';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '8';
  $handler->display->display_options['relationships']['data_1']['submission_data'] = '';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '13';
  $handler->display->display_options['relationships']['data_2']['submission_data'] = '';
  /* Relationship: Payment method GBP */
  $handler->display->display_options['relationships']['data_3']['id'] = 'data_3';
  $handler->display->display_options['relationships']['data_3']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_3']['field'] = 'data';
  $handler->display->display_options['relationships']['data_3']['ui_name'] = 'Payment method GBP';
  $handler->display->display_options['relationships']['data_3']['label'] = 'Payment method GBP';
  $handler->display->display_options['relationships']['data_3']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_3']['webform_cid'] = '22';
  $handler->display->display_options['relationships']['data_3']['submission_data'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Total';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data_10']['element_wrapper_type'] = 'strong';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['group_type'] = 'sum';
  $handler->display->display_options['fields']['data_9']['label'] = '';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['data_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['data_9']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data_10';
  $handler->display->display_options['filters']['data']['value'] = 'GBP';
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'Gift Date';
  $handler->display->display_options['filters']['submitted']['expose']['description'] = 'Enter date formats yyyy-mm-dd';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['submitted']['group_info']['label'] = 'Submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['group_items'] = array(
    2 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'firstname';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_2']['id'] = 'data_2';
  $handler->display->display_options['filters']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_2']['field'] = 'data';
  $handler->display->display_options['filters']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['filters']['data_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_2']['expose']['operator_id'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['data_2']['expose']['operator'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['identifier'] = 'lastname';
  $handler->display->display_options['filters']['data_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_3']['id'] = 'data_3';
  $handler->display->display_options['filters']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_3']['field'] = 'data';
  $handler->display->display_options['filters']['data_3']['relationship'] = 'data_2';
  $handler->display->display_options['filters']['data_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_3']['expose']['operator_id'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['label'] = 'Email address';
  $handler->display->display_options['filters']['data_3']['expose']['operator'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['data_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_4']['id'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_4']['field'] = 'data';
  $handler->display->display_options['filters']['data_4']['relationship'] = 'data_3';
  $handler->display->display_options['filters']['data_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_4']['expose']['operator_id'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['label'] = 'Data field';
  $handler->display->display_options['filters']['data_4']['expose']['operator'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['identifier'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['data_4']['group_info']['label'] = 'Payment method';
  $handler->display->display_options['filters']['data_4']['group_info']['identifier'] = 'paymentmethod';
  $handler->display->display_options['filters']['data_4']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Realex',
      'operator' => '=',
      'value' => 'realex',
    ),
    2 => array(
      'title' => 'PayPal',
      'operator' => '=',
      'value' => 'paypal',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  $handler->display->display_options['displays'] = array(
    'single_donations_gbp_page' => 'single_donations_gbp_page',
    'default' => 0,
    'single_donations_eur_page' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: EUR - Data export */
  $handler = $view->new_display('views_data_export', 'EUR - Data export', 'eur_views_data_export');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_eur.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Record Id';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_21']['id'] = 'data_21';
  $handler->display->display_options['fields']['data_21']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_21']['field'] = 'data';
  $handler->display->display_options['fields']['data_21']['relationship'] = 'data_17';
  $handler->display->display_options['fields']['data_21']['label'] = 'Title';
  $handler->display->display_options['fields']['data_21']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_21']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data';
  $handler->display->display_options['fields']['data']['label'] = 'First name';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['data_1']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['fields']['data_2']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_3']['id'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_3']['field'] = 'data';
  $handler->display->display_options['fields']['data_3']['relationship'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['fields']['data_3']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_4']['id'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_4']['field'] = 'data';
  $handler->display->display_options['fields']['data_4']['relationship'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['label'] = 'City';
  $handler->display->display_options['fields']['data_4']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_5']['id'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_5']['field'] = 'data';
  $handler->display->display_options['fields']['data_5']['relationship'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['label'] = 'County';
  $handler->display->display_options['fields']['data_5']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_20']['id'] = 'data_20';
  $handler->display->display_options['fields']['data_20']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_20']['field'] = 'data';
  $handler->display->display_options['fields']['data_20']['relationship'] = 'data_16';
  $handler->display->display_options['fields']['data_20']['label'] = 'Postcode';
  $handler->display->display_options['fields']['data_20']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_6']['id'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_6']['field'] = 'data';
  $handler->display->display_options['fields']['data_6']['relationship'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['label'] = 'Country';
  $handler->display->display_options['fields']['data_6']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_7']['id'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_7']['field'] = 'data';
  $handler->display->display_options['fields']['data_7']['relationship'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['label'] = 'Email address';
  $handler->display->display_options['fields']['data_7']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_8']['id'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_8']['field'] = 'data';
  $handler->display->display_options['fields']['data_8']['relationship'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['label'] = 'Phone number';
  $handler->display->display_options['fields']['data_8']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_15']['id'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_15']['field'] = 'data';
  $handler->display->display_options['fields']['data_15']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['label'] = 'Mail';
  $handler->display->display_options['fields']['data_15']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_15']['alter']['text'] = 'All mail';
  $handler->display->display_options['fields']['data_15']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_15']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_19']['id'] = 'data_19';
  $handler->display->display_options['fields']['data_19']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_19']['field'] = 'data';
  $handler->display->display_options['fields']['data_19']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_19']['label'] = 'No Mail';
  $handler->display->display_options['fields']['data_19']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_19']['alter']['text'] = '    ';
  $handler->display->display_options['fields']['data_19']['empty'] = 'Donor requests no mail';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_12']['id'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_12']['field'] = 'data';
  $handler->display->display_options['fields']['data_12']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['label'] = 'Email';
  $handler->display->display_options['fields']['data_12']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_12']['alter']['text'] = 'All email';
  $handler->display->display_options['fields']['data_12']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_12']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_16']['id'] = 'data_16';
  $handler->display->display_options['fields']['data_16']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_16']['field'] = 'data';
  $handler->display->display_options['fields']['data_16']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_16']['label'] = 'No email';
  $handler->display->display_options['fields']['data_16']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_16']['alter']['text'] = '  ';
  $handler->display->display_options['fields']['data_16']['empty'] = 'Donor requests no email';
  $handler->display->display_options['fields']['data_16']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_14']['id'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_14']['field'] = 'data';
  $handler->display->display_options['fields']['data_14']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['label'] = 'Phone';
  $handler->display->display_options['fields']['data_14']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_14']['alter']['text'] = 'All phone';
  $handler->display->display_options['fields']['data_14']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_14']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_18']['id'] = 'data_18';
  $handler->display->display_options['fields']['data_18']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_18']['field'] = 'data';
  $handler->display->display_options['fields']['data_18']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_18']['label'] = 'No Phone';
  $handler->display->display_options['fields']['data_18']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_18']['alter']['text'] = '     ';
  $handler->display->display_options['fields']['data_18']['empty'] = 'Donor requests no phone';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_13']['id'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_13']['field'] = 'data';
  $handler->display->display_options['fields']['data_13']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['label'] = 'SMS';
  $handler->display->display_options['fields']['data_13']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_13']['alter']['text'] = 'All SMS';
  $handler->display->display_options['fields']['data_13']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_13']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_17']['id'] = 'data_17';
  $handler->display->display_options['fields']['data_17']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_17']['field'] = 'data';
  $handler->display->display_options['fields']['data_17']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_17']['label'] = 'No SMS';
  $handler->display->display_options['fields']['data_17']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_17']['alter']['text'] = '   ';
  $handler->display->display_options['fields']['data_17']['empty'] = 'Donor requests no SMS';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['label'] = 'Gift amount';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Currency';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['label'] = 'Gift date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'd/m/Y';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_11']['id'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_11']['field'] = 'data';
  $handler->display->display_options['fields']['data_11']['relationship'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['label'] = 'Appeal';
  $handler->display->display_options['fields']['data_11']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_22']['id'] = 'data_22';
  $handler->display->display_options['fields']['data_22']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_22']['field'] = 'data';
  $handler->display->display_options['fields']['data_22']['relationship'] = 'data_18';
  $handler->display->display_options['fields']['data_22']['label'] = 'Payment method';
  $handler->display->display_options['fields']['data_22']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_22']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['path'] = 'admin/reports/donations/single/euro/export';
  $handler->display->display_options['displays'] = array(
    'single_donations_eur_page' => 'single_donations_eur_page',
    'default' => 0,
    'single_donations_gbp_page' => 0,
  );

  /* Display: GBP - Data export */
  $handler = $view->new_display('views_data_export', 'GBP - Data export', 'gbp_views_data_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Single donations - GBP';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_gbp.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: First name */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['ui_name'] = 'First name';
  $handler->display->display_options['relationships']['data']['label'] = 'First name';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '7';
  /* Relationship: Last name */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['label'] = 'Last name';
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = '8';
  /* Relationship: Address line 1 */
  $handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
  $handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_2']['field'] = 'data';
  $handler->display->display_options['relationships']['data_2']['ui_name'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['relationships']['data_2']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_2']['webform_cid'] = '9';
  /* Relationship: Address line 2 */
  $handler->display->display_options['relationships']['data_3']['id'] = 'data_3';
  $handler->display->display_options['relationships']['data_3']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_3']['field'] = 'data';
  $handler->display->display_options['relationships']['data_3']['ui_name'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['relationships']['data_3']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_3']['webform_cid'] = '25';
  /* Relationship: City */
  $handler->display->display_options['relationships']['data_4']['id'] = 'data_4';
  $handler->display->display_options['relationships']['data_4']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_4']['field'] = 'data';
  $handler->display->display_options['relationships']['data_4']['ui_name'] = 'City';
  $handler->display->display_options['relationships']['data_4']['label'] = 'City';
  $handler->display->display_options['relationships']['data_4']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_4']['webform_cid'] = '10';
  /* Relationship: County */
  $handler->display->display_options['relationships']['data_5']['id'] = 'data_5';
  $handler->display->display_options['relationships']['data_5']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_5']['field'] = 'data';
  $handler->display->display_options['relationships']['data_5']['ui_name'] = 'County';
  $handler->display->display_options['relationships']['data_5']['label'] = 'County';
  $handler->display->display_options['relationships']['data_5']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_5']['webform_cid'] = '11';
  /* Relationship: Country */
  $handler->display->display_options['relationships']['data_6']['id'] = 'data_6';
  $handler->display->display_options['relationships']['data_6']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_6']['field'] = 'data';
  $handler->display->display_options['relationships']['data_6']['ui_name'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['label'] = 'Country';
  $handler->display->display_options['relationships']['data_6']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_6']['webform_cid'] = '26';
  /* Relationship: Email */
  $handler->display->display_options['relationships']['data_7']['id'] = 'data_7';
  $handler->display->display_options['relationships']['data_7']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_7']['field'] = 'data';
  $handler->display->display_options['relationships']['data_7']['ui_name'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['label'] = 'Email';
  $handler->display->display_options['relationships']['data_7']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_7']['webform_cid'] = '13';
  /* Relationship: Phone */
  $handler->display->display_options['relationships']['data_8']['id'] = 'data_8';
  $handler->display->display_options['relationships']['data_8']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_8']['field'] = 'data';
  $handler->display->display_options['relationships']['data_8']['ui_name'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['label'] = 'Phone';
  $handler->display->display_options['relationships']['data_8']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_8']['webform_cid'] = '12';
  /* Relationship: Amount */
  $handler->display->display_options['relationships']['data_9']['id'] = 'data_9';
  $handler->display->display_options['relationships']['data_9']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_9']['field'] = 'data';
  $handler->display->display_options['relationships']['data_9']['ui_name'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['label'] = 'Amount';
  $handler->display->display_options['relationships']['data_9']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_9']['webform_cid'] = '34';
  /* Relationship: Currency */
  $handler->display->display_options['relationships']['data_10']['id'] = 'data_10';
  $handler->display->display_options['relationships']['data_10']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_10']['field'] = 'data';
  $handler->display->display_options['relationships']['data_10']['ui_name'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['label'] = 'Currency';
  $handler->display->display_options['relationships']['data_10']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_10']['webform_cid'] = '3';
  /* Relationship: Fund */
  $handler->display->display_options['relationships']['data_11']['id'] = 'data_11';
  $handler->display->display_options['relationships']['data_11']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_11']['field'] = 'data';
  $handler->display->display_options['relationships']['data_11']['ui_name'] = 'Fund';
  $handler->display->display_options['relationships']['data_11']['label'] = 'Fund';
  $handler->display->display_options['relationships']['data_11']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_11']['webform_cid'] = '2';
  /* Relationship: Hear more - email */
  $handler->display->display_options['relationships']['data_12']['id'] = 'data_12';
  $handler->display->display_options['relationships']['data_12']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_12']['field'] = 'data';
  $handler->display->display_options['relationships']['data_12']['ui_name'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['label'] = 'Hear more - email';
  $handler->display->display_options['relationships']['data_12']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_12']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_12']['submission_data'] = 'email';
  /* Relationship: Hear more - sms */
  $handler->display->display_options['relationships']['data_13']['id'] = 'data_13';
  $handler->display->display_options['relationships']['data_13']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_13']['field'] = 'data';
  $handler->display->display_options['relationships']['data_13']['ui_name'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['label'] = 'Hear more - sms';
  $handler->display->display_options['relationships']['data_13']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_13']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_13']['submission_data'] = 'sms';
  /* Relationship: Hear more - phone */
  $handler->display->display_options['relationships']['data_14']['id'] = 'data_14';
  $handler->display->display_options['relationships']['data_14']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_14']['field'] = 'data';
  $handler->display->display_options['relationships']['data_14']['ui_name'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['label'] = 'Hear more - phone';
  $handler->display->display_options['relationships']['data_14']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_14']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_14']['submission_data'] = 'phone';
  /* Relationship: Hear more - post */
  $handler->display->display_options['relationships']['data_15']['id'] = 'data_15';
  $handler->display->display_options['relationships']['data_15']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_15']['field'] = 'data';
  $handler->display->display_options['relationships']['data_15']['ui_name'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['label'] = 'Hear more - post';
  $handler->display->display_options['relationships']['data_15']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_15']['webform_cid'] = '14';
  $handler->display->display_options['relationships']['data_15']['submission_data'] = 'post';
  /* Relationship: Postcode */
  $handler->display->display_options['relationships']['data_16']['id'] = 'data_16';
  $handler->display->display_options['relationships']['data_16']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_16']['field'] = 'data';
  $handler->display->display_options['relationships']['data_16']['ui_name'] = 'Postcode';
  $handler->display->display_options['relationships']['data_16']['label'] = 'Postcode';
  $handler->display->display_options['relationships']['data_16']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_16']['webform_cid'] = '27';
  $handler->display->display_options['relationships']['data_16']['submission_data'] = '';
  /* Relationship: Title */
  $handler->display->display_options['relationships']['data_17']['id'] = 'data_17';
  $handler->display->display_options['relationships']['data_17']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_17']['field'] = 'data';
  $handler->display->display_options['relationships']['data_17']['ui_name'] = 'Title';
  $handler->display->display_options['relationships']['data_17']['label'] = 'Title';
  $handler->display->display_options['relationships']['data_17']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_17']['webform_cid'] = '35';
  $handler->display->display_options['relationships']['data_17']['submission_data'] = '';
  /* Relationship: Gift aid */
  $handler->display->display_options['relationships']['data_18']['id'] = 'data_18';
  $handler->display->display_options['relationships']['data_18']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_18']['field'] = 'data';
  $handler->display->display_options['relationships']['data_18']['ui_name'] = 'Gift aid';
  $handler->display->display_options['relationships']['data_18']['label'] = 'Gift aid';
  $handler->display->display_options['relationships']['data_18']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_18']['webform_cid'] = '32';
  $handler->display->display_options['relationships']['data_18']['submission_data'] = '';
  /* Relationship: Payment method GBP */
  $handler->display->display_options['relationships']['data_19']['id'] = 'data_19';
  $handler->display->display_options['relationships']['data_19']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_19']['field'] = 'data';
  $handler->display->display_options['relationships']['data_19']['ui_name'] = 'Payment method GBP';
  $handler->display->display_options['relationships']['data_19']['label'] = 'Payment method GBP';
  $handler->display->display_options['relationships']['data_19']['webform_nid'] = '1';
  $handler->display->display_options['relationships']['data_19']['webform_cid'] = '22';
  $handler->display->display_options['relationships']['data_19']['submission_data'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Record Id';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_21']['id'] = 'data_21';
  $handler->display->display_options['fields']['data_21']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_21']['field'] = 'data';
  $handler->display->display_options['fields']['data_21']['relationship'] = 'data_17';
  $handler->display->display_options['fields']['data_21']['label'] = 'Title';
  $handler->display->display_options['fields']['data_21']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_21']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data';
  $handler->display->display_options['fields']['data']['label'] = 'First name';
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['data_1']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['label'] = 'Address line 1';
  $handler->display->display_options['fields']['data_2']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_3']['id'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_3']['field'] = 'data';
  $handler->display->display_options['fields']['data_3']['relationship'] = 'data_3';
  $handler->display->display_options['fields']['data_3']['label'] = 'Address line 2';
  $handler->display->display_options['fields']['data_3']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_4']['id'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_4']['field'] = 'data';
  $handler->display->display_options['fields']['data_4']['relationship'] = 'data_4';
  $handler->display->display_options['fields']['data_4']['label'] = 'City';
  $handler->display->display_options['fields']['data_4']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_5']['id'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_5']['field'] = 'data';
  $handler->display->display_options['fields']['data_5']['relationship'] = 'data_5';
  $handler->display->display_options['fields']['data_5']['label'] = 'County';
  $handler->display->display_options['fields']['data_5']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_20']['id'] = 'data_20';
  $handler->display->display_options['fields']['data_20']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_20']['field'] = 'data';
  $handler->display->display_options['fields']['data_20']['relationship'] = 'data_16';
  $handler->display->display_options['fields']['data_20']['label'] = 'Postcode';
  $handler->display->display_options['fields']['data_20']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_6']['id'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_6']['field'] = 'data';
  $handler->display->display_options['fields']['data_6']['relationship'] = 'data_6';
  $handler->display->display_options['fields']['data_6']['label'] = 'Country';
  $handler->display->display_options['fields']['data_6']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_22']['id'] = 'data_22';
  $handler->display->display_options['fields']['data_22']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_22']['field'] = 'data';
  $handler->display->display_options['fields']['data_22']['relationship'] = 'data_18';
  $handler->display->display_options['fields']['data_22']['label'] = 'Gift aid';
  $handler->display->display_options['fields']['data_22']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_22']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['data_22']['empty'] = 'No';
  $handler->display->display_options['fields']['data_22']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_7']['id'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_7']['field'] = 'data';
  $handler->display->display_options['fields']['data_7']['relationship'] = 'data_7';
  $handler->display->display_options['fields']['data_7']['label'] = 'Email address';
  $handler->display->display_options['fields']['data_7']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_8']['id'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_8']['field'] = 'data';
  $handler->display->display_options['fields']['data_8']['relationship'] = 'data_8';
  $handler->display->display_options['fields']['data_8']['label'] = 'Phone number';
  $handler->display->display_options['fields']['data_8']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_15']['id'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_15']['field'] = 'data';
  $handler->display->display_options['fields']['data_15']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_15']['label'] = 'Mail';
  $handler->display->display_options['fields']['data_15']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_15']['alter']['text'] = 'All mail';
  $handler->display->display_options['fields']['data_15']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_15']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_19']['id'] = 'data_19';
  $handler->display->display_options['fields']['data_19']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_19']['field'] = 'data';
  $handler->display->display_options['fields']['data_19']['relationship'] = 'data_15';
  $handler->display->display_options['fields']['data_19']['label'] = 'No Mail';
  $handler->display->display_options['fields']['data_19']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_19']['alter']['text'] = '    ';
  $handler->display->display_options['fields']['data_19']['empty'] = 'Donor requests no mail';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_12']['id'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_12']['field'] = 'data';
  $handler->display->display_options['fields']['data_12']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_12']['label'] = 'Email';
  $handler->display->display_options['fields']['data_12']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_12']['alter']['text'] = 'All email';
  $handler->display->display_options['fields']['data_12']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_12']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_16']['id'] = 'data_16';
  $handler->display->display_options['fields']['data_16']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_16']['field'] = 'data';
  $handler->display->display_options['fields']['data_16']['relationship'] = 'data_12';
  $handler->display->display_options['fields']['data_16']['label'] = 'No email';
  $handler->display->display_options['fields']['data_16']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_16']['alter']['text'] = '  ';
  $handler->display->display_options['fields']['data_16']['empty'] = 'Donor requests no email';
  $handler->display->display_options['fields']['data_16']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_14']['id'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_14']['field'] = 'data';
  $handler->display->display_options['fields']['data_14']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_14']['label'] = 'Phone';
  $handler->display->display_options['fields']['data_14']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_14']['alter']['text'] = 'All phone';
  $handler->display->display_options['fields']['data_14']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_14']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_18']['id'] = 'data_18';
  $handler->display->display_options['fields']['data_18']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_18']['field'] = 'data';
  $handler->display->display_options['fields']['data_18']['relationship'] = 'data_14';
  $handler->display->display_options['fields']['data_18']['label'] = 'No Phone';
  $handler->display->display_options['fields']['data_18']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_18']['alter']['text'] = '     ';
  $handler->display->display_options['fields']['data_18']['empty'] = 'Donor requests no phone';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_13']['id'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_13']['field'] = 'data';
  $handler->display->display_options['fields']['data_13']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_13']['label'] = 'SMS';
  $handler->display->display_options['fields']['data_13']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_13']['alter']['text'] = 'All SMS';
  $handler->display->display_options['fields']['data_13']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['data_13']['empty_zero'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_17']['id'] = 'data_17';
  $handler->display->display_options['fields']['data_17']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_17']['field'] = 'data';
  $handler->display->display_options['fields']['data_17']['relationship'] = 'data_13';
  $handler->display->display_options['fields']['data_17']['label'] = 'No SMS';
  $handler->display->display_options['fields']['data_17']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['data_17']['alter']['text'] = '   ';
  $handler->display->display_options['fields']['data_17']['empty'] = 'Donor requests no SMS';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_9']['id'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_9']['field'] = 'data';
  $handler->display->display_options['fields']['data_9']['relationship'] = 'data_9';
  $handler->display->display_options['fields']['data_9']['label'] = 'Gift amount';
  $handler->display->display_options['fields']['data_9']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_10']['id'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_10']['field'] = 'data';
  $handler->display->display_options['fields']['data_10']['relationship'] = 'data_10';
  $handler->display->display_options['fields']['data_10']['label'] = 'Currency';
  $handler->display->display_options['fields']['data_10']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['label'] = 'Gift date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'd/m/Y';
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_11']['id'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_11']['field'] = 'data';
  $handler->display->display_options['fields']['data_11']['relationship'] = 'data_11';
  $handler->display->display_options['fields']['data_11']['label'] = 'Appeal';
  $handler->display->display_options['fields']['data_11']['alter']['strip_tags'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_23']['id'] = 'data_23';
  $handler->display->display_options['fields']['data_23']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_23']['field'] = 'data';
  $handler->display->display_options['fields']['data_23']['relationship'] = 'data_19';
  $handler->display->display_options['fields']['data_23']['label'] = 'Payment method';
  $handler->display->display_options['fields']['data_23']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['data_23']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data_10';
  $handler->display->display_options['filters']['data']['value'] = 'GBP';
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'From date';
  $handler->display->display_options['filters']['submitted']['expose']['description'] = 'Enter date formats yyyy-mm-dd';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['submitted']['group_info']['label'] = 'Submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['group_info']['group_items'] = array(
    2 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'firstname';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_2']['id'] = 'data_2';
  $handler->display->display_options['filters']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_2']['field'] = 'data';
  $handler->display->display_options['filters']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['filters']['data_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['data_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_2']['expose']['operator_id'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['data_2']['expose']['operator'] = 'data_2_op';
  $handler->display->display_options['filters']['data_2']['expose']['identifier'] = 'lastname';
  $handler->display->display_options['filters']['data_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_3']['id'] = 'data_3';
  $handler->display->display_options['filters']['data_3']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_3']['field'] = 'data';
  $handler->display->display_options['filters']['data_3']['relationship'] = 'data_9';
  $handler->display->display_options['filters']['data_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_3']['expose']['operator_id'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['label'] = 'Email address';
  $handler->display->display_options['filters']['data_3']['expose']['operator'] = 'data_3_op';
  $handler->display->display_options['filters']['data_3']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['data_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_4']['id'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_4']['field'] = 'data';
  $handler->display->display_options['filters']['data_4']['relationship'] = 'data_19';
  $handler->display->display_options['filters']['data_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_4']['expose']['operator_id'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['label'] = 'Data field';
  $handler->display->display_options['filters']['data_4']['expose']['operator'] = 'data_4_op';
  $handler->display->display_options['filters']['data_4']['expose']['identifier'] = 'data_4';
  $handler->display->display_options['filters']['data_4']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['data_4']['group_info']['label'] = 'Payment method';
  $handler->display->display_options['filters']['data_4']['group_info']['identifier'] = 'paymentmethod';
  $handler->display->display_options['filters']['data_4']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Realex',
      'operator' => '=',
      'value' => 'realex',
    ),
    2 => array(
      'title' => 'PayPal',
      'operator' => '=',
      'value' => 'paypal',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  $handler->display->display_options['path'] = 'admin/reports/donations/single/gbp/export';
  $handler->display->display_options['displays'] = array(
    'single_donations_gbp_page' => 'single_donations_gbp_page',
    'default' => 0,
    'single_donations_eur_page' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['single_donations_report'] = $view;

  return $export;
}
