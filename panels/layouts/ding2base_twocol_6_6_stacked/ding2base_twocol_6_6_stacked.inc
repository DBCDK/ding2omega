<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2_basetheme_ding2base_twocol_6_6_stacked_panels_layouts() {
  $items['ding2base_twocol_6_6_stacked'] = array(
    'title' => t('Two Column 6-6 stacked'),
    'category' => t('ding2base'),
    'icon' => 'ding2base_twocol_6_6_stacked.png',
    'theme' => 'ding2base_twocol_6_6_stacked',
    'admin css' => '../ding2base_panels.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
