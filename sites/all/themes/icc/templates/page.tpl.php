<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['branding']: Items for the branding region.
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region.
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see omega_preprocess_page()
 */
?>

<!-- Facebook javascript SDK -->
<?php if (isset($variables['fb_enable'])): ?>
  <div id="fb-root"></div>
  <script>(function(d, s, id) {
    var js, fjs = d.getElementsByTagName(s)[0];
    if (d.getElementById(id)) return;
    js = d.createElement(s); js.id = id;
    js.src = "//connect.facebook.net/en_US/all.js#xfbml=1&appId=315649905226632";
    fjs.parentNode.insertBefore(js, fjs);
  }(document, 'script', 'facebook-jssdk'));</script>
<?php endif; ?>

<div class="l-page">
  <header class="l-header" role="banner">

    <div class="header-cta">
      <a href="https://www.facebook.com/IowaClimbers" title="facebook" class="fb-cta"><i class="fa fa-facebook-square"></i><span>Facebook</span></a>
      <a href="<?php print $base_path ?>join-or-give" title="Join or Give" class="give-cta"><i class="fa fa-heart"></i><span>Join or Give</span></a>
    </div>

    <div class="l-branding">

      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo">
        <i class="icon-icc-logo"></i>
      </a>

      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
      <?php endif; ?>

      <?php if ($site_name || $site_slogan): ?>
        <?php if ($site_name): ?>
          <h1 class="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <h2 class="site-slogan"><?php print $site_slogan; ?></h2>
        <?php endif; ?>
      <?php endif; ?>

      <?php print render($page['branding']); ?>
    </div>

    <?php print render($page['header']); ?>
    <?php print render($page['navigation']); ?>
  </header>

  <?php if ($title): ?>
    <div class="page-title-wrapper">
      <div class="page-title">
        <?php print $breadcrumb; ?>

        <?php print render($title_prefix); ?>
        <h1><?php print $title; ?></h1>
        <div class="title_sffix"><?php print render($title_suffix); ?></div>

        <?php if (isset($variables['fb_enable']) && !empty($variables['fb_path_to_content'])): ?>
          <div class="fb-like" data-href="<?php print $variables['fb_path_to_content']; ?>" data-layout="button" data-action="like" data-show-faces="true" data-share="true"></div>
        <?php endif; ?>

      </div>

      <div class="bg_image-details"
          <!-- Button trigger modal -->
          <button class="btn btn-photo-details" data-toggle="modal" data-target="#myModal">
            <i class="fa fa-camera-retro"></i>
            <span class="element-invisible">Photo Details</span>
          </button>

          <!-- Modal -->
          <div class="modal fade" id="myModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
            <div class="modal-dialog">
              <div class="modal-content">
                <div class="modal-header">
                  <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
                  <h4 class="modal-title" id="myModalLabel">
                    <?php print render($variables['bg_image_info']['title']); ?>
                  </h4>
                </div>
                <div class="modal-body">
                  <?php print $variables['bg_image_info']['image_markup']; ?>
                  <?php if ($variables['bg_image_info']['caption'] || $variables['bg_image_info']['credit']): ?>
                    <?php if ($variables['bg_image_info']['credit']): ?>
                      <p>
                        <small><i class="fa fa-camera fa-inline"></i><strong>Photographer</strong></small><br/>
                        <?php print render($variables['bg_image_info']['credit']); ?>
                      </p>
                    <?php endif; ?>
                    <?php if ($variables['bg_image_info']['caption']): ?>
                      <small><i class="fa fa-picture-o fa-inline"></i><strong>Details</strong></small><br/>
                      <p><?php print render($variables['bg_image_info']['caption']); ?></p>
                    <?php endif; ?>
                  <?php endif; ?>
                </div>
                <div class="modal-footer">
                  <a href="<?php print $base_path; ?>node/add/background-image" class="btn btn-primary">Submit Your Photo</a>
                  <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
                </div>
              </div>
            </div>
          </div>
      </div>

    </div>
  <?php endif; ?>

  <div class="l-main">
    <div class="l-content" role="main">
      <?php print render($page['highlighted']); ?>
      <a id="main-content"></a>

      <div class="l-main-tasks">
        <?php print render($tabs); ?>
        <?php print $messages; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
      </div>

      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php print render($page['sidebar_first']); ?>
    <?php print render($page['sidebar_second']); ?>
  </div>

  <footer class="l-footer" role="contentinfo">
    <?php print render($page['footer']); ?>
    <div class="sponsor-logos">
      <a href="http://www.accessfund.org/" class="af_logo"><img src="<?php print $directory . '/images/af_logo.png'; ?>" alt="Access Fund logo" /></a>
      <a href="http://www.rei.com/" class="af_logo"><img src="<?php print $directory . '/images/rei_logo_wht.png'; ?>" alt="REI" /></a>
    </div>
  </footer>
</div>

