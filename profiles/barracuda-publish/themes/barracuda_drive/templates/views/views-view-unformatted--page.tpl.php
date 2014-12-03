<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<ul class="page-list">

<?php foreach ($rows as $id => $row): ?>
  <li<?php if ($classes_array[$id]) { print ' class="page ' . $classes_array[$id] .'"';  } ?>>
   <div class="page-row">
    <?php print $row; ?>
    </div>
  </li>
<?php endforeach; ?>

</ul>