<div<?php print $attributes; ?>>
  <header class="l-header" role="banner"><div class="l-container">
    <div class="l-branding">
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
  </div></header>

  <div class="l-navigation"><div class="l-container">
    <?php print render($page['navigation']); ?>
  </div></div>

  <a id="main-content"></a>

  <?php if ($title || $breadcrumb): ?>
    <div class="l-main-header"><div class="l-container">
      <?php print $breadcrumb; ?>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
    </div></div>
  <?php endif; ?>

  <div class="l-main"><div class="l-container">
    <div class="l-content" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php print render($page['sidebar_first']); ?>
    <?php print render($page['sidebar_second']); ?>
  </div></div>

  <footer class="l-footer" role="contentinfo"><div class="l-container">
    <?php print render($page['footer']); ?>
  </div></footer>
</div>
