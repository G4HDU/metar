<?php
header("Content-type: text/vnd.wap.wml");
/*	$Id: wap.php,v 1.3 2002/07/11 16:07:28 gimpster Exp $	*/

include('phpweather.inc');
include('images.inc');

/* We cannot use GIF images for WAP: */
$image_extension = '.wbmp';

echo "<?xml version=\"1.0\"?>\n";
?>
<!DOCTYPE wml PUBLIC "-//WAPFORUM//DTD WML 1.1//EN" "http://www.wapforum.org/DTD/wml_1.1.xml">
<wml>
  <card id="weather" title="phpweather.net">
<?
$cities = array(
  'EKYT' => 'Aalborg',
  'BGTL' => 'Thule',
  'EGKK' => 'London',
  'EKCH' => 'Copenhagen',
  'ENGM' => 'Oslo',
  'ESSA' => 'Stockholm',
  'FCBB' => 'Congo',
  'LEMD' => 'Madrid',
  'LFPB' => 'Paris',
  'LIRA' => 'Roma',
  'KNYC' => 'New York',
  'NZCM' => 'Antarctica',
  'UUEE' => 'Moscow',
  'RKSS' => 'Seoul',
  'YSSY' => 'Sydney',
  'ZBAA' => 'Beijing'
  );

if (!isset($city)) {
  $city = 'EKYT';
}
$metar = get_metar($city);
pretty_print_metar_wap($metar, $cities[$city]);
?>
<img src="<? get_sky_image(process_metar($metar)) ?>" height="50" width="80" border="1" />
    <p>
<?php

while (list($icao, $location) = each($cities)) {
  echo '
<anchor>' . $location . '
  <go href="http://' . $HTTP_HOST . $PHP_SELF . '" method="post">
    <postfield name="city" value="' . $icao . '"/>
  </go>
</anchor>
';
}

?>
  </p>
  </card>
</wml>
