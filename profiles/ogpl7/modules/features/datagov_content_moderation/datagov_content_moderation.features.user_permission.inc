<?php
/**
 * @file
 * datagov_content_moderation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_content_moderation_user_default_permissions() {
  $permissions = array();

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'Community Contributor',
      1 => 'Super User',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench moderation.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: bypass workbench moderation.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from draft to needs_review.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to draft.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to published.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation my drafts tab.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation needs review tab.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view all unpublished content.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation history.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation messages.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}