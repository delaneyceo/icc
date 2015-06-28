<?php
/**
 * @file
 * icc_panelizer.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function icc_panelizer_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:climbing_area:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'climbing_area';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'zero';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ed9a324b-bda0-4a92-a92b-f779c54a615d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2868457b-0765-4329-9a78-bc66b392c239';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2868457b-0765-4329-9a78-bc66b392c239';
    $display->content['new-2868457b-0765-4329-9a78-bc66b392c239'] = $pane;
    $display->panels['first'][0] = 'new-2868457b-0765-4329-9a78-bc66b392c239';
    $pane = new stdClass();
    $pane->pid = 'new-b6396530-be95-4e10-b249-db994d4458dd';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mountain_project_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b6396530-be95-4e10-b249-db994d4458dd';
    $display->content['new-b6396530-be95-4e10-b249-db994d4458dd'] = $pane;
    $display->panels['first'][1] = 'new-b6396530-be95-4e10-b249-db994d4458dd';
    $pane = new stdClass();
    $pane->pid = 'new-cc233f04-b212-40e1-838f-b4e50d219b7e';
    $pane->panel = 'first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cc233f04-b212-40e1-838f-b4e50d219b7e';
    $display->content['new-cc233f04-b212-40e1-838f-b4e50d219b7e'] = $pane;
    $display->panels['first'][2] = 'new-cc233f04-b212-40e1-838f-b4e50d219b7e';
    $pane = new stdClass();
    $pane->pid = 'new-28325fbb-9c52-41b6-bb96-aa5e1d38ca16';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '28325fbb-9c52-41b6-bb96-aa5e1d38ca16';
    $display->content['new-28325fbb-9c52-41b6-bb96-aa5e1d38ca16'] = $pane;
    $display->panels['first'][3] = 'new-28325fbb-9c52-41b6-bb96-aa5e1d38ca16';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2868457b-0765-4329-9a78-bc66b392c239';
  $panelizer->display = $display;
  $export['node:climbing_area:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'zero';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ba05a923-137b-4a6b-b285-f057bafcbff4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d5d5cee-b9a3-43fc-9801-7464e176aa3f';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d5d5cee-b9a3-43fc-9801-7464e176aa3f';
    $display->content['new-1d5d5cee-b9a3-43fc-9801-7464e176aa3f'] = $pane;
    $display->panels['first'][0] = 'new-1d5d5cee-b9a3-43fc-9801-7464e176aa3f';
    $pane = new stdClass();
    $pane->pid = 'new-a62c725e-4862-43c3-834f-e4d6579944d5';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a62c725e-4862-43c3-834f-e4d6579944d5';
    $display->content['new-a62c725e-4862-43c3-834f-e4d6579944d5'] = $pane;
    $display->panels['first'][1] = 'new-a62c725e-4862-43c3-834f-e4d6579944d5';
    $pane = new stdClass();
    $pane->pid = 'new-24e6fde5-dcc1-4b92-8549-bb446f518c23';
    $pane->panel = 'first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '24e6fde5-dcc1-4b92-8549-bb446f518c23';
    $display->content['new-24e6fde5-dcc1-4b92-8549-bb446f518c23'] = $pane;
    $display->panels['first'][2] = 'new-24e6fde5-dcc1-4b92-8549-bb446f518c23';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1d5d5cee-b9a3-43fc-9801-7464e176aa3f';
  $panelizer->display = $display;
  $export['node:event:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'zero';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '928ba1a7-525f-492c-bfa0-6e2928777647';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8e9bdda8-232f-41a6-aae6-5824901db5de';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e9bdda8-232f-41a6-aae6-5824901db5de';
    $display->content['new-8e9bdda8-232f-41a6-aae6-5824901db5de'] = $pane;
    $display->panels['first'][0] = 'new-8e9bdda8-232f-41a6-aae6-5824901db5de';
    $pane = new stdClass();
    $pane->pid = 'new-0d63892c-6524-410c-a4c7-72685b868fb7';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0d63892c-6524-410c-a4c7-72685b868fb7';
    $display->content['new-0d63892c-6524-410c-a4c7-72685b868fb7'] = $pane;
    $display->panels['first'][1] = 'new-0d63892c-6524-410c-a4c7-72685b868fb7';
    $pane = new stdClass();
    $pane->pid = 'new-b87a39fc-d738-47c1-b64b-324110570345';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b87a39fc-d738-47c1-b64b-324110570345';
    $display->content['new-b87a39fc-d738-47c1-b64b-324110570345'] = $pane;
    $display->panels['first'][2] = 'new-b87a39fc-d738-47c1-b64b-324110570345';
    $pane = new stdClass();
    $pane->pid = 'new-a5e963c4-458b-43c1-945c-7ca1fd2d7ae0';
    $pane->panel = 'first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a5e963c4-458b-43c1-945c-7ca1fd2d7ae0';
    $display->content['new-a5e963c4-458b-43c1-945c-7ca1fd2d7ae0'] = $pane;
    $display->panels['first'][3] = 'new-a5e963c4-458b-43c1-945c-7ca1fd2d7ae0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8e9bdda8-232f-41a6-aae6-5824901db5de';
  $panelizer->display = $display;
  $export['node:news:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'zero';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd5eae70b-8543-451e-8418-3f6af262bb91';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0334d463-64e1-4750-86cc-4358f5cf6a10';
    $pane->panel = 'first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0334d463-64e1-4750-86cc-4358f5cf6a10';
    $display->content['new-0334d463-64e1-4750-86cc-4358f5cf6a10'] = $pane;
    $display->panels['first'][0] = 'new-0334d463-64e1-4750-86cc-4358f5cf6a10';
    $pane = new stdClass();
    $pane->pid = 'new-594d18a9-1587-491f-8e7b-b38b9080f4a5';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '594d18a9-1587-491f-8e7b-b38b9080f4a5';
    $display->content['new-594d18a9-1587-491f-8e7b-b38b9080f4a5'] = $pane;
    $display->panels['first'][1] = 'new-594d18a9-1587-491f-8e7b-b38b9080f4a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'zero';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'eb8e7b92-1019-4342-a6ab-89eb7c8f6a13';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4e61d115-be3a-42d8-affc-2150a013206a';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4e61d115-be3a-42d8-affc-2150a013206a';
    $display->content['new-4e61d115-be3a-42d8-affc-2150a013206a'] = $pane;
    $display->panels['first'][0] = 'new-4e61d115-be3a-42d8-affc-2150a013206a';
    $pane = new stdClass();
    $pane->pid = 'new-6ef26563-f357-4ed7-be96-aa45a98bd565';
    $pane->panel = 'first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6ef26563-f357-4ed7-be96-aa45a98bd565';
    $display->content['new-6ef26563-f357-4ed7-be96-aa45a98bd565'] = $pane;
    $display->panels['first'][1] = 'new-6ef26563-f357-4ed7-be96-aa45a98bd565';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4e61d115-be3a-42d8-affc-2150a013206a';
  $panelizer->display = $display;
  $export['node:page:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:webform:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'webform';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'zero';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd7eb4d27-f7b2-4b0d-9412-39d6a288a25d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-68457674-fe8b-4441-b587-4e8cb41cb084';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '68457674-fe8b-4441-b587-4e8cb41cb084';
    $display->content['new-68457674-fe8b-4441-b587-4e8cb41cb084'] = $pane;
    $display->panels['first'][0] = 'new-68457674-fe8b-4441-b587-4e8cb41cb084';
    $pane = new stdClass();
    $pane->pid = 'new-4e981807-88f3-4214-9780-c10b37cbd7b6';
    $pane->panel = 'first';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4e981807-88f3-4214-9780-c10b37cbd7b6';
    $display->content['new-4e981807-88f3-4214-9780-c10b37cbd7b6'] = $pane;
    $display->panels['first'][1] = 'new-4e981807-88f3-4214-9780-c10b37cbd7b6';
    $pane = new stdClass();
    $pane->pid = 'new-79911b8e-375b-42fe-bb5b-8257520df952';
    $pane->panel = 'first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '79911b8e-375b-42fe-bb5b-8257520df952';
    $display->content['new-79911b8e-375b-42fe-bb5b-8257520df952'] = $pane;
    $display->panels['first'][2] = 'new-79911b8e-375b-42fe-bb5b-8257520df952';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-68457674-fe8b-4441-b587-4e8cb41cb084';
  $panelizer->display = $display;
  $export['node:webform:default:default'] = $panelizer;

  return $export;
}
