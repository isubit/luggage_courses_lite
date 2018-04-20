<?php
/**
 * @file
 * luggage_courses_lite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_courses_lite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function luggage_courses_lite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function luggage_courses_lite_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A course listing.'),
      'has_title' => '1',
      'title_label' => t('Course Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
