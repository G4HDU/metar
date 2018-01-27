<?php
/*
 * This file holds the Norwegian translation of PHP Weather. To use it,
 * just include it in the main phpweather.inc file.
 *
 * Author: Sven-Erik Andersen <sven_erik@andersen.as>
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
  'no_data'               => '<blockquote><p>Beklager! Det er ingen data tilgjengelig for %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> tommer',
  'precip_a_trace'        => 'en smule',
  'precip_there_was'      => 'Det var %s nedb&oslash;r ',
  'sky_str_format1'       => 'Det var <b>%s</b> p&aring; en h&oslash;yde av <b>%s</b> meter (<b>%s</b> fot)',
  'sky_str_clear'         => 'Himmelen var <b>klar</b>',
  'sky_str_format2'       => ', <b>%s</b> p&aring; en h&oslash;yde av <b>%s</b> meter (<b>%s</b> fot) og <b>%s</b> p&aring; en h&oslash;yde av <b>%s</b> meter (<b>%s</b> fot)',
  'sky_str_format3'       => ' og <b>%s</b> p&aring; en h&oslash;yde av <b>%s</b> meter (<b>%s</b> fot)',
  'sky_cavok'             => 'There are no clouds below <b>1,524</b> meter (<b>5,000</b> feet)',
  'clouds'                => ' skyer',
  'clouds_cb'             => ' cumulus skyer',
  'clouds_tcu'            => ' t&aring;rnende cumulus skyer',
  'visibility_format'     => 'Sikten var <b>%s</b> kilometer (<b>%s</b> miles).',
  'wind_str_format1'      => 'med en hastighet av <b>%s</b> meter per sekund (<b>%s</b> miles per time)',
  'wind_str_format2'      => ', med vindkast p&aring; <b>%s</b> meter per sekund (<b>%s</b> miles per time),',
  'wind_str_format3'      => ' fra <b>%s</b>',
  'wind_str_calm'         => '<b>stille</b>',
  'wind_vrb_long'         => 'variable retninger',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' vindfaktoren var <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'i den siste timen. ',
  'precip_last_6_hours'   => 'i de siste 3 til 6 timer. ',
  'precip_last_24_hours'  => 'i de siste 24 timer. ',
  'precip_snow'           => 'Det er <b>%s</b> mm (<b>%s</b> tommer) sn&oslash; p&aring; bakken. ',
  'temp_min_max_6_hours'  => 'Maksimum og minimum temperaturen for de siste 6 timer var <b>%s</b> og <b>%s</b>&nbsp;&deg;C (<b>%s</b> og <b>%s</b>&nbsp;&deg;F).',
  'temp_max_6_hours'      => 'Maksimum temperaturen for de siste 6 timer var <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'Minimum temperaturen for de siste 6 timer var <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'Maksimum og minimum temperaturen for de siste 24 timer var <b>%s</b> og <b>%s</b>&nbsp;&deg;C (<b>%s</b> og <b>%s</b>&nbsp;&deg;F). ',
  'runway_vis'            => 'The visibility for runway <b>%s</b> is <b>%s</b> meters (<b>%s</b> feet).',
  'runway_vis_min_max'    => 'The visibility for runway <b>%s</b> varies between <b>%s</b> meters (<b>%s</b> feet) and <b>%s</b> meters (<b>%s</b> feet).',
  'light'                 => 'Lett ',
  'moderate'              => 'Moderat ',
  'Heavy'                 => 'Kraftig ',
  'nearby'                => 'N&aelig;r ',
  'current_weather'       => 'N&aring;v&aelig;rende v&aelig;r er <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p><b>%s</b> minutter siden, klokka <b>%s</b> UTC, bl&aring;ste vinden %s i %s. Temperaturen var <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F), %s og lufttrykket var <b>%s</b> hPa (<b>%s</b> inHg). Den relative luftfuktigheten var <b>%s%%</b>. %s %s %s %s %s</p></blockquote>'

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
  'S/SW',
  'SW',
  'W/SW',
  'W',
  'W/NW',
  'NW',
  'N/NW',
  'N');

$wind_dir_text_array = array(
  'nord',
  'nord/nord&oslash;st',
  'nord&oslash;st',
  '&oslash;st/nord&oslash;st',
  '&oslash;st',
  '&oslash;st/south&oslash;st',
  's&oslash;r&oslash;st',
  's&oslash;r/s&oslash;r&oslash;st',
  's&oslash;r',
  's&oslash;r/s&oslash;rvest',
  's&oslash;rvest',
  'vest/s&oslash;rvest',
  'vest',
  'vest/nordvest',
  'nordvest',
  'nord/nordvest',
  'nord');

$weather_array = array(
  'MI' => 'Shallow ',
  'PR' => 'delvis ',
  'BC' => 'banker ',
  'DR' => 'lavt drivende ',
  'BL' => 'bl&aring;ser ',
  'SH' => 'skur ',
  'TS' => 'tordenv&aelig;r ',
  'FZ' => 'frysende',
  'DZ' => 'duskregn ',
  'RA' => 'regn ',
  'SN' => 'sn&oslash; ',
  'SG' => 'sn&oslash; korn ',
  'IC' => 'is krystaller ',
  'PE' => 'is kuler ',
  'GR' => 'hagl ',
  'GS' => 'sm&aring; hagl og/eller sn&oslash; kuler ',
  'UP' => 'ukjent ',
  'BR' => 't&aring;ke/dis ',
  'FG' => 't&aring;ke ',
  'FU' => 'r&oslash;yk ',
  'VA' => 'vulkansk aske ',
  'DU' => 'mye st&oslash;v ',
  'SA' => 'sand ',
  'HZ' => 't&aring;ke/dis ',
  'PY' => 'duskregn',
  'PO' => 'godt utviklede st&oslash;v/sand virvler ',
  'SQ' => 'vindkast ',
  'FC' => 'trombe/tornado/skypumpe ',
  'SS' => 'sandstorm/st&oslash;vstorm ');

$cloud_condition_array = array(
  'SKC' => 'klar',
  'CLR' => 'klar',
  'VV'  => 'vertikal sikt',
  'FEW' => 'noen f&aring;',
  'SCT' => 'spredte',
  'BKN' => 'brutte',
  'OVC' => 'overskyet');
?>
