<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2_basetheme_ding2base_twocol_2_10_panels_layouts() {
  $items['ding2base_twocol_2_10'] = array(
    'title' => t('Two Column 2-10'),
    'category' => t('ding2base'),
    'icon' => 'ding2base_twocol_2_10.png',
    'theme' => 'ding2base_twocol_2_10',
    'admin css' => '../ding2base_panels.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side')
    ),
  );

  return $items;
}
