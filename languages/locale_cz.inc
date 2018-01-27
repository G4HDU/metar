<?php
/*
 * This file holds the Czech translation of PHP Weather. To use it,
 * just include it in the main phpweather.inc file or better in your
 * HTML-PHP page (see demo.php).
 *
 * You should be aware that the file is encoded using ISO-8859-2, so
 * any page that uses this file should put the following in the
 * <head></head> section of the page:
 *
 * <meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-2">
 *
 * Author: Wayne VlK <kotala@ingema.net> */

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
  'no_data'               => '<blockquote><p>Sorry! There is <b>no data</b> available for %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> palců',
  'precip_a_trace'        => 'trasa',
  'precip_there_was'      => 'Spadlo %s srážek ',
  'sky_str_format1'       => 'Byly <b>%s</b> ve výšce <b>%s</b> metrů (<b>%s</b> stop)',
  'sky_str_clear'         => 'Bylo <b>jasno</b>',
  'sky_str_format2'       => ', <b>%s</b> ve výšce <b>%s</b> metrů (<b>%s</b> stop) a <b>%s</b> ve výšce <b>%s</b> metrů (<b>%s</b> stop)',
  'sky_str_format3'       => ' a <b>%s</b> ve výšce <b>%s</b> metrů (<b>%s</b> stop)',
  'clouds'                => ' mraky',
  'clouds_cb'             => ' mraky (cumulonimbus)',
  'clouds_tcu'            => ' bouřkové mraky',
  'visibility_format'     => 'Viditelnost byla <b>%s</b> kilometrů (<b>%s</b> mílí).',
  'wind_str_format1'      => 'o rychlosti <b>%s</b> metrů za sekundu (<b>%s</b> mílí za hodinu)',
  'wind_str_format2'      => ', v nárazech až <b>%s</b> metrů za sekundu (<b>%s</b> mílí za hodinu),',
  'wind_str_format3'      => ' od <b>%s</b>',
  'wind_str_calm'         => '<b>bezvětří</b>',
  'wind_vrb_long'         => 'variable directions',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' teplota větru byla <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'za poslední hodinu. ',
  'precip_last_6_hours'   => 'za posledních 3 až 6 hodin. ',
  'precip_last_24_hours'  => 'za posledních 24 hodin. ',
  'precip_snow'           => 'Sněhová pokrývka je silná <b>%s</b> mm (<b>%s</b> palců). ',
  'temp_min_max_6_hours'  => 'Maximální a minimální teploty za posledních 6 hodin jsou <b>%s</b> a <b>%s</b>&nbsp;&deg;C (<b>%s</b> a <b>%s</b> F).',
  'temp_max_6_hours'      => 'Maximální teplota za posledních 6 hodin byla <b>%s</b>&nbsp;&deg;C (<b>%s</b> F). ',
  'temp_min_6_hours'      => 'Minimální teplota za posledních 6 hodin byla <b>%s</b>&nbsp;&deg;C (<b>%s</b> F). ',
  'temp_min_max_24_hours' => 'Maximální a minimální teploty za posledních 24 hodin byly <b>%s</b> and <b>%s</b>&nbsp;&deg;C (<b>%s</b> a <b>%s</b> F). ',
  'runway_vis'            => 'The visibility for runway <b>%s</b> is <b>%s</b> meters (<b>%s</b> feet).',
  'runway_vis_min_max'    => 'The visibility for runway <b>%s</b> varies between <b>%s</b> meters (<b>%s</b> feet) and <b>%s</b> meters (<b>%s</b> feet).',
  'light'                 => 'mírný ',
  'moderate'              => 'střední ',
  'Heavy'                 => 'těžký ',
  'nearby'                => 'blízký ',
  'current_weather'       => 'Aktuální počasí je <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p>Před <b>%s</b> minutami, v <b>%s</b> UTC, byl vítr %s v %s. Teplota byla <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F), %s tlak byl <b>%s</b> hPa (<b>%s</b> palců Hg). Relativní vlhkost byla <b>%s%%</b>. %s %s %s %s %s</p></blockquote>'
 );

$wind_dir_text_short_array = array(
  'S',
  'S/SV',
  'SV',
  'V/SV',
  'V',
  'V/JV',
  'JV',
  'J/JV',
  'J',
  'J/JZ',
  'JZ',
  'Z/JZ',
  'Z',
  'Z/SZ',
  'SZ',
  'S/SZ',
  'S');

$wind_dir_text_array = array(
  'severu',
  'severu/severohvýchodu',
  'severovýchodu',
  'východu/severovýchodu',
  'východu',
  'východu/jihovýchodu',
  'jihovýchodu',
  'jihu/jihovýchodu',
  'jihu',
  'jihu/jihozápadu',
  'jihozápadu',
  'západu/jihozápadu',
  'západu',
  'západu/severozápadu',
  'severozápadu',
  'severu/severozápadu',
  'severu');

$weather_array = array(
  'MI' => 'Shallow ',
  'PR' => 'částečně ',
  'BC' => 'občasně ',
  'DR' => 'mírný proměnlivý ',
  'BL' => 'větrno ',
  'SH' => 'přeháňka(y) ',
  'TS' => 'bouřka ',
  'FZ' => 'namrzající ',
  'DZ' => 'mrholení ',
  'RA' => 'déšť ',
  'SN' => 'sníh ',
  'SG' => 'hrubý sníh ',
  'IC' => 'ledové krystalky ',
  'PE' => 'malé kroupy ',
  'GR' => 'kroupy ',
  'GS' => 'malé kroupy nebo sněhové broky ',
  'UP' => 'neznámo ',
  'BR' => 'opar ',
  'FG' => 'mlha ',
  'FU' => 'smog ',
  'VA' => 'vulkanický popílek ',
  'DU' => 'prachová vrstva ',
  'SA' => 'písek ',
  'HZ' => 'kouř ',
  'PY' => 'sprška',
  'PO' => 'silný prach/písečné víry ',
  'SQ' => 'větrná bouře ',
  'FC' => 'rotující mraky/tornádo/vodní smršť ',
  'SS' => 'písečná/prašná bouře ');

$cloud_condition_array = array(
  'SKC' => 'jasno',
  'CLR' => 'jasno',
  'VV'  => 'vertikální viditelnost',
  'FEW' => 'občasné',
  'SCT' => 'nesouvisle',
  'BKN' => 'skorozataženo',
  'OVC' => 'zataženo');
?>
