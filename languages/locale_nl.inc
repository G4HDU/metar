<?php
/*
 * This file holds the Dutch translation of PHP Weather. To use it,
 * just include it in the main phpweather.inc file.
 *
 * Author: Nicky Haan <nicky@netcase.nl>
 *         Raymond van Bek <r_vanbeek@hotmail.com>
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
  'no_data'               => '<blockquote><p>Helaas, er is geen data ' .
                             'beschikbaar voor %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> inch',
  'precip_a_trace'        => 'een spoor',
  'precip_there_was'      => 'Er was %s neerslag ',
  'sky_str_format1'       => 'er was <b>%s</b> op een hoogte van ' .
                             '<b>%s</b> meter (<b>%s</b> voet)',
  'sky_str_clear'         => 'er was <b>geen</b> bewolking',
  'sky_str_format2'       => ', <b>%s</b> op een hoogte van <b>%s</b> ' .
                             'meter (<b>%s</b> voet) en <b>%s</b> op een ' .
                             'hoogte van <b>%s</b> meter (<b>%s</b> voet)',
  'sky_str_format3'       => ' en <b>%s</b> op een hoogte van <b>%s</b> ' .
                             'meter (<b>%s</b> voet)',
  'sky_cavok'             => 'Er is geen bewolking beneden <b>1,524</b> ' .
                             'meter (<b>5,000</b> voet)',
  'clouds'                => ' bewolking',
  'clouds_cb'             => ' buienwolken',
  'clouds_tcu'            => ' stapelwolking',
  'visibility_format'     => 'De zichtbaarheid was <b>%s</b> kilometer ' .
                             '(<b>%s</b> mijl).',
  'wind_str_format1'      => 'met windsnelheden van <b>%s</b> meter ' .
                             'per seconde(<b>%s</b> mijl per uur)',
  'wind_str_format2'      => ', met vlagen tot <b>%s</b> meter per ' .
                             'seconde (<b>%s</b> mijl per uur),',
  'wind_str_format3'      => ' vanuit <b>%s</b>',
  'wind_str_calm'         => '<b>kalm</b>',
  'wind_vrb_long'         => 'variable richtingen',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => '  de gevoelstemperatuur is ' .
                             '<b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'in het laatste uur. ',
  'precip_last_6_hours'   => 'in de laatste 3 tot 6 uur. ',
  'precip_last_24_hours'  => 'in de laatste 24 uur. ',
  'precip_snow'           => 'Er is <b>%s</b> mm (<b>%s</b> inch) ' .
                             'sneeuw op de grond. ',
  'temp_min_max_6_hours'  => 'De maximum en minumum temperaturen over ' .
                             'de laatste 6 uur waren <b>%s</b> en ' .
                             '<b>%s</b>&nbsp;&deg;C (<b>%s</b> en ' .
                             ' <b>%s</b>&nbsp;&deg;F).',
  'temp_max_6_hours'      => 'De maximum temperatuur over de laatste 6 ' .
                             'uur was <b>%s</b>&nbsp;&deg;C ' .
                             '(<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'De minumum temperatuur over de laatste 6 ' .
                             'uur was <b>%s</b>&nbsp;&deg;C ' .
                             '(<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'De maximum en minumum temperaturen over ' .
                             'de laatste 24 uur waren <b>%s</b> en ' .
                             '<b>%s</b>&nbsp;&deg;C (<b>%s</b> en ' .
                             '<b>%s</b>&nbsp;&deg;F). ',
  'runway_vis'            => 'De zichtbare baanlengte voor startbaan ' .
                             '<b>%s</b> is <b>%s</b> meter (<b>%s</b> voet).',
  'runway_vis_min_max'    => 'De zichtbare baanlengte voor startbaan ' .
                             '<b>%s</b> varieert tussen <b>%s</b> meter ' .
                             '(<b>%s</b> voet) en <b>%s</b> meter ' .
                             '(<b>%s</b> voet).',
  'light'                 => 'Licht ',
  'moderate'              => 'Gematigd ',
  'Heavy'                 => 'Zwaar ',
  'nearby'                => 'Dichtbij ',
  'current_weather'       => 'Het huidige weer is <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p><b>%s</b> minuten geleden, ' .
                             'om <b>%s</b> UTC, de wind blies %s nabij %s. ' .
                             'De temperatuur was <b>%s</b>&nbsp;&deg;C ' .
                             '(<b>%s</b>&nbsp;&deg;F), %s en de ' .
                             'barometerdruk was <b>%s</b> hPa (<b>%s</b> ' .
                             'inHg). De relatieve vochtigheid was ' .
                             '<b>%s%%</b>. %s %s %s %s %s</p></blockquote>');

$wind_dir_text_short_array = array(
  'N',
  'NNO',
  'NO',
  'ONO',
  'O',
  'OZO',
  'ZO',
  'ZZO',
  'Z',
  'ZZW',
  'ZW',
  'WZW',
  'W',
  'WNW',
  'NW',
  'NNW',
  'N');

$wind_dir_text_array = array(
  'Noord',
  'Noord-noordoost',
  'Noordoost',
  'Oost-noordoost',
  'Oost',
  'Oost-zuidoost',
  'Zuidoost',
  'Zuid-zuidoost',
  'Zuid',
  'Zuid-zuidwest',
  'Zuidwest',
  'West-zuidwest',
  'West',
  'West-noordwest',
  'Noordwest',
  'Noord-noordwest',
  'Noord');

$weather_array = array(
  'MI' => 'Shallow ',
  'PR' => 'Deeltje ',
  'BC' => 'Flarden ',
  'DR' => 'Laag optrekkende ',
  'BL' => 'Blazen ',
  'SH' => 'Bui(en) ',
  'TS' => 'Onweersbui ',
  'FZ' => 'Vriest',
  'DZ' => 'Motregen ',
  'RA' => 'Regen ',
  'SN' => 'Sneeuw ',
  'SG' => 'Motsneeuw ',
  'IC' => 'IJs Kristallen ',
  'PE' => 'IJs Hagel ',
  'GR' => 'Hagel ',
  'GS' => 'Fijne Hagel en/of Motsneeuw ',
  'UP' => 'Onbekend ',
  'BR' => 'Mist ',
  'FG' => 'Mist ',
  'FU' => 'Rook ',
  'VA' => 'Vulkanische As ',
  'DU' => 'Wijdeverspreide Stofdeeltjes ',
  'SA' => 'Zand ',
  'HZ' => 'Nevel ',
  'PY' => 'Nevel',
  'PO' => 'StuifZand/-Stof ',
  'SQ' => 'Vlagen ',
  'FC' => 'Trechtervormige Tornado Waterhoos  ',
  'SS' => 'Zandstorm/Stofstorm ');

$cloud_condition_array = array(
  'SKC' => 'helder',
  'CLR' => 'helder',
  'VV'  => 'vertikale zichtbaarheid',
  'FEW' => 'weinig',
  'SCT' => 'verspreide',
  'BKN' => 'gebroken',
  'OVC' => 'betrekkelijk');
?>

