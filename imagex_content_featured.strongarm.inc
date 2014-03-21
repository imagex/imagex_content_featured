<?php
/**
 * @file
 * imagex_content_featured.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_content_featured_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_links';
  $strongarm->value = FALSE;
  $export['nodequeue_links'] = $strongarm;

  features_alter_code('variable', $export);

  return $export;
}
