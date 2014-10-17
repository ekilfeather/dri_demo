<?php
/**
 * @file
 * dri_search_api_sarnia_server.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function dri_search_api_sarnia_server_default_search_api_server() {
  $items = array();
  $items['dri_solr_server'] = entity_import('search_api_server', '{
    "name" : "DRI Solr server",
    "machine_name" : "dri_solr_server",
    "description" : "Sarnia connection to DRI Solr server",
    "class" : "sarnia_solr_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "repository.dri.ie",
      "port" : "8080",
      "path" : "\\/solr\\/#\\/collection1",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
