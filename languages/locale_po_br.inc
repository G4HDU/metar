<?php
/*
 * This file holds the Brazilian Portuguese translation of PHP Weather.
 * To use it, just include it in the main phpweather.inc file.
 *
 * Author: Murilo Pinto <emlondrina@emlondrina.com>
 *
 * Updates by: João Luiz <JoaoLuiz.DaCosta@MB.TU-Ilmenau.DE>
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
  'no_data'               => '<blockquote><p>Sorry! There is <b>no data</b>
available for %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> polegadas)',
  'precip_a_trace'        => 'pouca',
  'precip_there_was'      => 'Houve %s de precipitação ',
  'sky_str_format1'       => 'Havia <b>%s</b> a uma altura de <b>%s</b>
metros (<b>%s</b> pés)',
  'sky_str_clear'         => 'O céu estava <b>claro</b>',
  'sky_str_format2'       => ', <b>%s</b> a uma altura de <b>%s</b> metros
(<b>%s</b> pés) e <b>%s</b> a uma altura de <b>%s</b>  metros (<b>%s</b>
feet)',
  'sky_str_format3'       => ' e <b>%s</b> a uma altura de <b>%s</b> metros
(<b>%s</b> pés)',
  'sky_cavok'             => 'Não havia nuvens abaixo de <b>1.524</b> metros
(<b>5,000</b> pés)',
  'clouds'                => ' nuvens',
  'clouds_cb'             => ' nuvens cúmulo-nimbos',
  'clouds_tcu'            => ' cúmulo-nimbos altos',
  'visibility_format'     => 'A visibilidade era <b>%s</b> quilômetros
(<b>%s</b> milhas).',
  'wind_str_format1'      => 'ventando a uma velocidade de <b>%s</b> metros
por segundo (<b>%s</b> milhas por hora)',
  'wind_str_format2'      => ', com rajadas de <b>%s</b> metros por segundo
(<b>%s</b> milhas por hora),',
  'wind_str_format3'      => ' de <b>%s</b>',
  'wind_str_calm'         => '<b>calmo</b>',
  'wind_vrb_long'         => 'direção variável',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => '  a sensação térmica era de <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'na última hora. ',
  'precip_last_6_hours'   => 'nas últimas 3 a 6 horas. ',
  'precip_last_24_hours'  => 'na últimas horas 24 horas. ',
  'precip_snow'           => 'Há <b>%s</b> mm (<b>%s</b> polegadas) de neve
no solo. ',
  'temp_min_max_6_hours'  => 'As temperaturas máxima e mínima nas últimas 6
horas foram <b>%s</b> e <b>%s</b>&nbsp;&deg;C (<b>%s</b> e <b>%s</b>&nbsp;&deg;F).',
  'temp_max_6_hours'      => 'A temperatura máxima nas últimas 6 horas foi
<b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'A temperatura mínima nas últimas 6 horas foi
<b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'As temperaturas máxima e mínima nas últimas 6
horas foram <b>%s</b> e <b>%s</b>&nbsp;&deg;C (<b>%s</b> e <b>%s</b>&nbsp;&deg;F). ',
  'runway_vis'            => 'A visibilidade para decolagem <b>%s</b> é
<b>%s</b> metros (<b>%s</b> pés).',
  'runway_vis_min_max'    => 'A visibilidade no Aeroporto de <b>%s</b> varia
entre <b>%s</b> metros (<b>%s</b> pés) e <b>%s</b> metros (<b>%s</b> pés).',
  'light'                 => 'Leve ',
  'moderate'              => 'Moderado ',
  'Heavy'                 => 'Pesado ',
  'nearby'                => 'Próximo de ',
  'current_weather'       => 'Tempo atual é <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p><b>%s</b> minutos atrás, às
<b>%s</b> UTC, o vento estava %s em %s. A temperatura era de <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F), %s e a pressão do ar estava em <b>%s</b>
hPa (<b>%s</b> inHg). A umidade relativa era de <b>%s%%</b>. %s %s %s %s %s
%s</p></blockquote>'
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
  'S/SW',
  'SW',
  'W/SW',
  'W',
  'W/NW',
  'NW',
  'N/NW',
  'N');

$wind_dir_text_array = array(
  'Norte',
  'Nór-Nordeste',
  'Nordeste',
  'És-Nordeste',
  'Leste',
  'És-Sudeste',
  'Sudeste',
  'Sul-Sudeste',
  'Sul',
  'Sul-Sudoeste',
  'Sudoeste',
  'Oés-Sudoeste',
  'Oeste',
  'Oeste/Noroeste',
  'Noroeste',
  'Nór-Noroeste',
  'Norte');

$weather_array = array(
  'MI' => 'Shallow ',
  'PR' => 'Parcial ',
  'BC' => 'Patches ',
  'DR' => 'Low Drifting ',
  'BL' => 'Ventando ',
  'SH' => 'Pancada(s) de chuva ',
  'TS' => 'Temporal com trovões ',
  'FZ' => 'Esfriando',
  'DZ' => 'Garoa ',
  'RA' => 'Chuva ',
  'SN' => 'Neve ',
  'SG' => 'Flocos de Neve ',
  'IC' => 'Cristais de Gelo ',
  'PE' => 'Granizo ',/*Ice Pellets*/
  'GR' => 'Granizo ',
  'GS' => 'Granizo Leve ou Snow Pellets ',
  'UP' => 'Desconhecido ',
  'BR' => 'Neblina ',
  'FG' => 'Nevoeiro ',
  'FU' => 'Fumaça ',
  'VA' => 'Cinzas Vulcânicas ',
  'DU' => 'Poeira Dispersa ',
  'SA' => 'Areia ',
  'HZ' => 'Névoa Densa ',
  'PY' => 'Spray',
  'PO' => 'Well-Developed Dust/Redemoinhos de Areia ',
  'SQ' => 'Ventania ',
  'FC' => 'Chaminé de Nuvens, Tornado ou Tromba d`água ',
  'SS' => 'Tempestade de Areia ');

$cloud_condition_array = array(
  'SKC' => 'limpo',
  'CLR' => 'limpo',
  'VV'  => 'visibilidade vertical',
  'FEW' => 'poucas',
  'SCT' => 'dispersas',
  'BKN' => 'parcialmente nublado',
  'OVC' => 'nublado');
?>
