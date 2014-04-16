<?php

/**
 * @file
 */

// Plugin definition.
$plugin = array(
  'title' => t('Hero'),
  'icon' => 'preview.png',
  'category' => t('Content layouts'),
  'theme' => 'hero',
  'css' => '../../../css/layouts/hero/hero.layout.css',
  'regions' => array(
    'first' => t('Hero'),
    'second' => t('Content'),
  ),
);

/**
 * Implements hook_preprocess_zero().
 */
function template_preprocess_hero(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-hero';
  $variables['attributes_array']['class'][] = 'panel-display--hero';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'hero-region';
    $variables['region_attributes_array'][$name]['class'][] = 'hero-region--' . drupal_clean_css_identifier($name);

    // Provide a container wrapper for the second region.
    if ($name == 'second') {
      $variables['region_attributes_array'][$name]['class'][] = 'container';
    }
  }
}
