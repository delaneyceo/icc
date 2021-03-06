<?php

/**
 * Implements hook_preprocess_page().
 */
function icc_preprocess_page(&$variables) {
  global $base_url;
  $path =  drupal_get_path_alias();
  $full_path = $base_url . '/' . $path;
  $is_node = isset($variables['node']) ? true : false;
  $node_type = $is_node ? $variables['node']->type : false;
  $fb_enable = FALSE;

  switch($node_type) {
    case 'news':
      $fb_enable = TRUE;
      break;
    case 'event':
      $fb_enable = TRUE;
      break;

  }
  if ($fb_enable) {
    $variables['fb_enable'] = $fb_enable;
    $variables['fb_path_to_content'] = $full_path;
  }

  // Page Title Caption Conditions
  if (isset($variables['node']->field_page_title_caption) && !empty($variables['node']->field_page_title_caption)) {
    $node_page_caption = $variables['node']->field_page_title_caption[LANGUAGE_NONE][0]['safe_value'];
    $variables['title_suffix'] = $node_page_caption;
  }
  else {
    switch($path) {
      case 'iowa-climbing':
        $variables['title_suffix'] = 'Explore the best Iowa has to offer for the climber in everyone';
        break;
      case 'news':
        $variables['title_suffix'] = 'Stay up to date with the latest Iowa Climbers news';
        break;
      case 'events':
        $variables['title_suffix'] = 'Don&#39;t miss our next event';
        break;
    }
  }

  $bg_image_nid = variable_get('bg_image_nid');
  $bg_image_node = node_load($bg_image_nid);

  $bg_image = array(
    'style_name' => '600_wide',
    'path' => $bg_image_node->field_image[LANGUAGE_NONE][0]['uri'],
    'alt' => $bg_image_node->field_image[LANGUAGE_NONE][0]['alt'],
    'title' => $bg_image_node->field_image[LANGUAGE_NONE][0]['title'],
    );
  $bg_image_image = theme('image_style',$bg_image);
  $bg_image_credit = !empty($bg_image_node->field_photo_credit) ? $bg_image_node->field_photo_credit[LANGUAGE_NONE][0]['safe_value'] : '';
  $bg_image_caption = !empty($bg_image_node->field_image_caption) ? $bg_image_node->field_image_caption[LANGUAGE_NONE][0]['safe_value'] : '';

  $bg_image_info = array(
    'title' => $bg_image_node->title,
    'credit' => $bg_image_credit,
    'caption' => $bg_image_caption,
    'image_markup' => $bg_image_image
  );
  $variables['bg_image_info'] = $bg_image_info;
}
