<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2omega_ding2omega_2col_2_10_panels_layouts() {
  $items['ding2omega_2col_2_10'] = array(
    'title' => t('Two Column 2-10'),
    'category' => t('Ding2 Omega: 12 column grid'),
    'icon' => 'ding2omega_2col_2_10.png',
    'theme' => 'ding2omega_2col_2_10',
    'admin css' => '../ding2omega_panels_12.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side')
    ),
  );

  return $items;
}
