<?php
/**
 * @file
 * icc_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function icc_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function icc_core_image_default_styles() {
  $styles = array();

  // Exported image style: 2_3_500px.
  $styles['2_3_500px'] = array(
    'label' => '2_3_500px',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 333,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 600_wide.
  $styles['600_wide'] = array(
    'label' => '600_wide',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: md_slider_1_thumb.
  $styles['md_slider_1_thumb'] = array(
    'label' => 'md_slider_1_thumb',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
