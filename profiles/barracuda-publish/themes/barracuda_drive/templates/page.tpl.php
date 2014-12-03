<?php

/**
 * @file
 * Regions:
 * - $page['header']: Items for the header region.
 * - $page['featured']: Items for the featured region.
 * - $page['banner']: Items for the banner content region.
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['triptych_first']: Items for the first triptych.
 * - $page['triptych_middle']: Items for the middle triptych.
 * - $page['triptych_last']: Items for the last triptych.
 * - $page['footer_column_first']: Items for the first footer column.
 * - $page['footer_column_second']: Items for the second footer column.
 * - $page['footer_column_third']: Items for the third footer column.
 * - $page['footer_column_fourth']: Items for the fourth footer column.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see bartik_process_page()
 * @see html.tpl.php
 */
?>
<div id="page-wrapper">
 <div id="page">

  <div id="header" class="<?php print $secondary_menu ? 'with-secondary-menu': 'without-secondary-menu'; ?>"><div class="section clearfix">

    <div id="header-menu">
    <?php if ($page['header_left_menu']): ?>
      <div id="header-left-menu" class="topmenu clearfix">
        <?php print render($page['header_left_menu']); ?>
      </div> <!-- /#header-left-menu -->
    <?php endif; ?>
	
    <?php if ($page['header_right_menu']): ?>
    <div id="header-right-menu" class="topmenu clearfix">
        <?php print render($page['header_right_menu']); ?>
    </div> <!-- /#header-right-menu -->
    <?php endif; ?>
    </div>

  <div id="header-blocks">
  <div id="site-logoname">
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div id="name-and-slogan"<?php if ($hide_site_name && $hide_site_slogan) { print ' class="element-invisible"'; } ?>>

        <?php if ($site_name): ?>
          <?php if ($title): ?>
            <div id="site-name"<?php if ($hide_site_name) { print ' class="element-invisible"'; } ?>>
              <strong>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </strong>
            </div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="site-name"<?php if ($hide_site_name) { print ' class="element-invisible"'; } ?>>
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div id="site-slogan"<?php if ($hide_site_slogan) { print ' class="element-invisible"'; } ?>>
            <?php print $site_slogan; ?>
          </div>
        <?php endif; ?>

      </div> <!-- /#name-and-slogan -->
    <?php endif; ?>
	</div>

  <?php if ($page['header']): ?>
    <div id="header-block"><div class="section clearfix">
      <?php print render($page['header']); ?>
    </div></div> <!-- /.section, /#featured -->
  <?php endif; ?>
  
  <?php if ($page['header_right']): ?>
    <div id="header-right"><div class="section clearfix">
      <?php print render($page['header_right']); ?>
    </div></div> <!-- /.section, /#featured -->
  <?php endif; ?>
  </div><!-- /#header-blocks -->
<div  id="sticky-menu" style="height: auto;">
  <div id="main-menu" style="top: 0.311011px;" class="">
   <div class="container">
      <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </a>
      <a class="brand" href="<?php print $front_page; ?>"><?php print t('Menu'); ?></a>
	<?php if ($main_menu || $page['primary_menu']): ?>
  <div class="nav-collapse subnav-collapse">
  <div id="primary">
    <div id="primary-inner" class="clearfix">
  <?php if ($main_menu && !$page['primary_menu']): ?>
	  <?php print $primary_nav; ?>
	  <?php else: ?>
    <?php print render($page['primary_menu']); ?>
	 <?php endif; ?>
	    </div>
	  </div>
  <?php endif; ?>
  
		<?php if ($secondary_menu || $page['primary_menu_right']): ?>
    <div id="primary-right">
      <div id="primary-right-inner" class="clearfix">
      
      <?php if ($secondary_menu && !$page['primary_menu_right']): ?>
      <ul id="user-menu-links" class="links inline clearfix">
        <li class="user-icon">
         <a href="#" class="dropdown-toggle ulink" data-toggle="dropdown">
          <span class="user-name"><?php if ($user->uid) print $user->name; ?></span>
          <span class="caret"></span>
          <span class="user-caret"><?php if (isset($avatar)) print $avatar; ?></span>
         </a>
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'id' => 'menu-links',
            'class' => array('menu', 'clearfix', 'dropdown-menu'),
          ),
        )); ?>
        </li>
      </ul>
      <?php else: ?>
        <?php print render($page['primary_menu_right']); ?>
      <?php endif; ?>
      
	    </div>
	  </div>
   </div>
    <?php endif; ?>
   </div> <!-- /#navbar conteiner -->
  </div> <!-- /#main-menu -->
</div>

  </div></div> <!-- /.section, /#header -->

<div id="main-wrapper" class="clearfix"><div id="main" class="clearfix">

  <?php if ($page['featured']): ?>
    <div id="featured"><div class="section clearfix">
      <?php print render($page['featured']); ?>
    </div></div> <!-- /.section, /#featured -->
  <?php endif; ?>

    <?php if ($breadcrumb): ?>
      <div id="breadcrumb"><?php print $breadcrumb; ?></div>
    <?php endif; ?>

    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="column sidebar"><div class="section">
        <?php print render($page['sidebar_first']); ?>
      </div></div> <!-- /.section, /#sidebar-first -->
    <?php endif; ?>

    <div id="content" class="column">
    
      <?php if ($page['banner']): ?>
        <div id="banner">
          <?php print render($page['banner']); ?>
        </div>
      <?php endif; ?>
    
      <div class="section-content">
        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="title" id="page-title">
            <?php print $title; ?>
          </h1>
        <?php endif; ?>
  <?php if ($messages): ?>
    <div id="messages"><div class="section clearfix">
      <?php print $messages; ?>
    </div></div> <!-- /.section, /#messages -->
  <?php endif; ?>

      <?php print render($title_suffix); ?>
      <?php if ($tabs): ?>
        <div class="tabs">
          <?php print render($tabs); ?>
        </div>
      <?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
	  
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
	  
	  </div>
    
    <?php if ($page['sidebar_second']): ?>
      <div id="sidebar-second" class="column sidebar"><div class="section">
        <?php print render($page['sidebar_second']); ?>
      </div></div> <!-- /.section, /#sidebar-second -->
    <?php endif; ?>

    </div> <!-- /.section, /#content -->

  </div> <!-- /#main -->
  
    <?php if ($page['page_bottom_left'] || $page['page_bottom_center'] || $page['page_bottom_right']): ?>
     
    <div id="page-bottom-wrapper"><div class="section">
  
     <div id="page_bottom" class="page_bottom-<?php print (bool) $page['page_bottom_left'] + (bool) $page['page_bottom_center'] + (bool) $page['page_bottom_right']; ?> clearfix">
      <?php if ($page['page_bottom_left']): ?>
        <div id="page_bottom_left" class="page_bottom">
          <?php print render($page['page_bottom_left']); ?>
        </div> <!-- /#page_bottom_left -->
      <?php endif; ?>
      <?php if ($page['page_bottom_center']): ?>
        <div id="page_bottom_center" class="page_bottom">
          <?php print render($page['page_bottom_center']); ?>
        </div> <!-- /#page_bottom_center -->
      <?php endif; ?>
      <?php if ($page['page_bottom_right']): ?>
        <div id="page_bottom_right" class="page_bottom">
          <?php print render($page['page_bottom_right']); ?>
        </div> <!-- /#page_bottom_right -->
      <?php endif; ?>
     </div> <!-- /#page_bottom -->
     
    </div></div> <!-- /#page-bottom-wrapper -->
     
  <?php endif; ?>

  <?php if ($page['triptych_first'] || $page['triptych_two'] || $page['triptych_three'] || $page['triptych_four']): ?>
	
      <div id="triptych-wrapper"><div id="triptych" class="triptych-<?php print (bool) $page['triptych_first'] + (bool) $page['triptych_two'] + (bool) $page['triptych_three'] + (bool) $page['triptych_four']; ?> clearfix">
        <?php if ($page['triptych_first']): ?>
          <div id="triptych-one" class="column">
            <?php print render($page['triptych_first']); ?>
          </div><!-- /triptych-one -->
        <?php endif; ?>
        <?php if ($page['triptych_two']): ?>
          <div id="triptych-two" class="column">
            <?php print render($page['triptych_two']); ?>
          </div><!-- /triptych-two -->
        <?php endif; ?>
        <?php if ($page['triptych_three']): ?>
          <div id="triptych-three" class="column">
            <?php print render($page['triptych_three']); ?>
          </div><!-- /triptych-three -->
        <?php endif; ?>
        <?php if ($page['triptych_four']): ?>
          <div id="triptych-four" class="column">
            <?php print render($page['triptych_four']); ?>
          </div><!-- /triptych-four -->
        <?php endif; ?>
      </div></div> <!-- /#triptych, /#triptych-wrapper -->

	<?php endif; ?>

  <div id="footer-wrapper"><div class="section">

    <?php if ($page['footer_column_first'] || $page['footer_column_second'] || $page['footer_column_third'] || $page['footer_column_fourth']): ?>
	  
      <div id="footer-columns" class="footer-<?php print (bool) $page['footer_column_first'] + (bool) $page['footer_column_second'] + (bool) $page['footer_column_third'] + (bool) $page['footer_column_fourth']; ?> clearfix">
        <?php if ($page['footer_column_first']): ?>
          <div id="footer-one" class="column">
            <?php print render($page['footer_column_first']); ?>
          </div><!-- /footer-one -->
        <?php endif; ?>
        <?php if ($page['footer_column_second']): ?>
          <div id="footer-two" class="column">
            <?php print render($page['footer_column_second']); ?>
          </div><!-- /footer-two -->
        <?php endif; ?>
        <?php if ($page['footer_column_third']): ?>
          <div id="footer-three" class="column">
            <?php print render($page['footer_column_third']); ?>
          </div><!-- /footer-three -->
        <?php endif; ?>
        <?php if ($page['footer_column_fourth']): ?>
          <div id="footer-four" class="column">
            <?php print render($page['footer_column_fourth']); ?>
          </div><!-- /footer-four -->
        <?php endif; ?>
      </div> <!-- /#footer-columns -->

    <?php endif; ?>

    <?php if ($page['footer_left'] || $page['footer_center'] || $page['footer_right']): ?>
     
     <div id="footer" class="footer-<?php print (bool) $page['footer_left'] + (bool) $page['footer_center'] + (bool) $page['footer_right']; ?> clearfix">
      <?php if ($page['footer_left']): ?>
        <div id="footer_left" class="footer">
          <?php print render($page['footer_left']); ?>
        </div> <!-- /#footer_left -->
      <?php endif; ?>
      <?php if ($page['footer_center']): ?>
        <div id="footer_center" class="footer">
          <?php print render($page['footer_center']); ?>
        </div> <!-- /#footer_center -->
      <?php endif; ?>
      <?php if ($page['footer_right']): ?>
        <div id="footer_right" class="footer">
          <?php print render($page['footer_right']); ?>
        </div> <!-- /#footer_right -->
      <?php endif; ?>
     </div> <!-- /#footer -->
     
    <?php endif; ?>


  </div></div> <!-- /.section, /#footer-wrapper -->
  <div id="copyright">
    <span class="company-copyright"><?php print t('© Copyright ') . date('Y') . ' <a href="/">Barracuda Publish</a>. ' . t('All rights reserved.'); ?></span>
    <span class="designer-copyright"><?php print t('Design by '); ?><a href="http://eneus.info" target="_blank">Eneus</a></span>
  </div>
</div><!-- /#main-wrapper -->

</div></div> <!-- /#page, /#page-wrapper -->
