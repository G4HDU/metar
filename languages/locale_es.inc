<?php
/*
 * This file holds the Spanish translation of PHP Weather. To use it,
 * just include it in the main phpweather.inc file.
 *
 * Author: Eduardo Guilenea <eduardo@guilenea.com>
 * Updates: Colman <none@nonet.net>
 */

/* Unsets old language variables and loads new ones. */
if (isset($strings)) {
  /* The strings array is loaded - assume the same for the rest. */
  unset($strings);
  unset($wind_dir_text_short);
  unset($wind_dir_text);
  unset($weather);
  unset($cloud_condition);
}
/* Load the new strings */

$strings = array(
  'no_data'               => '<blockquote><p>Sorry! There is <b>no data</b> available for %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> pulgadas',
  'precip_a_trace'        => 'una pizca',
  'precip_there_was'      => 'La presipitaci&oacute;n fue de %s ',
  'sky_str_format1'       => 'Se observaban <b>%s</b> a una altura de <b>%s</b> metros (<b>%s</b> pies)',
  'sky_str_clear'         => 'El cielo estaba <b>despejado</b>',
  'sky_str_format2'       => ', <b>%s</b> a una altura de <b>%s</b> metros (<b>%s</b> pies) y <b>%s</b> a una altura de <b>%s</b> metros (<b>%s</b> pies)',
  'sky_str_format3'       => ' y <b>%s</b> a una altura de <b>%s</b> metros (<b>%s</b> pies',
  'sky_cavok'             => 'There are no clouds below <b>1,524</b> meter (<b>5,000</b> feet)',
  'clouds'                => ' nubes',
  'clouds_cb'             => ' nubes cumulonimbus',
  'clouds_tcu'            => ' nubes cumulus muy altas',
  'visibility_format'     => 'La visibilidad era de <b>%s</b> kilometros (<b>%s</b> millas).',
  'wind_str_format1'      => 'soplaba a una velocidad de <b>%s</b> metros por segundo (<b>%s</b> millas por hora)',
  'wind_str_format2'      => ', con r&aacute;fagas de <b>%s</b> metros por segundo (<b>%s</b> millas por hora),',
  'wind_str_format3'      => ' provenientes del <b>%s</b>',
  'wind_str_calm'         => '<b>calmo</b>',
  'wind_vrb_long'         => 'variable directions',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' sensaci&oacute;n t&eacute;rmica era de <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'en la &uacute;ltima hora. ',
  'precip_last_6_hours'   => 'durante las &uacute;ltimas 3 a 6 horas. ',
  'precip_last_24_hours'  => 'durante las &uacute;ltimas 24 horas. ',
  'precip_snow'           => 'Se observaron <b>%s</b> mm (<b>%s</b> pulgadas) de nieve sobre el suelo. ',
  'temp_min_max_6_hours'  => 'La temperatura m&aacute;xima y m&iacute;nima registrada en las ultimas 6 horas fue de <b>%s</b> y <b>%s</b>&nbsp;&deg;C (<b>%s</b> y <b>%s</b>&nbsp;&deg;F). ',
  'temp_max_6_hours'      => 'La temperatura m&aacute;xima registrada en las ultimas 6 horas fue de <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'La temperatura m&iacute;nima registrada en las ultimas 6 horas fue de <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'La temperatura m&aacute;xima y m&iacute;nima registrada en las ultimas 24 horas fue de <b>%s</b> y <b>%s</b>&nbsp;&deg;C (<b>%s</b> y <b>%s</b>&nbsp;&deg;F). ',
  'runway_vis'            => 'The visibility for runway <b>%s</b> is <b>%s</b> meters (<b>%s</b> feet).',
  'runway_vis_min_max'    => 'The visibility for runway <b>%s</b> varies between <b>%s</b> meters (<b>%s</b> feet) and <b>%s</b> meters (<b>%s</b> feet).',
  'light'                 => 'Ligero ',
  'moderate'              => 'Moderado ',
  'Heavy'                 => 'Severo ',
  'nearby'                => 'Cercano ',
  'current_weather'       => 'El clima actual es <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p><b>%s</b> minutos atr&aacute;s, de las <b>%s</b> UTC, el viento %s en %s. La temperatura era de <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F), %s y la presi&oacute;n de <b>%s</b> hectopascales (hPa) (<b>%s</b> milibares (inHg)). La humedad relativa era de <b>%s%%</b>. %s %s %s %s %s</p></blockquote>'
  );

$wind_dir_text_short_array = array(
  'N',
  'N/NE',
  'NE',
  'E/NE',
  'E',
  'E/SE',
  'SE',
  'S/SE',
  'S',
  'S/SO',
  'SO',
  'O/SO',
  'O',
  'O/NO',
  'NO',
  'N/NO',
  'N');

$wind_dir_text_array = array(
  'Norte',
  'Norte/Noreste',
  'Noreste',
  'Este/Noreste',
  'Este',
  'Este/Sureste',
  'Sureste',
  'Sur/Sureste',
  'Sur',
  'Sur/Suroeste',
  'Suroeste',
  'Oeste/Suroeste',
  'Oeste',
  'Oeste/Noroeste',
  'Noroeste',
  'Norte/Noroeste',
  'Norte');

$weather_array = array(
  'MI' => 'Shallow ',
  'PR' => 'Parcial ',
  'BC' => 'Parches ',
  'DR' => 'Bajo Movimiento ',
  'BL' => 'Soplando ',
  'SH' => 'Lluvia(s) ',
  'TS' => 'Tormenta ',
  'FZ' => 'Helado',
  'DZ' => 'Lloviznoso ',
  'RA' => 'Lluvia ',
  'SN' => 'Nieve ',
  'SG' => 'Copos de Nieve ',
  'IC' => 'Cristales de Hielo ',
  'PE' => 'Bolitas de Hielo ',
  'GR' => 'Granizo ',
  'GS' => 'Granizo Peque&ntilde;o y/o Copos de Nieve ',
  'UP' => 'Desconocido ',
  'BR' => 'Bruma ',
  'FG' => 'Niebla ',
  'FU' => 'Humo ',
  'VA' => 'Ceniza Volc&aacute;nica ',
  'DU' => 'Polvareda ',
  'SA' => 'Arena ',
  'HZ' => 'Neblina ',
  'PY' => 'Roc&iacuteo',
  'PO' => 'Probable Aparici&oacute; de Polvo/Torbellino de Arena ',
  'SQ' => 'Aguaceros ',
  'FC' => 'Nubes de Toranado Huracanado ',
  'SS' => 'Tormenta de Arena/Tormenta de Polvo ');

$cloud_condition_array = array(
  'SKC' => 'despejado',
  'CLR' => 'despejado',
  'VV'  => 'visibilidad vertical',
  'FEW' => 'unas pocas nubes',
  'SCT' => 'dispersas',
  'BKN' => 'discontinuo',
  'OVC' => 'nublado');
?>
