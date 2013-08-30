<?php
/**
 * @file
 * os_event.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function os_event_user_default_roles() {
  $roles = array();

  // Exported role: event administrator.
  $roles['event administrator'] = array(
    'name' => 'event administrator',
    'weight' => 5,
  );

  return $roles;
}
