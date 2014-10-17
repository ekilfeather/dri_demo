<?php

/**
 * @file
 * Get all DRI objects.
 *
 * This takes a list of Object IDs provided by DRI. Then gets the objects on at
 * a time using dri_api.module, and turns them into one giant JSON.
 *
 * WARNING save a backup of private://dri_api/* files!
 *    At the moment, this brutaly wipes out the big JSON file. SO if we do it
 *    while the DRI service is DOWN, we'll lose all data in the JSON file.
 *
 * @todo Could we make this fully automated with the REST API?
 *  /collections is supposed to return list of collection IDs.
 *  /catalog can be queried to return with collection as the search field.
 *  So we might be able to get rid of the object_ids.lst file.
 *
 * @todo improve the way the file is updated in repeat runs. Ideas...
 *   - don't bother making one big file, just a dir of individual json files.
 *   - Only update the JSON file for an object if the API response is non-empty,
 *     so we get around the problem in the warning above.
 */

// module dependency
if (!module_exists('dri_api')) {
  drush_print('You must enable dri_api module first.');
  exit(1);
}

// The source file. Mega important.
$object_ids = file(__DIR__ . '/object_ids.lst', FILE_IGNORE_NEW_LINES);

// @todo better, variable.
$output_dir = drupal_realpath('private://') . '/dri_api';


// track remaining for comma-sepation of objects.
$remain = count($object_ids);

// track requests which don't get a JSON response
$empty = array();

// assumes private files has been set up.
$dir = 'private://dri_api';
file_prepare_directory($dir, FILE_CREATE_DIRECTORY);

//start file
file_put_contents($output_dir . '/output.json', '['  . PHP_EOL);



foreach ($object_ids as $id) {

  $remain--;
  drush_print('Getting Object -> ' . $id);

  $object = dri_api_get_objects(array($id));

  // some objects don't work
  if (!empty($object)){
    // shunt it out of array-of-one
    $object = $object[0];

    // pretty pint output, only available since PHP 5.4
    if (defined('JSON_PRETTY_PRINT')) {
      $pretty = json_encode($object, JSON_PRETTY_PRINT);
    }
    else {
      $pretty = json_encode($object);
    }
    file_put_contents($output_dir . '/output.json', $pretty, FILE_APPEND);

    // object comma-separator
    if ($remain > 0) {
      file_put_contents($output_dir . '/output.json', ','  . PHP_EOL, FILE_APPEND);
    }
  }
  else {
    drush_print('empty -> ' . $id);
    $empty[] = $id;
  }
}
// end file
file_put_contents($output_dir . '/output.json', ']'  . PHP_EOL, FILE_APPEND);

// record empty objects
if (!empty($empty)) {
  $empty = implode(PHP_EOL, $empty);
  file_put_contents($output_dir . '/empty.lst', $empty);
}


