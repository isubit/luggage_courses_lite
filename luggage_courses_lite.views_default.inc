<?php
/**
 * @file
 * luggage_courses_lite.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_courses_lite_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Identifier */
  $handler->display->display_options['fields']['field_course_lite_identifier']['id'] = 'field_course_lite_identifier';
  $handler->display->display_options['fields']['field_course_lite_identifier']['table'] = 'field_data_field_course_lite_identifier';
  $handler->display->display_options['fields']['field_course_lite_identifier']['field'] = 'field_course_lite_identifier';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Semester */
  $handler->display->display_options['fields']['field_course_lite_semester']['id'] = 'field_course_lite_semester';
  $handler->display->display_options['fields']['field_course_lite_semester']['table'] = 'field_data_field_course_lite_semester';
  $handler->display->display_options['fields']['field_course_lite_semester']['field'] = 'field_course_lite_semester';
  $handler->display->display_options['fields']['field_course_lite_semester']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_course_lite_semester']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_course_lite_year']['id'] = 'field_course_lite_year';
  $handler->display->display_options['fields']['field_course_lite_year']['table'] = 'field_data_field_course_lite_year';
  $handler->display->display_options['fields']['field_course_lite_year']['field'] = 'field_course_lite_year';
  $handler->display->display_options['fields']['field_course_lite_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Sort criterion: Content: Identifier (field_course_lite_identifier) */
  $handler->display->display_options['sorts']['field_course_lite_identifier_value']['id'] = 'field_course_lite_identifier_value';
  $handler->display->display_options['sorts']['field_course_lite_identifier_value']['table'] = 'field_data_field_course_lite_identifier';
  $handler->display->display_options['sorts']['field_course_lite_identifier_value']['field'] = 'field_course_lite_identifier_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'courses';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Courses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['courses'] = $view;

  return $export;
}
