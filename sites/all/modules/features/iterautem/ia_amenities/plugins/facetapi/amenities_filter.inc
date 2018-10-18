<?php
/**
 * Created by PhpStorm.
 * User: yunior
 * Date: 8/25/2018
 * Time: 3:58 PM
 */

/**
 * Plugin that filters active items.
 */
class FacetapiFilterAmenities extends FacetapiFilter {

    /**
     * Implements FacetapiFilter::execute().
     */
    public function execute(array $build) {
        $limit = intval($this->settings->settings['soft_limit']);
        $amenities_ia = entity_metadata_field_query('taxonomy_term', 'field_filter_amenities', 1,$limit);
        return array_intersect_key($build, array_flip($amenities_ia));
    }
}