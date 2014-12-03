<?php

/**
 * @file
 * Default theme implementation for displaying a single search result.
 */
?>
<li class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="result-item clearfix">
  <?php
  print l(theme('image_style', array('style_name' => 'teaser_related', 'path' => $result['node']->sm_field_image[0], check_plain($result['node']->title)), $attributes = NULL, $getsize = TRUE, $absolute = TRUE), 'node/'.$result['node']->entity_id, array('html'=>true));
  ?>
  </div>
  <div class="search-body">
  <?php
    print check_markup($result['node']->sm_body) . l(t('read more &rarr;'), $result['link'], array('html' => true));
  ?>
  </div>
  
  <?php print render($title_prefix); ?>
  <h3 class="title"<?php print $title_attributes; ?>>
    <a href="<?php print $url; ?>"><?php print $title; ?></a>
  </h3>
  <?php print render($title_suffix); ?>
  
  <div class="search-snippet-info">
    <?php if ($snippet): ?>
      <p class="search-snippet"<?php print $content_attributes; ?>><?php print $snippet; ?></p>
    <?php endif; ?>
    <?php if ($info): ?>
      <p class="search-info"><?php print $info; ?></p>
    <?php endif; ?>
  </div>
</li>
