<?php
/**
 * @file
 * webforms_contact_us.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function webforms_contact_us_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'314\',
      \'uid\' => \'1\',
      \'title\' => \'Contact\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'686055a5-aee7-429f-9a69-4bac4007b53c\',
      \'nid\' => \'313\',
      \'type\' => \'webform\',
      \'language\' => \'en\',
      \'created\' => \'1392295335\',
      \'changed\' => \'1392299161\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'29b14b61-c99f-4f4e-84d9-351929c233ee\',
      \'revision_timestamp\' => \'1392299161\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'If you’d like to get in touch with us here at Inspiring Ireland, please fill in the contact form below and we’ll be in touch as soon as possible.\',
            \'summary\' => \'\',
            \'format\' => \'extra_html\',
            \'safe_value\' => "<p>If you’d like to get in touch with us here at Inspiring Ireland, please fill in the contact form below and we’ll be in touch as soon as possible.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'webform\' => array(
        \'nid\' => \'313\',
        \'confirmation\' => \'\',
        \'confirmation_format\' => \'extra_html\',
        \'redirect_url\' => \'<confirmation>\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'teaser\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'0\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(
          1 => array(
            \'nid\' => \'313\',
            \'eid\' => \'1\',
            \'email\' => \'mark@annertech.com\',
            \'subject\' => \'Email from Inspiring Ireland Website\',
            \'from_name\' => \'1\',
            \'from_address\' => \'2\',
            \'template\' => \'default\',
            \'excluded_components\' => array(),
            \'html\' => \'0\',
            \'attachments\' => \'0\',
          ),
        ),
        \'components\' => array(
          1 => array(
            \'nid\' => 313,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'contact_full_name\',
            \'name\' => \'Full Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'none\',
              \'private\' => 0,
              \'disabled\' => 0,
              \'unique\' => 0,
              \'conditional_operator\' => \'=\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'1\',
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 313,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'contact_email_address\',
            \'name\' => \'Email Address\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'none\',
              \'private\' => 0,
              \'disabled\' => 0,
              \'unique\' => 0,
              \'conditional_operator\' => \'=\',
              \'width\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'1\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 313,
            \'cid\' => \'3\',
            \'pid\' => \'0\',
            \'form_key\' => \'contact_organisation_if_applicable\',
            \'name\' => \'Organisation (if applicable)\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'none\',
              \'private\' => 0,
              \'disabled\' => 0,
              \'unique\' => 0,
              \'conditional_operator\' => \'=\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'0\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 313,
            \'cid\' => \'4\',
            \'pid\' => \'0\',
            \'form_key\' => \'contact_message\',
            \'name\' => \'Message\',
            \'type\' => \'textarea\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'none\',
              \'private\' => 0,
              \'rows\' => \'10\',
              \'resizable\' => 0,
              \'disabled\' => 0,
              \'conditional_operator\' => \'=\',
              \'cols\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'1\',
            \'weight\' => \'3\',
            \'page_num\' => 1,
          ),
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392295335\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'314\',
        \'source\' => \'node/313\',
        \'alias\' => \'contact\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
