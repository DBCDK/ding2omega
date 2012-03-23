<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2omega_ding2omega_3col_2_7_3_panels_layouts() {
  $items['ding2omega_3col_2_7_3'] = array(
    'title' => t('Three column 2-7-3'),
    'category' => t('Ding2 Omega: 12 column grid'),
    'icon' => 'ding2omega_3col_2_7_3.png',
    'theme' => 'ding2omega_3col_2_7_3',
    'admin css' => '../ding2omega_panels_12.css',
    'regions' => array(
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
    ),
  );

  return $items;
}
