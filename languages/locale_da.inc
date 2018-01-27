<?php
/*
 * This file holds the Danish translation of PHP Weather. To use it,
 * just include it in the main phpweather.inc file.
 *
 * Author: Martin Geisler <gimpster@gimpster.com>
 */

/* Unsets old language variables and loads new ones. */
if (isset($strings)) {
  /* The strings array is loaded - assume the same for the rest. */
  unset($strings);
  unset($wind_dir_text_short_array);
  unset($wind_dir_text_array);
  unset($weather_array);
  unset($cloud_condition_array);
}
/* Load the new strings */

$strings = array(
  'no_data'               => '<blockquote><p>Desv&aelig;rre! Der er <b>ingen data</b> tilst&aelig;de for %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> tommer',
  'precip_a_trace'        => 'en smule',
  'precip_there_was'      => 'Der var %s nedb&oslash;r ',
  'sky_str_format1'       => 'Der var <b>%s</b> i en h&oslash;jde af <b>%s</b> meter (<b>%s</b> fod)',
  'sky_str_clear'         => 'Himlen var <b>skyfri</b>',
  'sky_str_format2'       => ', <b>%s</b> i en h&oslash;jde af <b>%s</b> meter (<b>%s</b> fod) og <b>%s</b> i en h&oslash;jde af <b>%s</b> meter (<b>%s</b> fod)',
  'sky_str_format3'       => ' og <b>%s</b> i en h&oslash;jde af <b>%s</b> meter (<b>%s</b> fod)',
  'sky_cavok'             => 'Der var ingen skyer under <b>1,524</b> meters h&oslash;jde (<b>5,000</b> feet)',
  'clouds'                => ' skyer',
  'clouds_cb'             => ' cumulus skyer',
  'clouds_tcu'            => ' stakkede cumulus skyer',
  'visibility_format'     => 'Sigtbarheden var <b>%s</b> kilometer (<b>%s</b> mil).',
  'wind_str_format1'      => 'med en hastighed af <b>%s</b> meter i sekundet (<b>%s</b> mil i timen)',
  'wind_str_format2'      => ', med vindst&oslash;d op til <b>%s</b> meter i sekundet (<b>%s</b> mil i timen),',
  'wind_str_format3'      => ' fra <b>%s</b>',
  'wind_str_calm'         => '<b>stille</b>',
  'wind_vrb_long'         => 'forskellige retninger',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' afkølingsfaktoren var <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F)',
  'precip_last_hour'      => 'i den sidste time. ',
  'precip_last_6_hours'   => 'i de sidste 3 til 6 timer. ',
  'precip_last_24_hours'  => 'i de sidste 24 timer. ',
  'precip_snow'           => 'Der er <b>%s</b> mm (<b>%s</b> tommer) sne p&aring; jorden. ',
  'temp_min_max_6_hours'  => 'Maksimum og minimums temperaturene i de sidste 6 timer var <b>%s</b> og <b>%s</b>&nbsp;&deg;C (<b>%s</b> og <b>%s</b>&nbsp;&deg;F).',
  'temp_max_6_hours'      => 'Maksimums temperaturen i de sidste 6 timer var <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'Minimums temperaturen i de sidste 6 var <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'Maksimums og minimumstemperaturene i de sidste 24 timer var <b>%s</b> og <b>%s</b>&nbsp;&deg;C (<b>%s</b> og <b>%s</b>&nbsp;&deg;F). ',
  'runway_vis'            => 'Sigtbarheden for bane <b>%s</b> er <b>%s</b> meter (<b>%s</b> fod).',
  'runway_vis_min_max'    => 'Sigtbarheden for bane <b>%s</b> varierer imellem <b>%s</b> meter (<b>%s</b> fod) og <b>%s</b> meter (<b>%s</b> fod).',
  'light'                 => 'Let ',
  'moderate'              => 'Moderat ',
  'Heavy'                 => 'Kraftig ',
  'nearby'                => 'T&aelig;tliggende ',
  'current_weather'       => 'De aktuelle vejrforhold er: <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p>For <b>%s</b> minutter siden, kl. <b>%s</b> UTC, bl&aelig;ste vinden %s i %s. Temperaturen var <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F), %s og lufttrykket var <b>%s</b> hPa (<b>%s</b> inHg). Den relative luftfugtighed var <b>%s%%</b>. %s %s %s %s %s</p></blockquote>'
 );

$wind_dir_text_short_array = array(
  'N',
  'N/N&Oslash;',
  'N&Oslash;',
  '&Oslash;/N&Oslash;',
  '&Oslash;',
  '&Oslash;/S&Oslash;',
  'S&Oslash;',
  'S/S&Oslash;',
  'S',
  'S/SV',
  'SV',
  'V/SV',
  'V',
  'V/NV',
  'NV',
  'N/NV',
  'N');

$wind_dir_text_array = array(
  'nord',
  'nord/nord&oslash;st',
  'nord&oslash;st',
  '&oslash;st/nord&oslash;st',
  '&oslash;st',
  '&oslash;st/syd&oslash;st',
  'syd&oslash;st',
  'syd/syd&oslash;st',
  'syd',
  'syd/sydvest',
  'sydvest',
  'vest/sydvest',
  'vest',
  'vest/nordvest',
  'nordvest',
  'nord/nordvest',
  'nord');

$weather_array = array(
  'MI' => 'Shallow ',
  'PR' => 'delvis ',
  'BC' => 'banker ',
  'DR' => 'lave drivende ',
  'BL' => 'bl&aelig;sende ',
  'SH' => 'regnskyl ',
  'TS' => 'tordenvejr ',
  'FZ' => 'frysende',
  'DZ' => 'finregn ',
  'RA' => 'regn ',
  'SN' => 'sne ',
  'SG' => 'sne korn ',
  'IC' => 'is krystaller ',
  'PE' => 'is kugler ',
  'GR' => 'hagl ',
  'GS' => 'sm&aring; hagl og/eller sne kugler ',
  'UP' => 'ukendt ',
  'BR' => 'dis ',
  'FG' => 't&aring;ge ',
  'FU' => 'r&oslash;g ',
  'VA' => 'vulkansk aske ',
  'DU' => 'udbredt st&oslash;v ',
  'SA' => 'sand ',
  'HZ' => 't&aring;ge/dis ',
  'PY' => 'byge ',
  'PO' => 'vel-udviklet st&oslash;v/sand hvirvler ',
  'SQ' => 'vindst&oslash;d ',
  'FC' => 'tornado/skypumpe ',
  'SS' => 'sandstorm/st&oslash;vstorm ');

$cloud_condition_array = array(
  'SKC' => 'skyfri',
  'CLR' => 'skyfri',
  'VV'  => 'vertikal sigtbarhed',
  'FEW' => 'nogle f&aring;',
  'SCT' => 'spredte',
  'BKN' => 'brudte',
  'OVC' => 'overskyet');
?>
