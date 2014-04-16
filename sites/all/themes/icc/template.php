<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * uiowa_standard theme.
 */

function icc_breadcrumb(&$variables) {
  $output = '';
  if (!empty($variables['breadcrumb'])) {
    $output = '<div id="breadcrumb" class="breadcrumb-container clearfix"><h2 class="element-invisible">You are here</h2><ul class="breadcrumb">';
    $switch = array('odd' => 'even', 'even' => 'odd');
    $zebra = 'even';
    $last = count($variables['breadcrumb']) - 1;
    $seperator = '<span class="breadcrumb-seperator">&#187;</span>';
    foreach ($variables['breadcrumb'] as $key => $item) {
      $zebra = $switch[$zebra];
      $attributes['class'] = array('depth-' . ($key + 1), $zebra);
      if ($key == 0) {
        $attributes['class'][] = 'first';
      }
      if ($key == $last) {
        $attributes['class'][] = 'last';
        $output .= '<li' . drupal_attributes($attributes) . '>' . $item . '</li>' . '';
      }
      else
        $output .= '<li' . drupal_attributes($attributes) . '>' . $item . '</li>' . $seperator;
      }
    $output .= '</ul></div>';
    return $output;
  }
}
