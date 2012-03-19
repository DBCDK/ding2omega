<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2_basetheme_ding2base_threecol_3_6_3_stacked_panels_layouts() {
  $items['ding2base_threecol_3_6_3_stacked'] = array(
    'title' => t('Three column 3-6-3 stacked'),
    'category' => t('ding2base'),
    'icon' => 'ding2base_threecol_3_6_3_stacked.png',
    'theme' => 'ding2base_threecol_3_6_3_stacked',
    'admin css' => '../ding2base_panels.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
