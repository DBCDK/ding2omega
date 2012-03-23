<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2omega_ding2omega_2col_3_9_panels_layouts() {
  $items['ding2omega_2col_3_9'] = array(
    'title' => t('Two Column 3-9'),
    'category' => t('Ding2 Omega: 12 column grid'),
    'icon' => 'ding2omega_2col_3_9.png',
    'theme' => 'ding2omega_2col_3_9',
    'admin css' => '../ding2omega_panels_12.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side')
    ),
  );

  return $items;
}
