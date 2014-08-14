<?php
/**
 * @file
 * drupal_resume_cv_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupal_resume_cv_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'views_base_columns' => array(
        'bundle' => 'bundle',
        'entity_type' => 'entity_type',
        'format' => 'format',
        'value' => 'value',
      ),
      'views_base_table' => 1,
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_about_person'
  $field_bases['field_about_person'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_about_person',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'educational_organization' => 0,
        'employment' => 0,
        'formal_education' => 0,
        'page' => 0,
        'professional_training' => 0,
        'resume_or_cv' => 0,
        'schemaorg_event' => 0,
        'schemaorg_person' => 'schemaorg_person',
        'skills' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
      'views_base_columns' => array(
        'bundle' => 'bundle',
        'entity_type' => 'entity_type',
        'nid' => 'nid',
      ),
      'views_base_table' => 1,
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_city'
  $field_bases['field_city'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_city',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_formal_education'
  $field_bases['field_formal_education'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_formal_education',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'educational_organization' => 0,
        'employment' => 0,
        'formal_education' => 'formal_education',
        'page' => 0,
        'professional_training' => 0,
        'resume_or_cv' => 0,
        'schemaorg_event' => 0,
        'schemaorg_person' => 0,
        'skills' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
      'views_base_columns' => array(
        'bundle' => 'bundle',
        'entity_id' => 'entity_id',
        'entity_type' => 'entity_type',
        'nid' => 'nid',
      ),
      'views_base_table' => 1,
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_has_professional_training'
  $field_bases['field_has_professional_training'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_has_professional_training',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'educational_organization' => 0,
        'employment' => 0,
        'formal_education' => 0,
        'page' => 0,
        'professional_training' => 'professional_training',
        'resume_or_cv' => 0,
        'schemaorg_event' => 0,
        'schemaorg_person' => 0,
        'skills' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_has_skills'
  $field_bases['field_has_skills'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_has_skills',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'educational_organization' => 0,
        'employment' => 0,
        'formal_education' => 0,
        'page' => 0,
        'professional_training' => 0,
        'resume_or_cv' => 0,
        'schemaorg_event' => 0,
        'schemaorg_person' => 0,
        'skills' => 'skills',
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_has_work_history'
  $field_bases['field_has_work_history'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_has_work_history',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'educational_organization' => 0,
        'employment' => 'employment',
        'formal_education' => 0,
        'page' => 0,
        'professional_training' => 0,
        'resume_or_cv' => 0,
        'schemaorg_event' => 0,
        'schemaorg_person' => 0,
        'skills' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_other_information'
  $field_bases['field_other_information'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_information',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'educational_organization' => 0,
        'employment' => 0,
        'formal_education' => 0,
        'other_info' => 'other_info',
        'page' => 0,
        'professional_training' => 0,
        'resume_or_cv' => 0,
        'schemaorg_event' => 0,
        'schemaorg_person' => 0,
        'skills' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_personal_references'
  $field_bases['field_personal_references'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_personal_references',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'educational_organization' => 0,
        'employment' => 0,
        'formal_education' => 0,
        'other_info' => 0,
        'page' => 0,
        'personal_reference' => 'personal_reference',
        'professional_reference' => 0,
        'professional_training' => 0,
        'resume_or_cv' => 0,
        'schemaorg_event' => 0,
        'schemaorg_person' => 0,
        'skills' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_photo'
  $field_bases['field_photo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_photo',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_references'
  $field_bases['field_references'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_references',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'educational_organization' => 0,
        'employment' => 0,
        'formal_education' => 0,
        'other_info' => 0,
        'page' => 0,
        'personal_reference' => 0,
        'professional_reference' => 'professional_reference',
        'professional_training' => 0,
        'resume_or_cv' => 0,
        'schemaorg_event' => 0,
        'schemaorg_person' => 0,
        'skills' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_state'
  $field_bases['field_state'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_state',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 50,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_street_address_1'
  $field_bases['field_street_address_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_street_address_1',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_street_address_2'
  $field_bases['field_street_address_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_street_address_2',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_zipcode'
  $field_bases['field_zipcode'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_zipcode',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 50,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
