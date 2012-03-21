<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2_basetheme_ding2omega_2col_6_18_panels_layouts() {
  $items['ding2omega_2col_6_18'] = array(
    'title' => t('Two Column 6-18'),
    'category' => t('Ding2 Omega: 12 column grid'),
    'icon' => 'ding2omega_2col_6_18.png',
    'theme' => 'ding2omega_2col_6_18',
    'admin css' => '../ding2omega_panels_24.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side')
    ),
  );

  return $items;
}
