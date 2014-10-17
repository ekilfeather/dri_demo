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
      \'vid\' => \'86\',
      \'uid\' => \'1\',
      \'title\' => \'National Library\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'125528d9-74e5-4714-b617-f8e2e0ca895d\',
      \'nid\' => \'85\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393856806\',
      \'changed\' => \'1393856806\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1937ad3c-5622-4196-90ac-c4ef8f5fa6bb\',
      \'revision_timestamp\' => \'1393856806\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'74\',
            \'uid\' => \'1\',
            \'filename\' => \'national_library.jpg\',
            \'uri\' => \'public://images/partners/national_library.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'84316\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393856806\',
            \'type\' => \'image\',
            \'uuid\' => \'17c0e494-2057-42a8-9f23-aad540b0756a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'2000\',
              \'height\' => \'1137\',
            ),
            \'alt\' => \'National Library, a partner of Inspiring Ireland\',
            \'title\' => \'National Library, a partner of Inspiring Ireland\',
            \'width\' => \'2000\',
            \'height\' => \'1137\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.nli.ie\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'National Library\',
            \'format\' => NULL,
            \'safe_value\' => \'National Library\',
          ),
        ),
      ),
      \'title_original\' => \'National Library\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'85\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856806\',
              \'changed\' => \'1393856806\',
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
      \'last_comment_timestamp\' => \'1393856806\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'86\',
        \'source\' => \'node/85\',
        \'alias\' => \'partners/national-library\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'85\',
      \'uid\' => \'1\',
      \'title\' => \'National Gallery\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'488442f1-a04e-4cbc-830e-7a1439086ad4\',
      \'nid\' => \'84\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393856757\',
      \'changed\' => \'1393856757\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2fb1ab8b-3c12-40d5-887c-4a73f7896c42\',
      \'revision_timestamp\' => \'1393856757\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'73\',
            \'uid\' => \'1\',
            \'filename\' => \'national_gallery.jpg\',
            \'uri\' => \'public://images/partners/national_gallery.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'12423\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393856757\',
            \'type\' => \'image\',
            \'uuid\' => \'f2fb2c86-b12f-40ea-95e2-230fb1b04413\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'158\',
              \'height\' => \'300\',
            ),
            \'alt\' => \'National Gallery, a partner of Inspiring Ireland\',
            \'title\' => \'National Gallery, a partner of Inspiring Ireland\',
            \'width\' => \'158\',
            \'height\' => \'300\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.nationalgallery.ie\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'National Gallery\',
            \'format\' => NULL,
            \'safe_value\' => \'National Gallery\',
          ),
        ),
      ),
      \'title_original\' => \'National Gallery\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'84\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856757\',
              \'changed\' => \'1393856757\',
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
      \'last_comment_timestamp\' => \'1393856757\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'85\',
        \'source\' => \'node/84\',
        \'alias\' => \'partners/national-gallery\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'82\',
      \'uid\' => \'1\',
      \'title\' => \'Digital Repository of Ireland\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'501bec11-bcf2-46c2-8b9a-6c594af293c1\',
      \'nid\' => \'81\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393856629\',
      \'changed\' => \'1393856629\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3ddeba6a-f21e-4a1e-8a26-0e5c73668289\',
      \'revision_timestamp\' => \'1393856629\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'70\',
            \'uid\' => \'1\',
            \'filename\' => \'dri.jpg_500x500.jpg\',
            \'uri\' => \'public://images/partners/dri.jpg_500x500.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'13046\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393856629\',
            \'type\' => \'image\',
            \'uuid\' => \'8676793e-9b16-4f76-9ab7-436e4d985329\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'500\',
              \'height\' => \'214\',
            ),
            \'alt\' => \'Digital Repository of Ireland, a partner of Inspiring Ireland\',
            \'title\' => \'Digital Repository of Ireland, a partner of Inspiring Ireland\',
            \'width\' => \'500\',
            \'height\' => \'214\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.dri.ie\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
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
              \'entity_id\' => \'81\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856629\',
              \'changed\' => \'1393856629\',
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
      \'last_comment_timestamp\' => \'1393856629\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'82\',
        \'source\' => \'node/81\',
        \'alias\' => \'partners/digital-repository-ireland\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'83\',
      \'uid\' => \'1\',
      \'title\' => \'Irish Museum of Modern Art\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'834fb394-d6e9-4ce1-9a00-b150d9e0b8fa\',
      \'nid\' => \'82\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393856665\',
      \'changed\' => \'1393856665\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'53a04171-59a4-469b-9b95-ebdf748713c3\',
      \'revision_timestamp\' => \'1393856665\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'71\',
            \'uid\' => \'1\',
            \'filename\' => \'imma.jpg\',
            \'uri\' => \'public://images/partners/imma.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'51220\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393856665\',
            \'type\' => \'image\',
            \'uuid\' => \'c7c0f280-2fb2-4daf-a097-45822af4de94\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'408\',
              \'height\' => \'472\',
            ),
            \'alt\' => \'Irish Museum of Modern Art, a partner of Inspiring Ireland\',
            \'title\' => \'Irish Museum of Modern Art, a partner of Inspiring Ireland\',
            \'width\' => \'408\',
            \'height\' => \'472\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.imma.ie\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Irish Museum of Modern Art\',
            \'format\' => NULL,
            \'safe_value\' => \'Irish Museum of Modern Art\',
          ),
        ),
      ),
      \'title_original\' => \'Irish Museum of Modern Art\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'82\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856665\',
              \'changed\' => \'1393856665\',
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
      \'last_comment_timestamp\' => \'1393856665\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'83\',
        \'source\' => \'node/82\',
        \'alias\' => \'partners/irish-museum-modern-art\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'78\',
      \'uid\' => \'1\',
      \'title\' => \'Abbey Theatre\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5d163746-99c5-4b11-81d8-a85a244c1faf\',
      \'nid\' => \'77\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393854834\',
      \'changed\' => \'1393854834\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7b7ba9b1-1a4b-4a59-b798-ab6aea9dcb17\',
      \'revision_timestamp\' => \'1393854834\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'66\',
            \'uid\' => \'1\',
            \'filename\' => \'abbey_theatre.jpg\',
            \'uri\' => \'public://images/partners/abbey_theatre.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'13077\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393854834\',
            \'type\' => \'image\',
            \'uuid\' => \'51035390-9be2-4d8e-a528-895ae7abf52c\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'325\',
              \'height\' => \'168\',
            ),
            \'alt\' => \'Abbey Theatre, a partner of Inspiring Ireland\',
            \'title\' => \'Abbey Theatre, a partner of Inspiring Ireland\',
            \'width\' => \'325\',
            \'height\' => \'168\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.abbeytheatre.ie/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Abbey Theatre\',
            \'format\' => NULL,
            \'safe_value\' => \'Abbey Theatre\',
          ),
        ),
      ),
      \'title_original\' => \'Abbey Theatre\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'77\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393854834\',
              \'changed\' => \'1393854834\',
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
      \'last_comment_timestamp\' => \'1393854834\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'78\',
        \'source\' => \'node/77\',
        \'alias\' => \'partners/abbey-theatre\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'80\',
      \'uid\' => \'1\',
      \'title\' => \'Crawford Art Gallery\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b7fa7718-b327-4174-a498-67e93eaa35ba\',
      \'nid\' => \'79\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393856466\',
      \'changed\' => \'1393856466\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9dd36fd3-cb74-40db-b5c9-8836d8963461\',
      \'revision_timestamp\' => \'1393856466\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'68\',
            \'uid\' => \'1\',
            \'filename\' => \'crawford.jpg\',
            \'uri\' => \'public://images/partners/crawford.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'11754\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393856466\',
            \'type\' => \'image\',
            \'uuid\' => \'56640e53-1f53-47dd-a656-aa0053afda47\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'385\',
              \'height\' => \'55\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'385\',
            \'height\' => \'55\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.crawfordartgallery.ie/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Crawford Art Gallery\',
            \'format\' => NULL,
            \'safe_value\' => \'Crawford Art Gallery\',
          ),
        ),
      ),
      \'title_original\' => \'Crawford Art Gallery\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'79\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856466\',
              \'changed\' => \'1393856466\',
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
      \'last_comment_timestamp\' => \'1393856466\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'80\',
        \'source\' => \'node/79\',
        \'alias\' => \'partners/crawford-art-gallery\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'84\',
      \'uid\' => \'1\',
      \'title\' => \'National Archives\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b11c786d-3cf8-4a41-8ece-4d49e3c2c266\',
      \'nid\' => \'83\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393856711\',
      \'changed\' => \'1393856711\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c2a1b798-9d93-45e5-b63b-0376cd5997f5\',
      \'revision_timestamp\' => \'1393856711\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'72\',
            \'uid\' => \'1\',
            \'filename\' => \'national_archives.jpg\',
            \'uri\' => \'public://images/partners/national_archives.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'11457\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393856711\',
            \'type\' => \'image\',
            \'uuid\' => \'da0813ff-9a88-497f-8175-5d803efce71c\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'419\',
              \'height\' => \'108\',
            ),
            \'alt\' => \'National Archives, a partner of Inspiring Ireland\',
            \'title\' => \'National Archives, a partner of Inspiring Ireland\',
            \'width\' => \'419\',
            \'height\' => \'108\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.nationalarchives.ie/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'National Archives\',
            \'format\' => NULL,
            \'safe_value\' => \'National Archives\',
          ),
        ),
      ),
      \'title_original\' => \'National Archives\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'83\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856711\',
              \'changed\' => \'1393856711\',
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
      \'last_comment_timestamp\' => \'1393856711\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'84\',
        \'source\' => \'node/83\',
        \'alias\' => \'partners/national-archives\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'87\',
      \'uid\' => \'1\',
      \'title\' => \'National Museum of Ireland\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a0a53308-47b4-4d6b-8b66-b6c8860d1604\',
      \'nid\' => \'86\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393856856\',
      \'changed\' => \'1393856856\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dfe4ebe6-d369-4027-80fc-7b070d17c6cb\',
      \'revision_timestamp\' => \'1393856856\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'75\',
            \'uid\' => \'1\',
            \'filename\' => \'national_museum.jpg_500x176.jpg\',
            \'uri\' => \'public://images/partners/national_museum.jpg_500x176.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'23676\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393856856\',
            \'type\' => \'image\',
            \'uuid\' => \'5b151e7a-7042-4f89-ab2c-e3b71670e5f1\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'500\',
              \'height\' => \'176\',
            ),
            \'alt\' => \'National Museum of Ireland, a partner of Inspiring Ireland\',
            \'title\' => \'National Museum of Ireland, a partner of Inspiring Ireland\',
            \'width\' => \'500\',
            \'height\' => \'176\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.museum.ie\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'National Museum of Ireland\',
            \'format\' => NULL,
            \'safe_value\' => \'National Museum of Ireland\',
          ),
        ),
      ),
      \'title_original\' => \'National Museum of Ireland\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'86\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856856\',
              \'changed\' => \'1393856856\',
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
      \'last_comment_timestamp\' => \'1393856856\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'87\',
        \'source\' => \'node/86\',
        \'alias\' => \'partners/national-museum-ireland\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'81\',
      \'uid\' => \'1\',
      \'title\' => \'Department of Arts, Heritage and the Gaeltacht\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d6268f27-2496-491b-a734-48b8d5bfe805\',
      \'nid\' => \'80\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393856572\',
      \'changed\' => \'1393856572\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'eb34a110-0e0d-4b2e-9851-1fbf950e4f82\',
      \'revision_timestamp\' => \'1393856572\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'69\',
            \'uid\' => \'1\',
            \'filename\' => \'dahg.jpg\',
            \'uri\' => \'public://images/partners/dahg.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'139941\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393856572\',
            \'type\' => \'image\',
            \'uuid\' => \'72871258-e3fd-4bc2-925d-3d57b66d8d0f\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1952\',
              \'height\' => \'446\',
            ),
            \'alt\' => \'Department of Arts, Heritage, and the Gaeltacht, a partner of Inspiring Ireland\',
            \'title\' => \'Department of Arts, Heritage, and the Gaeltacht, a partner of Inspiring Ireland\',
            \'width\' => \'1952\',
            \'height\' => \'446\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.ahg.gov.ie/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
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
              \'entity_id\' => \'80\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856572\',
              \'changed\' => \'1393856572\',
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
      \'last_comment_timestamp\' => \'1393856572\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'81\',
        \'source\' => \'node/80\',
        \'alias\' => \'partners/department-arts-heritage-and-gaeltacht\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'79\',
      \'uid\' => \'1\',
      \'title\' => \'Chester Beatty Library\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d8bf124c-2d08-4ce3-bf95-a2d4b6297b04\',
      \'nid\' => \'78\',
      \'type\' => \'partners\',
      \'language\' => \'en\',
      \'created\' => \'1393856405\',
      \'changed\' => \'1393856974\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f2feb8fa-4a0a-422e-adb3-138c02dad1fd\',
      \'revision_timestamp\' => \'1393856974\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'76\',
            \'uid\' => \'1\',
            \'filename\' => \'chester_beatty.jpg\',
            \'uri\' => \'public://images/partners/chester_beatty_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'17844\',
            \'status\' => \'1\',
            \'timestamp\' => \'1393856974\',
            \'type\' => \'image\',
            \'uuid\' => \'ef059827-9eb8-400d-b419-df4cd558e45b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'301\',
              \'height\' => \'192\',
            ),
            \'alt\' => \'Chester Beatty Library, a partner of Inspiring Ireland\',
            \'title\' => \'Chester Beatty Library, a partner of Inspiring Ireland\',
            \'width\' => \'301\',
            \'height\' => \'192\',
          ),
        ),
      ),
      \'field_partners_website\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.dublincastle.ie/visitorfacilities/thechesterbeattylibrary/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Chester Beatty Library\',
            \'format\' => NULL,
            \'safe_value\' => \'Chester Beatty Library\',
          ),
        ),
      ),
      \'title_original\' => \'Chester Beatty Library\',
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'78\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1393856405\',
              \'changed\' => \'1393856974\',
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
      \'last_comment_timestamp\' => \'1393856405\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'79\',
        \'source\' => \'node/78\',
        \'alias\' => \'partners/chester-beatty-library\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
