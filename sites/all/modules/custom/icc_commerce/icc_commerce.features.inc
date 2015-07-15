<?php
/**
 * @file
 * icc_commerce.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function icc_commerce_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function icc_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function icc_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
