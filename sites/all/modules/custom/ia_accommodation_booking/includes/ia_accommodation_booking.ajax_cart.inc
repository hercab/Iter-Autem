<?php
/**
 * Created by PhpStorm.
 * User: yunior
 * Date: 8/7/2018
 * Time: 8:58 PM
 */

/**
 * Implements hook_form_alter().
 *
 */
function ia_accommodation_booking_form_alter(&$form, &$form_state, $form_id) {

    if (strpos($form_id, 'roomify_accommodation_booking_confirmation_form') !== FALSE) {
        $form['submit']['#ajax'] = array(
            'callback' => 'dc_ajax_add_cart_ajax_cart_form',
            'method' => 'replace',
            'effect' => 'slide',
        );
        $form['#attached']['js'][] = drupal_get_path('module', 'dc_ajax_add_cart') . '/js/dc_ajax_add_cart.js';

        // Rebuild form.
        $form['#submit'][] = 'dc_ajax_add_cart_rebuild_add_to_cart_form';
    }
}

/**
 * Implements hook_block_view_alter().
 */
function ia_accommodation_booking_block_view_alter(&$data, $block)
{
    // Add css to ajax_shopping_cart_teaser. Tener en cuenta que $data['content'] no es una array.
    if ($block->delta == 'ajax_shopping_cart_teaser') {
        $markup = $data['content'];
        $data['content'] = array();
        $data['content']['#markup'] = $markup;
        $data['content']['#attached'] = array(
            'css' => array(
                drupal_get_path('module', 'ia_accommodation_booking') . '/css/shopping-cart-teaser.css',
            ),
        );
    }
}

/**
* Add more variables to add to cart message popup message.
 *
 * Default template: add-to-cart-message.tpl.php.
 *
 * @param array $variables
    *   An associative array containing:
 *   - order: Order object for the current user.
 *   - quantity: Number of items present in the cart.
 *   - total: Array containing the total amount and default currency code used
*     in the site.
 */

function ia_accommodation_booking_preprocess_dc_ajax_add_to_cart_message(&$variables){
    $variables['configuration']['popup_continue_shopping'] = l($variables['configuration']['popup_continue_shopping'], 'availability-search');

    if(variable_get(DC_AJAX_ADD_CART_CHECKOUT_REDIRECT, 'cart_page') == 'cart_page'){
        $variables['checkout_link'] = l(variable_get(DC_AJAX_ADD_CART_POPUP_CHECKOUT, t('Go to cart')), 'cart');
    }
    else{
        $variables['checkout_link'] = l(variable_get(DC_AJAX_ADD_CART_POPUP_CHECKOUT, t('Go to checkout')), 'checkout');
    }
}