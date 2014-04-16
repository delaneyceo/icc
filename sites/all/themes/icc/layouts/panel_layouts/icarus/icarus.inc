<?php

/**
 * @file
 * 2 Region layout with content(first) and sidebar(second) region for Sitenow standard service.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Icarus'),
  'icon' => 'preview.png',
  'category' => t('Sitenow Standard content layouts'),
  'theme' => 'icarus',
  'css' => '../../../css/layouts/icarus/icarus.layout.css',
  'regions' => array(
    'first' => t('Content'),
    'second' => t('Sidebar'),
  ),
);

/**
 * Implements hook_preprocess_golden().
 */
function template_preprocess_icarus(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-icarus';
  $variables['attributes_array']['class'][] = 'panel-display--icarus';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'icarus-region';
    $variables['region_attributes_array'][$name]['class'][] = 'icarus-region--' . drupal_clean_css_identifier($name);
  }
}
