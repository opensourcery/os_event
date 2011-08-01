<?php
/**
 * @file
 * os_event.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function os_event_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os_event_detail';
  $context->description = 'Context for event detail pages';
  $context->tag = 'os_event';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-event_listing-block_upcoming' => array(
          'module' => 'views',
          'delta' => 'event_listing-block_upcoming',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for event detail pages');
  t('os_event');
  $export['os_event_detail'] = $context;

  return $export;
}
