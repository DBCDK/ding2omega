<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2omega_ding2omega_2col_4_20_panels_layouts() {
  $items['ding2omega_2col_4_20'] = array(
    'title' => t('Two Column 4-20'),
    'category' => t('Ding2 Omega: 24 column grid'),
    'icon' => 'ding2omega_2col_4_20.png',
    'theme' => 'ding2omega_2col_4_20',
    'admin css' => '../ding2omega_panels_24.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side')
    ),
  );

  return $items;
}
