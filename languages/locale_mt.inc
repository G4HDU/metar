<?php
/*
 * This file holds the Maltese translation of PHP Weather. To use it,
 * just include it in the main phpweather.inc file.
 *
 * Din il-file fiha t-traduzzjoni bil-Malti ghall-PHP Weather. Biex tuzaha,
 * inkludiha go phpweather.inc.
 *
 * Author: Angelo Dalli <angelo_dalli@hotmail.com>
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
  'no_data'               => '<blockquote><p>Skuzana! Ma hemm <b>ebda informazzjoni</b> fuq %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> pulzieri)',
  'precip_a_trace'        => 'tracca',
  'precip_there_was'      => 'Kien hemm %s xita ',
  'sky_str_format1'       => 'Kien hemm <b>%s</b> f\'gholi ta\' <b>%s</b> metri (<b>%s</b> piedi)',
  'sky_str_clear'         => 'Is-sema kienet <b>cara</b>',
  'sky_str_format2'       => ', <b>%s</b> f\'gholi ta\' <b>%s</b> metri (<b>%s</b> piedi) u <b>%s</b> f\'gholi ta\' <b>%s</b> metri (<b>%s</b> piedi)',
  'sky_str_format3'       => ' u <b>%s</b> f\'gholi ta\' <b>%s</b> metri (<b>%s</b> piedi)',
  'sky_cavok'             => 'Ma kienx hemm shab taht l-<b>1,524</b> metri (<b>5,000</b> piedi)',
  'clouds'                => ' shab',
  'clouds_cb'             => ' shab cumulonimbus',
  'clouds_tcu'            => ' shab towering cumulus',
  'visibility_format'     => 'Il-vizibilita\' kienet ta\' <b>%s</b> kilometri (<b>%s</b> mili).',
  'wind_str_format1'      => 'qed jonfoh b\'velocita\' ta\' <b>%s</b> metri kull sekonda (<b>%s</b> mili fis-siegha)',
  'wind_str_format2'      => ', xi kultant jilhaq <b>%s</b> metri kull sekonda (<b>%s</b> mili fis-siegha),',
  'wind_str_format3'      => ' minn <b>%s</b>',
  'wind_str_calm'         => '<b>kalm</b>',
  'wind_vrb_long'         => 'direzzjoni varjabbli',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' the windchill was <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'fl-ahhar siegha. ',
  'precip_last_6_hours'   => 'fl-ahhar 3 sa 6 sieghat. ',
  'precip_last_24_hours'  => 'fl-ahhar 24 siegha. ',
  'precip_snow'           => 'Hemm <b>%s</b> mm (<b>%s</b> pulzieri) ta\' borra fl-art. ',
  'temp_min_max_6_hours'  => 'L-inqas u l-ghola temperaturi fl-ahhar 6 sieghat kienu <b>%s</b> u <b>%s</b>&nbsp;&deg;C (<b>%s</b> u <b>%s</b>&nbsp;&deg;F).',
  'temp_max_6_hours'      => 'L-ghola temperatura fl-ahhar 6 sieghat kienet <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'L-inqas temperatura fl-ahhar 6 sieghat kienet <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'L-inqas u l-ghola temperaturi fl-ahhar 24 siegha kienu <b>%s</b> u <b>%s</b>&nbsp;&deg;C (<b>%s</b> u <b>%s</b>&nbsp;&deg;F).',
  'runway_vis'            => 'Il-vizibilita\' ghar-runway <b>%s</b> hija ta\' <b>%s</b> metri (<b>%s</b> piedi).',
  'runway_vis_min_max'    => 'Il-vizibilita\' ghar-runway <b>%s</b> tvarja bejn <b>%s</b> metri (<b>%s</b> piedi) u <b>%s</b> metri (<b>%s</b> piedi).',
  'light'                 => 'Hafif ',
  'moderate'              => 'Moderat ',
  'Heavy'                 => 'Qawwi ',
  'nearby'                => 'Qrib ',
  'current_weather'       => 'It-temp bhalissa huwa <b>%s</b>. ',
  'pretty_print_metar'    => '<blockquote><p><b>%s</b> minuti ilu, ghall-habta ta\' <b>%s</b> UTC, ir-rih kien %s gewwa %s. It-temperatura kienet <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F), %s u l-pressjoni kienet <b>%s</b> hPa (<b>%s</b> inHg). L-umdita\' kienet <b>%s%%</b>. %s %s %s %s %s %s</p></blockquote>'
 );

$wind_dir_text_short_array = array(
  'T',
  'T/G',
  'G',
  'L/G',
  'L',
  'L/X',
  'X',
  'N/X',
  'N',
  'N/L',
  'L',
  'P/L',
  'P',
  'P/M',
  'M',
  'T/M',
  'T');

$wind_dir_text_array = array(
  'Tramuntana',
  'Tramuntana/Grigal',
  'Grigal',
  'Lvant/Grigal',
  'Lvant',
  'Lvant/Xlokk',
  'Xlokk',
  'Nofsinhar/Xlokk',
  'Nofsinhar',
  'Nofsinhar/Lbic',
  'Lbic',
  'Punent/Lbic',
  'Punent',
  'Punent/Majjistral',
  'Majjistral',
  'Tramuntana/Majjistral',
  'Tramuntana');

$weather_array = array(
  'MI' => 'Fil-Baxx ',
  'PR' => 'Parzjali ',
  'BC' => 'Ftit ',
  'DR' => 'Mixjin fil-Baxx ',
  'BL' => 'Jonfoh ',
  'SH' => 'Xita ',
  'TS' => 'Maltempata bir-Raghad ',
  'FZ' => 'Iffrizat',
  'DZ' => 'B\'Xita Hafifa ',
  'RA' => 'Bix-Xita ',
  'SN' => 'Bil-Borra ',
  'SG' => 'Bil-Borra Qawwija ',
  'IC' => 'Bis-Silg ',
  'PE' => 'Bix-Xita tas-Silg ',
  'GR' => 'Bix-Xita tas-Silg ',
  'GS' => 'Bix-Xita tas-Silg u/jew Borra ',
  'UP' => 'Mhux Maghruf ',
  'BR' => 'Bin-Nida ',
  'FG' => 'Bic-Cpar ',
  'FU' => 'Bid-Duhhan ',
  'VA' => 'Bit-Trab Volkaniku ',
  'DU' => 'B\'Hafna Trab ',
  'SA' => 'Bir-Ramel ',
  'HZ' => 'Bl-Arja Mcajpra ',
  'PY' => 'Bir-Raxx tal-Bahar',
  'PO' => 'Bi Tromba tat-Trab jew tar-Ramel ',
  'SQ' => 'B\'Mewg Qawwi ',
  'FC' => 'Tromba Urugan ',
  'SS' => 'B\'Maltempata tat-Trab jew tar-Ramel ');

$cloud_condition_array = array(
  'SKC' => 'cara',
  'CLR' => 'cara',
  'VV'  => 'vizibilita vertikali',
  'FEW' => 'xi ftit',
  'SCT' => 'ftit',
  'BKN' => 'hafna',
  'OVC' => 'msahhab');
?>
