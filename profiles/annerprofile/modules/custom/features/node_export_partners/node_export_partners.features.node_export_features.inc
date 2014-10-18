<?php
/**
 * @file
 * node_export_partners.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function node_export_partners_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'0\',
      \'title\' => \'Digital Repository of Ireland\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'501bec11-bcf2-46c2-8b9a-6c594af293c1\',
      \'nid\' => \'4\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1413556753\',
      \'changed\' => \'1413556753\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3ddeba6a-f21e-4a1e-8a26-0e5c73668289\',
      \'revision_timestamp\' => \'1413556753\',
      \'revision_uid\' => \'0\',
      \'body\' => array(),
      \'field_partners_image_frontpage\' => array(),
      \'field_partners_image_listing_pg\' => array(),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.dri.ie\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_position_in_lists\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Digital Repository of Ireland\',
            \'format\' => NULL,
            \'safe_value\' => \'Digital Repository of Ireland\',
          ),
        ),
      ),
      \'title_original\' => \'Digital Repository of Ireland\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'4\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856629\',
              \'changed\' => \'1413556753\',
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
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1413556753\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/4\',
        \'alias\' => \'partners/digital-repository-ireland\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'0\',
      \'title\' => \'Department of Arts, Heritage and the Gaeltacht\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d6268f27-2496-491b-a734-48b8d5bfe805\',
      \'nid\' => \'10\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1413556753\',
      \'changed\' => \'1413556753\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'eb34a110-0e0d-4b2e-9851-1fbf950e4f82\',
      \'revision_timestamp\' => \'1413556753\',
      \'revision_uid\' => \'0\',
      \'body\' => array(),
      \'field_partners_image_frontpage\' => array(),
      \'field_partners_image_listing_pg\' => array(),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.ahg.gov.ie/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_position_in_lists\' => array(),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Department of Arts, Heritage and the Gaeltacht\',
            \'format\' => NULL,
            \'safe_value\' => \'Department of Arts, Heritage and the Gaeltacht\',
          ),
        ),
      ),
      \'title_original\' => \'Department of Arts, Heritage and the Gaeltacht\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'10\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856572\',
              \'changed\' => \'1413556753\',
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
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1413556753\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'10\',
        \'source\' => \'node/10\',
        \'alias\' => \'partners/department-arts-heritage-and-gaeltacht\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
