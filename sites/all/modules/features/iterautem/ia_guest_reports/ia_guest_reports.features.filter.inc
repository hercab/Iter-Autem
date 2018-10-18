<?php
/**
 * @file
 * ia_guest_reports.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ia_guest_reports_filter_default_formats() {
  $formats = array();

  // Exported format: forena report.
  $formats['forena_report'] = array(
    'format' => 'forena_report',
    'name' => 'forena report',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'forena_report' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
