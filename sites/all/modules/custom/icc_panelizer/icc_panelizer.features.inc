<?php
/**
 * @file
 * icc_panelizer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function icc_panelizer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}
