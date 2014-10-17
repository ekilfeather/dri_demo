<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php
//dsm(get_defined_vars());
//dsm($view->result);
?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row):
?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>

  </div>
  <div class="views-news-read-more">
    <!-- <a href="/node/<?php print $view->result[$id]->nid; ?>">Read more</a> -->
    <?php
      $alias_to_node =  'node/' . $view->result[$id]->nid;
      print l('Read More',$alias_to_node);
    ?>
  </div>

<?php endforeach; ?>



