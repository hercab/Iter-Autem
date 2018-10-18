<?php

/**
 * @file
 * Contains the flag Ops field handler based on the generic 'views_entity_' .
 * $entity_type tables that can be used by any query backend.
 */

/**
 * Views field handler for the Flag operations links (flag/unflag) for entities.
 *
 * @ingroup views
 */
class flag_handler_field_entity_ops extends views_handler_field_entity {

  /**
   * Returns the flag object associated with our field.
   */
  function get_flag() {
    return flag_get_flag($this->options['flag']);
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['link_type'] = array('default' => '');
    $options['flag'] = array('default' => NULL);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['link_type'] = array(
      '#type' => 'radios',
      '#title' => t('Link type'),
      '#options' => array('' => t('Use flag link settings')) + _flag_link_type_options(),
      '#default_value' => $this->options['link_type'],
    );

    //@todo: same code in flag_handler_relationship_content
    $form['flag'] = flag_views_flag_config_form('radios', $content_type, $this->options['flag']);
    if (!$form['flag']['#options']) {
      $form = array(
        'error' => array(
          '#markup' => '<p class="error form-item">' . t('No %type flags exist. You must first <a href="@create-url">create a %type flag</a> before being able to use this field.', array('%type' => $content_type, '@create-url' => url(FLAG_ADMIN_PATH))) . '</p>',
        ),
      );
      $form_state['no flags exist'] = TRUE;
    }
  }

/**
   * @todo: same code in flag_handler_relationship->validate()
   *
   * Make sure the flag exists.
   *
   * When importing views, or when deleting flags, inconsistent views may
   * result. This validator is called by Views before saving or previewing a
   * view.
   */
  function validate() {
    $errors = array();
    $tokens = array(
      '@field-name' => $this->definition['title'],
      '@flag-name' => $this->options['flag'],
    );
    if (!$this->options['flag']) {
      $errors[] = t('You must pick a flag to use for the field "@field-name".', $tokens);
    }
    elseif (!flag_get_flag($this->options['flag'])) {
      $errors[] = t('This view is looking for a flag by the name "@flag-name", but there is no such flag. Perhaps it was deleted. Please update the field "@field-name" in this view to use an existing flag.', $tokens);
    }
    return $errors;
  }

  /**
   * Find out if the flag applies to each item seen on the page. It's done in a
   * separate step so that we can use the access_multiple hook for all results
   * at once.
   */
  function pre_render(&$values) {
    parent::pre_render($values);
    if (!($flag = $this->get_flag())) {
      // Error message is printed in render().
      return;
    }
    if (empty($this->entities)) {
      // Empty result set.
      return;
    }
    foreach ($this->entities as $entity) {
      $id = $flag->get_entity_id($entity);
      $is_flagged = $flag->is_flagged($id);
      $ids[$id] = $is_flagged ? 'unflag' : 'flag';
    }
    $this->ids = $ids;
    $this->flag_applies = $ids ? $flag->access_multiple($ids) : array();
  }

  /**
   * Render the flag link for a specific entity.
   */
  function render($values) {
    if (!($flag = $this->get_flag())) {
      // get_flag() itself will print a more detailed message.
      return t('Missing flag');
    }
    $entity = $this->get_value($values);
    $id = $flag->get_entity_id($entity);

    if (empty($this->flag_applies[$id])) {
      // Flag does not apply to this content.
      return;
    }

    if (!empty($this->options['link_type'])) {
      $flag->link_type = $this->options['link_type'];
    }

    $flag_value = $this->ids[$id];
    return $flag->theme($flag_value, $id);
  }
}
