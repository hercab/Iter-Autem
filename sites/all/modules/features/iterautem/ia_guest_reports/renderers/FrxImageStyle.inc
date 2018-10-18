<?php
/**
 * Created by PhpStorm.
 * User: yunior
 * Date: 8/11/2018
 * Time: 1:28 PM
 */

Class FrxImageStyle extends FrxRenderer{
    public function render(){

        $variables = $this->mergedAttributes();
        $attributes = $this->replacedAttributes();
        if (isset($variables['context'])) {
            $data = Frx::Data()->getContext($variables['context']);
        }
        else {
            $data = FrxData::instance()->currentContext();
        }
        $image_uri = (string)$data->row->uri; // or any public://my_image
        $style = $variables['image_style'];

        $derivative_uri = image_style_path($style, $image_uri);
        $success = file_exists($derivative_uri) || image_style_create_derivative(image_style_load($style), $image_uri, $derivative_uri);

        $image_url  = file_create_url($derivative_uri);

        $css = 'style="background-image:url(\'' . $image_url . '\')"';


        $output = '<div class="banner-location web" '. $css .'><h3 class="subtitle">Otros lugares de interés</h3></div>';

        return $output;

    }
}