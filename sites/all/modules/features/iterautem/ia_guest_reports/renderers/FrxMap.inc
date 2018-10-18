<?php
/**
 * Created by PhpStorm.
 * User: yunior
 * Date: 8/4/2018
 * Time: 5:54 PM
 */

class FrxMap extends FrxRenderer{

    public function render(){

       $variables = $this->mergedAttributes();
        $map_features = array();

        //Get the current context
       $data = Frx::Data()->currentContext();
        foreach($data as $geo){
            $property = roomify_property_load((string)$geo->pid);
            $name = str_replace(' ','-',strtolower($property->name));
            $address = render(field_view_field("roomify_property", $property, 'field_sp_address', array(
                'label'=>'hidden',
            )));
            $map_features[] = array(
                'lat' => (string)$geo->lat,
                'lon' => (string)$geo->lon,
                'leaflet_id' => 'lightblue'.(string)$geo->pid,
            );
            $markers[] = implode(',', end($map_features));
            $popup_out[] = '<h4>'.l($property->name, 'listing/' . $name).'</h4>'.'<span>'.$address.'</span>';

        }
        if($this->format == 'pdf'){
            $zoom = 16;
            $size = '900x500';
            $maptype= 'mapnik';
            $center = $map_features[0]['lat'].','.$map_features[0]['lon'];
            $marks = implode('|', $markers);
            $src = 'http://staticmap.openstreetmap.de/staticmap.php?center='.$center.'&zoom='.$zoom.'&size='.$size.'&maptype='.$maptype.'&markers='.$marks;
            $map = '<img src="'.$src.'"/>';
            }
        else{

            $map = leaflet_map_get_info('OSM Mapnik');
            // Set initial zoom level.
            $map['settings']['zoom'] = 16;
            // Decode the JSON string.
            //$geo_data = json_decode($geo_json);
            // Create settings for the map.
            $features = array();
            foreach ($map_features as $key => $feature){
                $features[$key] = array('type'=>'point') + $feature;
                $features[$key] = $features[$key] + array('popup'=>$popup_out[$key]);
            }

            // Render the map with a fixed height of 250 pixels.
            $map = leaflet_render_map($map, $features, '400px');
        }

        return $map;
    }

    /**
     * Generate a simple map with a location pointer.
     *
     * @param string $location
     *   Location to use (for example the address).
     * @param string $country
     *   Name of the country to use.
     *
     * @return string
     *   The rendered map.
     */
    /*function tour_guide_map_create($location, $country) {
        $map = '';
        // Join the address parts to something geocoder / google maps understands.
        $address = sprintf('%s, %s', $location, $country);
        // Try to create a geographic point out of the given location values.
        if ($geo_point = geocoder('google', $address)) {
            // Create a JSON equivalent to the point.
            $geo_json = $geo_point->out('json');
            // Get map implementation provided by http://drupal.org/project/leaflet_googlemaps.
            $map = leaflet_map_get_info('google-maps-roadmap');
            // Set initial zoom level.
            $map['settings']['zoom'] = 16;

            // Decode the JSON string.
            $geo_data = json_decode($geo_json);
            // Create settings for the map.
            $map_features = array(
                array(
                    'type' => 'point',
                    'lon' => $geo_data->coordinates[0],
                    'lat' => $geo_data->coordinates[1],
                ),
            );
            // Render the map with a fixed height of 250 pixels.
            $map = leaflet_render_map($map, $map_features, '250px');
        }
        return $map;
    }*/


}

