<?php

/**
 * @file
 * 2 Region layout with content(first) and sidebar(second) region for Sitenow standard service.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Guardian'),
  'icon' => 'preview.png',
  'category' => t('Sitenow Standard content layouts'),
  'theme' => 'guardian',
  'css' => '../../../css/layouts/guardian/guardian.layout.css',
  'regions' => array(
    'first' => t('Content'),
    'second' => t('Sidebar'),
  ),
);

/**
 * Implements hook_preprocess_golden().
 */
function template_preprocess_guardian(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-guardian';
  $variables['attributes_array']['class'][] = 'panel-display--guardian';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'guardian-region';
    $variables['region_attributes_array'][$name]['class'][] = 'guardian-region--' . drupal_clean_css_identifier($name);
  }
}
