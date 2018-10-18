<?php
/**
 * Created by PhpStorm.
 * User: yunior
 * Date: 12/3/2017
 * Time: 5:43 PM
 */

/**
 * bookmark places pane callback: returns the "my cart" contents View for inclusion in the
 * checkout form.
 */
function bookmark_places_contents_pane_checkout_form($form, &$form_state, $checkout_pane, $order) {
    $pane_form = array();

    // Get Property from order
   $items = get_items_order($order);
   $areas = implode('+',$items['areas']);

    $view_id = 'my_bookmarks';
    $display_id = 'panel_bookmark_content';

    $pane_form['bookmark_contents_view'] = array(
        '#markup' => commerce_embed_view($view_id, $display_id, array($areas)),
    );

    return $pane_form;
}