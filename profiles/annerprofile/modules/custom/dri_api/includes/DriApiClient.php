<?php

/**
 * @file
 * Provides a client class for the DRI API.
 *
 * @todo Add auth_token to requests, keep Drupal variable.
 *
 * @todo implement a search the repository method for GET /catalog
 *
 * @todo implement a objects XML method for GET /objects/<object_id>
 *
 * @todo implement a convenience getGeoJSON() method? i.e. a secial case call
 *   to /get_objects endpoint.
 *
 * @todo *Possible* architectural improvements...
 *   1. Instead of treating our Guzzle Client object as a property, we could
 *    extend the Guzzle\Service\Client class. Two approaches...
 *    http://guzzle.readthedocs.org/en/latest/webservice-client/webservice-client.html
 *    https://renoirboulanger.com/blog/2012/07/how-i-managed-to-make-work-guzzle-rest-client-library-under-symfony-2-0-x-as-a-bundle-snipet/
 *
 *   2. OR, we could wrap up a POST client and a GET client, if we wanted to
 *    implement all of the methods from the DRI API
 */

/**
 * WORKAROUND: For some reason, composer_autoload isn't picking up this
 * autoload file on every menu path :-(
 * So we'll load it this way to be sure.
 */
module_load_include('php', 'guzzle', 'vendor/autoload');

use Guzzle\Service\Client;

class DriApiClient {

  /**
   * A Guzzle Client object.
   *
   * @var \Guzzle\Service\Client
   */
  protected $client;


  /**
   * Constuctor.
   *
   * @todo make URL more robust WRT trailing slash in variable.
   */
  public function __construct() {
    $api_base_url = variable_get('dri_api_endpoint_base_url');
    $this->client = new Client($api_base_url);
  }


  /**
   * Get one or more DRI objects.
   *
   * POST /get_objects
   *
   * @param array $object_ids
   *   Array of Object IDs to request from the DRI.
   *
   * @param array $metadata
   *   Array of metadata fields to request for each object. If empty or NULL,
   *   all metadata fields will be returned.
   *
   * @return array
   *   Array of items, each having an objectID and the metadata requested.
   *
   * @todo DRI devs talked about making this a GET instead, to make it more
   *   'RESTful'. Update may be needed.
   */
  public function getObjects(array $object_ids, array $metadata = NULL) {
    $request = $this->client->post(
      array( // $uri
        'get_objects{?user_email}{&user_token}', // uri template',
        array( // uri params
          'user_email' =>  variable_get('dri_api_auth_user', ''),
          'user_token' => variable_get('dri_api_auth_token', '')
        ),
      ),
      array( // $headers
        'Accept' => 'application/json',
        'Content-Type' => 'application/json',
      )
    );

    // Object IDs are called 'pid' in the json request body
    $pids = array();
    foreach ($object_ids as $id) {
      $pids[] = array(
        'pid' => $id,
      );
    }

    $body = json_encode(array(
      'objects' => $pids,
      'metadata' => $metadata,
    ));
    $request->setBody($body);

    try {
      $response = $request->send();
      return $response->json();
    }
    catch (exception $e) {
      if ($e instanceof Guzzle\Http\Exception\ClientErrorResponseException) {
        watchdog('dri_api',
          "Failed call to getObjects()<br />Objects: @object_ids<br/>Metadata: @metadata<br />Status Code: @statuscode @reason<br/>@exception_message",
          array(
            '@object_ids' => implode(',', $object_ids),
            '@metadata' => implode(',', $metadata),
            '@statuscode' => $e->getResponse()->getStatusCode(),
            '@reason' => $e->getResponse()->getReasonPhrase(),
            '@exception_message' => $e->getMessage()
          ),
          WATCHDOG_ERROR
        );
      }
      else {
        // not sure what exception we got
        watchdog('dri_api',
          "Failed call to getObjects()<br />Objects: @object_ids<br/>Metadata: @metadata<br />@exception_message",
          array(
            '@object_ids' => implode(',', $object_ids),
            '@metadata' => implode(',', $metadata),
            '@exception_message' => $e->getMessage()
          ),
          WATCHDOG_ERROR
        );
      }
    }
  }


  /**
   * Get a list of files for one or more DRI objects.
   *
   * POST /get_assets
   *
   * @param array $object_ids
   *   Array of Object IDs to request from the DRI.
   *
   * @return array
   *   Array of items, each having an objectID and the metadata requested.
   *
   * @todo DRI devs talked about making this a GET instead, to make it more
   *   'RESTful'. Update may be needed.
   */
  public function getAssets(array $object_ids) {
    $request = $this->client->post(
      array( // $uri
        'get_assets{?auth_token}', // uri template',
        array( // uri params
          'auth_token' => variable_get('dri_api_auth_token', ''),
        ),
      ),
      array( // $headers
        'Accept' => 'application/json',
        'Content-Type' => 'application/json',
      )
    );

    // Object IDs are called 'pid' in the json request body
    $pids = array();
    foreach ($object_ids as $id) {
      $pids[] = array(
        'pid' => $id,
      );
    }

    $body = json_encode(array(
      'objects' => $pids,
    ));
    $request->setBody($body);

    try {
      $response = $request->send();
      return $response->json();
    }
    catch (exception $e) {
      if ($e instanceof Guzzle\Http\Exception\ClientErrorResponseException) {
        watchdog('dri_api',
          "Failed call to getAssets()<br />Objects: @object_ids<br/>Status Code: @statuscode @reason<br/>@exception_message",
          array(
            '@object_ids' => implode(',', $object_ids),
            '@statuscode' => $e->getResponse()->getStatusCode(),
            '@reason' => $e->getResponse()->getReasonPhrase(),
            '@exception_message' => $e->getMessage()
          ),
          WATCHDOG_ERROR
        );
      }
      else {
        // not sure what exception we got
        watchdog('dri_api',
          "Failed call to getAssetss()<br />Objects: @object_ids<br />@exception_message",
          array(
            '@object_ids' => implode(',', $object_ids),
            '@exception_message' => $e->getMessage()
          ),
          WATCHDOG_ERROR
        );
      }
    }
  }


  /**
   * Get related objects.
   *
   * GET /related
   *
   * @param string $object_id
   *   DRI object ID to find related objects for,
   *
   * @param int $count
   *   Optional. Number of related objects to retrieve.
   *
   * @return array
   *   Array of DRI Object + relevance scores.
   */
  public function getRelatedObjects($object_id, $count ) {
    $request = $this->client->get(
      array( // $uri
        'related{?object,count,auth_token}', // uri template
        array( // uri params
          'object' => $object_id,
          'count' => $count,
          'auth_token' => variable_get('dri_api_auth_token', ''),
        ),
      ),
      array( // $headers
        'Accept' => 'application/json',
      )
    );

    try {
      $response = $request->send();
      return $response->json();
    }
    catch (exception $e) {
      if ($e instanceof Guzzle\Http\Exception\ClientErrorResponseException) {
        watchdog('dri_api',
          "Failed call to getRelatedObjects - @object_id <br/> Status Code: @statuscode @reason <br/> @exception_message",
          array(
            '@object_id' => $object_id,
            '@statuscode' => $e->getResponse()->getStatusCode(),
            '@reason' => $e->getResponse()->getReasonPhrase(),
            '@exception_message' => $e->getMessage()
          ),
          WATCHDOG_ERROR
        );
      }
      else {
        // not sure what exception we got
        watchdog('dri_api',
          "Failed call to getRelatedObjects - @object_id <br/> @exception_message",
          array(
            '@object_id' => $object_id,
            '@exception_message' => $e->getMessage()
          ),
          WATCHDOG_ERROR
        );
      }
    }
  }


  /**
   * Get Collections.
   *
   * GET /collections
   *
   * @return array
   *   Array of DRI Objects representing collections.
   *
   * @todo This one is UNTESTED - DRI API returns 404.
   */
  public function getCollections() {
    $request = $this->client->get(
      array( // $uri
        'collections{?auth_token}', // uri template
        array( // uri params
          'auth_token' => variable_get('dri_api_auth_token', ''),
        ),
      ),
      array( // $headers
        'Accept' => 'application/json',
      )
    );

    try {
      $response = $request->send();
      return $response->json();
    }
    catch (exception $e) {
      if ($e instanceof Guzzle\Http\Exception\ClientErrorResponseException) {
        watchdog('dri_api',
          "Failed call to getCollections -<br/> Status Code: @statuscode @reason <br/> @exception_message",
          array(
            '@statuscode' => $e->getResponse()->getStatusCode(),
            '@reason' => $e->getResponse()->getReasonPhrase(),
            '@exception_message' => $e->getMessage()
          ),
          WATCHDOG_ERROR
        );
      }
      else {
        // not sure what exception we got
        watchdog('dri_api',
          "Failed call to getCollections -<br/> @exception_message",
          array(
            '@exception_message' => $e->getMessage()
          ),
          WATCHDOG_ERROR
        );
      }
    }
  }

}
