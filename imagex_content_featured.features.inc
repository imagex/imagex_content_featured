<?php
/**
 * @file
 * imagex_content_featured.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_content_featured_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function imagex_content_featured_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function imagex_content_featured_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: imagex_content_featured
  $nodequeues['imagex_content_featured'] = array(
    'name' => 'imagex_content_featured',
    'title' => 'Imagex content featured',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(),
    'roles' => array(),
    'count' => 0,
  );

  features_alter_code('fe_nodequeue', $nodequeues);

  return $nodequeues;
}
