<?php
/*
 * Questo file consente la traduzione dei termini in italiano. Per
 * usarlo, richiamarlo dal file phpweather.inc.
 *
 * Author: Fabio Parri <parri@utilia.it>
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
  'no_data'               => '<blockquote><p>Peccato! Non ci sono <b> dati</b> utilizzabili per %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> pollici)',
  'precip_a_trace'        => 'deboli',
  'precip_there_was'      => 'Ci sono %s di pioggia ',
  'sky_str_format1'       => 'Ci Sono <b>%s</b> a un\'altezza di <b>%s</b> metri (<b>%s</b> piedi)',
  'sky_str_clear'         => 'Il cielo &eacute;<b>chiaro</b>',
  'sky_str_format2'       => ', <b>%s</b> a una altezza di <b>%s</b> metri (<b>%s</b> piedi) e <b>%s</b> a una altezza di <b>%s</b> metri (<b>%s</b> piedi)',
  'sky_str_format3'       => ' e <b>%s</b> a una altezza di <b>%s</b> metri (<b>%s</b> piedi)',
  'sky_cavok'             => 'Non ci sono nuvole sotto i <b>1,524</b> metri (<b>5,000</b> piedi)',
  'clouds'                => ' nuvole',
  'clouds_cb'             => ' cumulonembi',
  'clouds_tcu'            => ' nubi altocumuli',
  'visibility_format'     => 'La visibilt&aacute; &eacute; di <b>%s</b> kilometri (<b>%s</b> miglia).',
  'wind_str_format1'      => 'a una velocit&aacute; di <b>%s</b> metri al secondo (<b>%s</b> miglia per ora)',
  'wind_str_format2'      => ',con folate fino a <b>%s</b> metri al secondo (<b>%s</b> miglia per ora),',
  'wind_str_format3'      => ' da <b>%s</b>',
  'wind_str_calm'         => '<b>calma</b>',
  'wind_vrb_long'         => 'direzione variabile',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' potere raffreddante del vento era del <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'nella ultima ora. ',
  'precip_last_6_hours'   => 'nelle ultime 3-6 ore. ',
  'precip_last_24_hours'  => 'nelle ultime 24 ore. ',
  'precip_snow'           => 'Ci sono <b>%s</b> mm (<b>%s</b> pollici) di neve sul suolo. ',
  'temp_min_max_6_hours'  => 'La temperatura massima nelle ultime 6 ore era <b>%s</b> e <b>%s</b>&nbsp;&deg;C (<b>%s</b> and <b>%s</b>&nbsp;&deg;F).',
  'temp_max_6_hours'      => 'La temperatura massima nelle ultime 6 ore era <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'La temperatura minima  nelle ultime 6 ore era <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'Le temperature massima e minima nelle ultime 24 ore erano <b>%s</b> e <b>%s</b>&nbsp;&deg;C (<b>%s</b> e <b>%s</b>&nbsp;&deg;F). ',
  'runway_vis'            => 'La visibilit&aacute; sulla pista <b>%s</b> &eacute; <b>%s</b> metri (<b>%s</b> feet).',
  'runway_vis_min_max'    => 'La visibilit&aacute; sulla pista  <b>%s</b> varia tra <b>%s</b> metri(<b>%s</b> piedi) e<b>%s</b> metri (<b>%s</b> piedi).',
  'light'                 => 'Lampi ',
  'moderate'              => 'Moderato ',
  'Heavy'                 => 'Intenso ',
  'nearby'                => 'Vicino ',
  'current_weather'       => 'Le condizioni attuali sono <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p><b>%s</b> minuti fa, alle <b>%s</b> UTC, il vento soffiava %s, a %s. La temperatura era di <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F), %s e la pressione era <b>%s</b> hPa (<b>%s</b> inHg). L\'umidit&aacute; relativa era del <b>%s%%</b>. %s %s %s %s %s %s</p></blockquote>'
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
  'Nord',
  'Nord/Nordest',
  'Nordest',
  'Est/Nordest',
  'Est',
  'Est/Sudest',
  'Sudest',
  'Sud/Sudest',
  'Sud',
  'Sud/Sudovest',
  'Sudovest',
  'Ovest/Sudovest',
  'Ovest',
  'Ovest/Nordovest',
  'Nordovest',
  'Nord/Nordovest',
  'Nord');

$weather_array = array(
  'MI' => 'Shallow ',
  'PR' => 'Parziale',
  'BC' => 'Porzione',
  'DR' => 'Debole deriva',
  'BL' => 'Soffiante ',
  'SH' => 'Acquazzone ',
  'TS' => 'Tempesta ',
  'FZ' => 'Gelato',
  'DZ' => 'Pioviggina ',
  'RA' => 'Piove ',
  'SN' => 'Nevica ',
  'SG' => 'Grani di neve ',
  'IC' => 'Cristalli di ghiaccio ',
  'PE' => 'Ghiaccio a pallini ',
  'GR' => 'Grandina ',
  'GS' => 'Piccoli fiocchi e/o neve a pallini ',
  'UP' => 'Precipitazione sconosciuta ',
  'BR' => 'Foschia ',
  'FG' => 'Nebbia',
  'FU' => 'Fumo',
  'VA' => 'Cenere vulcanica',
  'DU' => 'Polvere estesa',
  'SA' => 'Sabbia ',
  'HZ' => 'Caligine',
  'PY' => 'Vapore',
  'PO' => 'Turbini di sabbia/polvere ',
  'SQ' => 'Burrasca ',
  'FC' => 'Nube di tornado ',
  'SS' => 'Tempesta di sabbia/polvere');

$cloud_condition_array = array(
  'SKC' => 'sgombro',
  'CLR' => 'sgombro',
  'VV'  => 'visibi lit&aacute; verticale',
  'FEW' => 'un pò di',
  'SCT' => 'sporadiche',
  'BKN' => 'agitato',
  'OVC' => 'nuvoloso');

?>