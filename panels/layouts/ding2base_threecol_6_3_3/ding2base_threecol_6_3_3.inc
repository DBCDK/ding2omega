<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2_basetheme_ding2base_threecol_6_3_3_panels_layouts() {
  $items['ding2base_threecol_6_3_3'] = array(
    'title' => t('Three column 6-3-3'),
    'category' => t('ding2base'),
    'icon' => 'ding2base_threecol_6_3_3.png',
    'theme' => 'ding2base_threecol_6_3_3',
    'admin css' => '../ding2base_panels.css',
    'regions' => array(
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
    ),
  );

  return $items;
}
