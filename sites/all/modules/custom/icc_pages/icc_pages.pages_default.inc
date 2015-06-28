<?php
/**
 * @file
 * icc_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function icc_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Upcoming Events';
  $display->uuid = '3cf875e0-df14-48f5-8d6b-1b25ae51133e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd209fe1-d731-4169-8ce3-717ab92dc2cf';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-events_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd209fe1-d731-4169-8ce3-717ab92dc2cf';
    $display->content['new-bd209fe1-d731-4169-8ce3-717ab92dc2cf'] = $pane;
    $display->panels['first'][0] = 'new-bd209fe1-d731-4169-8ce3-717ab92dc2cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Become an ally CTA node',
        'keyword' => 'nid_3',
        'name' => 'entity:node',
        'entity_id' => '3',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'hero';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f23d3b6-910a-4a1a-8ddc-fd462bff36bf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-575df042-df1b-4738-97b8-ac44cfa7b7fd';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'md_slider-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '575df042-df1b-4738-97b8-ac44cfa7b7fd';
    $display->content['new-575df042-df1b-4738-97b8-ac44cfa7b7fd'] = $pane;
    $display->panels['first'][0] = 'new-575df042-df1b-4738-97b8-ac44cfa7b7fd';
    $pane = new stdClass();
    $pane->pid = 'new-08ed687a-6751-4a54-9485-bbe49ec15c20';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'call_to_action_links-cta_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '08ed687a-6751-4a54-9485-bbe49ec15c20';
    $display->content['new-08ed687a-6751-4a54-9485-bbe49ec15c20'] = $pane;
    $display->panels['second'][0] = 'new-08ed687a-6751-4a54-9485-bbe49ec15c20';
    $pane = new stdClass();
    $pane->pid = 'new-0173f812-4b76-409f-9a13-37a05e25370c';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-news_front';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0173f812-4b76-409f-9a13-37a05e25370c';
    $display->content['new-0173f812-4b76-409f-9a13-37a05e25370c'] = $pane;
    $display->panels['second'][1] = 'new-0173f812-4b76-409f-9a13-37a05e25370c';
    $pane = new stdClass();
    $pane->pid = 'new-9f327dbf-dc5c-42bb-81d0-8a9369716e4f';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-events_front';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9f327dbf-dc5c-42bb-81d0-8a9369716e4f';
    $display->content['new-9f327dbf-dc5c-42bb-81d0-8a9369716e4f'] = $pane;
    $display->panels['second'][2] = 'new-9f327dbf-dc5c-42bb-81d0-8a9369716e4f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'iowa_climbing';
  $page->task = 'page';
  $page->admin_title = 'Iowa Climbing';
  $page->admin_description = '';
  $page->path = 'iowa-climbing';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Iowa Climbing',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_iowa_climbing_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'iowa_climbing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Iowa Climbing';
  $display->uuid = 'b529943f-4b01-4a76-81d9-da2bba935eb1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c4a1e5c4-ad64-40a2-8f66-15dd3d10799c';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'crags-crags_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4a1e5c4-ad64-40a2-8f66-15dd3d10799c';
    $display->content['new-c4a1e5c4-ad64-40a2-8f66-15dd3d10799c'] = $pane;
    $display->panels['first'][0] = 'new-c4a1e5c4-ad64-40a2-8f66-15dd3d10799c';
    $pane = new stdClass();
    $pane->pid = 'new-6beabd0d-d892-4dd9-8623-5f3b5589e342';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'crags-crags_map';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6beabd0d-d892-4dd9-8623-5f3b5589e342';
    $display->content['new-6beabd0d-d892-4dd9-8623-5f3b5589e342'] = $pane;
    $display->panels['first'][1] = 'new-6beabd0d-d892-4dd9-8623-5f3b5589e342';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['iowa_climbing'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = 'Administrative panel for news items';
  $page->path = 'news';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Recent News';
  $display->uuid = 'ce0e216d-8042-4ea5-841d-53370ebe71f0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9605bf4c-2de1-49a9-9165-bcbaf1ba9433';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-news_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9605bf4c-2de1-49a9-9165-bcbaf1ba9433';
    $display->content['new-9605bf4c-2de1-49a9-9165-bcbaf1ba9433'] = $pane;
    $display->panels['first'][0] = 'new-9605bf4c-2de1-49a9-9165-bcbaf1ba9433';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
