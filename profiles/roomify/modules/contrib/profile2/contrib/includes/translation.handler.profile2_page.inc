<?php

/**
 * @file
 * Profile2 translation handler for the entity translation module.
 */

/**
 * Profile2 translation handler.
 */
class EntityTranslationProfile2PageHandler extends EntityTranslationDefaultHandler {
  /**
   * Gets specific path instance for profile page (replaces pid with uid).
   *
   * @inheritdoc
   */
  protected function getPathInstance($path) {
    $path_segments = explode('/', $path);

    foreach ($path_segments as $index => $segment) {
      if ($segment == '%profile2_by_uid') {
        $path_segments[$index] = $this->entity->uid;
      }
    }

    return implode('/', $path_segments);
  }

}
