<?php

/**
 * Add body classes if certain regions have content.
 */
function barracuda_drive_preprocess_html(&$variables) {
  if (!empty($variables['page']['featured'])) {
    $variables['classes_array'][] = 'featured';
  }

  if (!empty($variables['page']['triptych_first'])
    || !empty($variables['page']['triptych_two'])
    || !empty($variables['page']['triptych_three'])
    || !empty($variables['page']['triptych_four'])) {
    $variables['classes_array'][] = 'triptych';
  }

  if (!empty($variables['page']['footer_column_first'])
    || !empty($variables['page']['footer_column_second'])
    || !empty($variables['page']['footer_column_third'])
    || !empty($variables['page']['footer_column_fourth'])) {
    $variables['classes_array'][] = 'footer-columns';
  }
  
  if (!empty($variables['page']['sidebar_first'])) {
    $variables['classes_array'][] = 'sidebar-first';
  }

  // Add conditional stylesheets for IE
  drupal_add_css(path_to_theme() . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));

  $meta = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'viewport',
        'content' => 'width=device-width, initial-scale=1, maximum-scale=1, minimum-scale=1, user-scalable=no',
      ),
    );

  drupal_add_html_head($meta, 'corpnews-viewport');

  // Add external libraries.
  drupal_add_library('corpnews', 'bootstrap');
}

/**
 * Implements hook_library().
 */
function barracuda_drive_library() {
  $libraries['bootstrap'] = array(
    'title' => 'Bootstrap',
    'version' => '',
    'js' => array(
      libraries_get_path('bootstrap') . '/js/bootstrap-tooltip.js' => array(),
    ),
  );
  return $libraries;
}

/**
 * Override or insert variables into the page template for HTML output.
 */
function barracuda_drive_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}

/**
 * Override or insert variables into the page template.
 */
function barracuda_drive_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
  if (!empty($variables['title_suffix']['add_or_remove_shortcut']) && $variables['title']) {
    // Add a wrapper div using the title_prefix and title_suffix render elements.
    $variables['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );
    $variables['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );
    // Make sure the shortcut link is the first item in title_suffix.
    $variables['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }
  
  if (isset($variables['main_menu'])) {
    $variables['primary_nav'] = theme('links__system_main_menu', array(
      'links' => $variables['main_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'main-menu'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $variables['primary_nav'] = FALSE;
  }
  if (isset($variables['secondary_menu'])) {
    $variables['secondary_nav'] = theme('links__system_secondary_menu', array(
      'links' => $variables['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'secondary-menu'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $variables['secondary_nav'] = FALSE;
  }
}

/**
 * Implements hook_preprocess_page().
 */
function barracuda_drive_preprocess_page(&$variables) {
  
  global $user;
  // Get the entire main menu tree
  $main_menu_tree = menu_tree_all_data('main-menu');

  // Add the rendered output to the $main_menu_expanded variable
  $variables['main_menu_expanded'] = menu_tree_output($main_menu_tree);
  
  // Get the entire main menu tree
  $secondary_menu_tree = menu_tree_all_data('secondary-menu');

  // Add the rendered output to the $main_menu_expanded variable
  $variables['secondary_menu_expanded'] = menu_tree_output($secondary_menu_tree);
  if ($user){
    $user_item = user_load( $user->uid );
    if ($user_item->picture){
      $variables['avatar'] = theme('image_style', array('style_name' => 'thumbnail', 'path' => $user_item->picture->uri, 'title' => $user_item->name));
    }
  }
}

/**
 * Implements hook_breadcrumb().
 */
function barracuda_drive_breadcrumb($variables) {
  $sep = ' / ';
  $variables['breadcrumb'][] = drupal_get_title();

  foreach ($variables['breadcrumb'] as $key => $breadcrumb) {
      $pos = strpos($breadcrumb, '[all items]');
      if ($pos !== false) {
        unset($variables['breadcrumb'][$key]);
      }
  }
  if (count($variables['breadcrumb']) > 0) {
    return implode($sep, $variables['breadcrumb']);
    return theme_breadcrumb($variables);
  }
}
/**
 * Implements hook_preprocess_maintenance_page().
 */
function barracuda_drive_preprocess_maintenance_page(&$variables) {
  // By default, site_name is set to Drupal if no db connection is available
  // or during site installation. Setting site_name to an empty string makes
  // the site and update pages look cleaner.
  // @see template_preprocess_maintenance_page
  if (!$variables['db_is_active']) {
    $variables['site_name'] = '';
  }
  drupal_add_css(drupal_get_path('theme', 'corpnews') . '/css/maintenance-page.css');
}

/**
 * Override or insert variables into the maintenance page template.
 */
function barracuda_drive_process_maintenance_page(&$variables) {
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
}

/**
 * Override or insert variables into the node template.
 */
function barracuda_drive_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
}

/**
 * Override or insert variables into the block template.
 */
function barracuda_drive_preprocess_block(&$variables) {
  // In the header region visually hide block titles.
  if ($variables['block']->region == 'header') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Implements theme_menu_tree().
 */
function barracuda_drive_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_field__field_type().
 */
function barracuda_drive_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '"' . $variables['attributes'] .'>' . $output . '</div>';

  return $output;
}
/**
 * Implements MYTHEME_process_field().
 */

function barracuda_drive_process_field(&$vars) {
  $element = $vars['element'];

  // Reduce number of images in teaser view mode to single image
  if ($element['#view_mode'] == 'node_teaser' && $element['#field_type'] == 'image') {
    $vars['items'] = array($vars['items'][0]);
  }
}

/**
 * Themes an empty shopping cart block's contents.
 */
function barracuda_drive_commerce_cart_empty_block() {
  return '<div class="cart-contents">
  <button class="dropdown-toggle cart-btn" data-toggle="dropdown">
    <i class="icon-cart"></i>
    <span>' . t('Shopping cart') . '</span>
  </button>
  <div class="cart-empty-block">
    <span class="message">' . t('Your shopping cart is empty.') . '</span>
   <div class="line-item-quantity">
     <span class="line-item-quantity-raw">0</span>
   </div>
  </div>
</div>';
}