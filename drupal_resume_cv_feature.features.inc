<?php
/**
 * @file
 * drupal_resume_cv_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_resume_cv_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupal_resume_cv_feature_node_info() {
  $items = array(
    'resume_or_cv' => array(
      'name' => t('Resume or CV'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
