<?php
// $Id$
/**
 * @file ting_object.tpl.php
 *
 * Template to render objects from the Ting database.
 *
 * Available variables:
 * - $object: The TingClientObject instance we're rendering.
 * - $content: Render array of content.
 */
?>

<!-- ting_object.tpl.php -->
<div<?php print $attributes; ?>>
  <div class="ting-overview clearfix">
    <div class="left-column">
      <?php print render($content['left']); ?>
    </div>
    <div class="right-column">
      <?php print render($content['right']); ?>
    </div>
  </div>
  <div class="ting-object-overview">
    <?php echo render($content['overview']); ?>
  </div>
  <div class="ting-object-actions">
    <?php echo render($content['actions']); ?>
  </div>
  <div class="ting-object-details">
    <?php echo render($content['details']); ?>
  </div>
  <div class="ting-object-additional">
    <?php echo render($content); ?>
  </div>
</div>
<!-- end ting_object.tpl.php -->