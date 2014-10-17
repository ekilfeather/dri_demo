<?php
/**
 * @file
 * search_api_index_dri_objects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_api_index_dri_objects_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function search_api_index_dri_objects_default_search_api_index() {
  $items = array();
  $items['dri_object_index'] = entity_import('search_api_index', '{
    "name" : "dri_object_index",
    "machine_name" : "dri_object_index",
    "description" : null,
    "server" : "dri_db_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "title" : { "type" : "text" },
        "field_dri_creator" : { "type" : "text" },
        "field_dri_date" : { "type" : "string" },
        "field_dri_description" : { "type" : "text" },
        "field_dri_geographical_coverage" : { "type" : "list\\u003Cstring\\u003E" },
        "field_dri_publisher" : { "type" : "text" },
        "field_dri_rights" : { "type" : "text" },
        "field_dri_title" : { "type" : "text" },
        "field_dri_subject" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_dri_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_dri_institute" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_dri_temporal_coverage" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_dri_format" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "dri_object" : "dri_object" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_dri_creator" : true,
              "field_dri_publisher" : true,
              "field_dri_description" : true,
              "field_dri_rights" : true,
              "field_dri_title" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_dri_creator" : true,
              "field_dri_publisher" : true,
              "field_dri_description" : true,
              "field_dri_rights" : true,
              "field_dri_title" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "field_dri_creator" : true,
              "field_dri_publisher" : true,
              "field_dri_description" : true,
              "field_dri_rights" : true,
              "field_dri_title" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_dri_creator" : true,
              "field_dri_publisher" : true,
              "field_dri_description" : true,
              "field_dri_rights" : true,
              "field_dri_title" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_dri_creator" : true,
              "field_dri_publisher" : true,
              "field_dri_description" : true,
              "field_dri_rights" : true,
              "field_dri_title" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
