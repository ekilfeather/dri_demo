<?php
/**
 * @file
 * search_api_server_dri_objects.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function search_api_server_dri_objects_default_search_api_server() {
  $items = array();
  $items['dri_db_server'] = entity_import('search_api_server', '{
    "name" : "dri_db_server",
    "machine_name" : "dri_db_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "dri_object_index" : {
          "title" : {
            "table" : "search_api_db_dri_object_index_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_dri_creator" : {
            "table" : "search_api_db_dri_object_index_field_dri_creator",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_dri_publisher" : {
            "table" : "search_api_db_dri_object_index_field_dri_publisher",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_dri_description" : {
            "table" : "search_api_db_dri_object_index_field_dri_description",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_dri_rights" : {
            "table" : "search_api_db_dri_object_index_field_dri_rights",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_dri_date" : {
            "table" : "search_api_db_dri_object_index",
            "column" : "field_dri_date",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_dri_format" : {
            "table" : "search_api_db_dri_object_index_field_dri_format",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_dri_temporal_coverage" : {
            "table" : "search_api_db_dri_object_index_field_dri_temporal_coverage",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_dri_geographical_coverage" : {
            "table" : "search_api_db_dri_object_index_field_dri_geographical_coverage",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_dri_subject" : {
            "table" : "search_api_db_dri_object_index_field_dri_subject",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_dri_type" : {
            "table" : "search_api_db_dri_object_index_field_dri_type",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_dri_title" : {
            "table" : "search_api_db_dri_object_index_field_dri_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_dri_object_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_dri_institute" : {
            "table" : "search_api_db_dri_object_index_field_dri_institute",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
