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
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> palc�',
  'precip_a_trace'        => 'trasa',
  'precip_there_was'      => 'Spadlo %s sr�ek ',
  'sky_str_format1'       => 'Byly <b>%s</b> ve v��ce <b>%s</b> metr� (<b>%s</b> stop)',
  'sky_str_clear'         => 'Bylo <b>jasno</b>',
  'sky_str_format2'       => ', <b>%s</b> ve v��ce <b>%s</b> metr� (<b>%s</b> stop) a <b>%s</b> ve v��ce <b>%s</b> metr� (<b>%s</b> stop)',
  'sky_str_format3'       => ' a <b>%s</b> ve v��ce <b>%s</b> metr� (<b>%s</b> stop)',
  'clouds'                => ' mraky',
  'clouds_cb'             => ' mraky (cumulonimbus)',
  'clouds_tcu'            => ' bou�kov� mraky',
  'visibility_format'     => 'Viditelnost byla <b>%s</b> kilometr� (<b>%s</b> m�l�).',
  'wind_str_format1'      => 'o rychlosti <b>%s</b> metr� za sekundu (<b>%s</b> m�l� za hodinu)',
  'wind_str_format2'      => ', v n�razech a� <b>%s</b> metr� za sekundu (<b>%s</b> m�l� za hodinu),',
  'wind_str_format3'      => ' od <b>%s</b>',
  'wind_str_calm'         => '<b>bezv�t��</b>',
  'wind_vrb_long'         => 'variable directions',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' teplota v�tru byla <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'za posledn� hodinu. ',
  'precip_last_6_hours'   => 'za posledn�ch 3 a� 6 hodin. ',
  'precip_last_24_hours'  => 'za posledn�ch 24 hodin. ',
  'precip_snow'           => 'Sn�hov� pokr�vka je siln� <b>%s</b> mm (<b>%s</b> palc�). ',
  'temp_min_max_6_hours'  => 'Maxim�ln� a minim�ln� teploty za posledn�ch 6 hodin jsou <b>%s</b> a <b>%s</b>&nbsp;&deg;C (<b>%s</b> a <b>%s</b> F).',
  'temp_max_6_hours'      => 'Maxim�ln� teplota za posledn�ch 6 hodin byla <b>%s</b>&nbsp;&deg;C (<b>%s</b> F). ',
  'temp_min_6_hours'      => 'Minim�ln� teplota za posledn�ch 6 hodin byla <b>%s</b>&nbsp;&deg;C (<b>%s</b> F). ',
  'temp_min_max_24_hours' => 'Maxim�ln� a minim�ln� teploty za posledn�ch 24 hodin byly <b>%s</b> and <b>%s</b>&nbsp;&deg;C (<b>%s</b> a <b>%s</b> F). ',
  'runway_vis'            => 'The visibility for runway <b>%s</b> is <b>%s</b> meters (<b>%s</b> feet).',
  'runway_vis_min_max'    => 'The visibility for runway <b>%s</b> varies between <b>%s</b> meters (<b>%s</b> feet) and <b>%s</b> meters (<b>%s</b> feet).',
  'light'                 => 'm�rn� ',
  'moderate'              => 'st�edn� ',
  'Heavy'                 => 't�k� ',
  'nearby'                => 'bl�zk� ',
  'current_weather'       => 'Aktu�ln� po�as� je <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p>P�ed <b>%s</b> minutami, v <b>%s</b> UTC, byl v�tr %s v %s. Teplota byla <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F), %s tlak byl <b>%s</b> hPa (<b>%s</b> palc� Hg). Relativn� vlhkost byla <b>%s%%</b>. %s %s %s %s %s</p></blockquote>'
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
  'severu/severohv�chodu',
  'severov�chodu',
  'v�chodu/severov�chodu',
  'v�chodu',
  'v�chodu/jihov�chodu',
  'jihov�chodu',
  'jihu/jihov�chodu',
  'jihu',
  'jihu/jihoz�padu',
  'jihoz�padu',
  'z�padu/jihoz�padu',
  'z�padu',
  'z�padu/severoz�padu',
  'severoz�padu',
  'severu/severoz�padu',
  'severu');

$weather_array = array(
  'MI' => 'Shallow ',
  'PR' => '��ste�n� ',
  'BC' => 'ob�asn� ',
  'DR' => 'm�rn� prom�nliv� ',
  'BL' => 'v�trno ',
  'SH' => 'p�eh��ka(y) ',
  'TS' => 'bou�ka ',
  'FZ' => 'namrzaj�c� ',
  'DZ' => 'mrholen� ',
  'RA' => 'd鹻 ',
  'SN' => 'sn�h ',
  'SG' => 'hrub� sn�h ',
  'IC' => 'ledov� krystalky ',
  'PE' => 'mal� kroupy ',
  'GR' => 'kroupy ',
  'GS' => 'mal� kroupy nebo sn�hov� broky ',
  'UP' => 'nezn�mo ',
  'BR' => 'opar ',
  'FG' => 'mlha ',
  'FU' => 'smog ',
  'VA' => 'vulkanick� pop�lek ',
  'DU' => 'prachov� vrstva ',
  'SA' => 'p�sek ',
  'HZ' => 'kou� ',
  'PY' => 'spr�ka',
  'PO' => 'siln� prach/p�se�n� v�ry ',
  'SQ' => 'v�trn� bou�e ',
  'FC' => 'rotuj�c� mraky/torn�do/vodn� smr�� ',
  'SS' => 'p�se�n�/pra�n� bou�e ');

$cloud_condition_array = array(
  'SKC' => 'jasno',
  'CLR' => 'jasno',
  'VV'  => 'vertik�ln� viditelnost',
  'FEW' => 'ob�asn�',
  'SCT' => 'nesouvisle',
  'BKN' => 'skorozata�eno',
  'OVC' => 'zata�eno');
?>
