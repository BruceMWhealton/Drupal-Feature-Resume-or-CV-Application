<?php
/**
 * @file
 * drupal_resume_cv_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupal_resume_cv_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_resume_or_cv';
  $strongarm->value = 0;
  $export['comment_anonymous_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_resume_or_cv';
  $strongarm->value = 1;
  $export['comment_default_mode_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_resume_or_cv';
  $strongarm->value = '50';
  $export['comment_default_per_page_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_resume_or_cv';
  $strongarm->value = 1;
  $export['comment_form_location_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_resume_or_cv';
  $strongarm->value = '1';
  $export['comment_preview_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_resume_or_cv';
  $strongarm->value = '1';
  $export['comment_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_resume_or_cv';
  $strongarm->value = 1;
  $export['comment_subject_field_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__resume_or_cv';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_resume_or_cv';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_resume_or_cv';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_resume_or_cv';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_resume_or_cv';
  $strongarm->value = '1';
  $export['node_preview_resume_or_cv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_resume_or_cv';
  $strongarm->value = 0;
  $export['node_submitted_resume_or_cv'] = $strongarm;

  return $export;
}
