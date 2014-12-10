<?php

// Put the logo path into JavaScript for the live preview.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'corpnews'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Header top'),
    'bottom' => t('Header bottom'),
    'bg' => t('Main background'),
    'border' => t('Main menu border'),
    'mainmenucolor' => t('Main menu color'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'footertextcolor' => t('Footer text color'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Blue Lagoon (default)'),
      'colors' => array(
        'top' => '#48a9e4',
        'bottom' => '#0779bf',
        'bg' => '#ffffff',
        'border' => '#4540b0',
        'mainmenucolor' => '#ffffff',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'footertextcolor' => '#c0c0c0',
        'titleslogan' => '#282728',
        'text' => '#3b3b3b',
        'link' => '#0071B3',
      ),
    ),
    'firehouse' => array(
      'title' => t('Firehouse'),
      'colors' => array(
        'top' => '#cd2d2d',
        'bottom' => '#961717',
        'bg' => '#ffffff',
        'border' => '#6b0000',
        'mainmenucolor' => '#fdfdfd',
        'sidebar' => '#f1f4f0',
        'sidebarborders' => '#ededed',
        'footer' => '#1f1d1c',
        'footertextcolor' => '#c0c0c0',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#d6121f',
      ),
    ),
    'ice' => array(
      'title' => t('Ice'),
      'colors' => array(
        'top' => '#ffffff',
        'bottom' => '#f2f2f2',
        'bg' => '#ffffff',
        'border' => '#d4d4d4',
        'mainmenucolor' => '#777777',
        'sidebar' => '#ffffff',
        'sidebarborders' => '#cccccc',
        'footer' => '#24272c',
        'footertextcolor' => '#c0c0c0',
        'titleslogan' => '#000000',
        'text' => '#4a4a4a',
        'link' => '#019dbf',
      ),
    ),
    'plum' => array(
      'title' => t('Plum'),
      'colors' => array(
        'top' => '#682678',
        'bottom' => '#593662',
        'bg' => '#fffdf7',
        'border' => '#302b3b',
        'mainmenucolor' => '#fdfdfd',
        'sidebar' => '#edede7',
        'sidebarborders' => '#e7e7e7',
        'footer' => '#2c2c28',
        'footertextcolor' => '#c0c0c0',
        'titleslogan' => '#ffffff',
        'text' => '#301313',
        'link' => '#9d408d',
      ),
    ),
    'black' => array(
      'title' => t('Black'),
      'colors' => array(
        'top' => '#363636',
        'bottom' => '#111111',
        'bg' => '#ffffff',
        'border' => '#252525',
        'mainmenucolor' => '#fdfdfd',
        'sidebar' => '#ffffff',
        'sidebarborders' => '#d0d0d0',
        'footer' => '#161617',
        'footertextcolor' => '#c0c0c0',
        'titleslogan' => '#ffffff',
        'text' => '#3b3b3b',
        'link' => '#0073b6',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),
 'bacground' => array(
    '#type' => 'radios',
    '#title' => t('Color'),
    '#default_value' => theme_get_setting('style'),
    '#options' => array(
      'stone'    => t('Stone Soft'),
      'pink'     => t('Fresh Pink'),
      'blue'     => t('Sky Blue'),
	  'chocolate'=> t('Chocolate Milk'),
    ),
  ),
  
  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
