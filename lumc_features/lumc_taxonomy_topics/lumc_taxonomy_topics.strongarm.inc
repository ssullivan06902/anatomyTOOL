<?php
/**
 * @file
 * lumc_taxonomy_topics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lumc_taxonomy_topics_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__vocab_topics';
  $strongarm->value = array();
  $export['field_bundle_settings_taxonomy_term__vocab_topics'] = $strongarm;

  return $export;
}
