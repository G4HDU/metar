<?php
/*
 * This file holds the Hungarian translation of PHP Weather. To use it,
 * Just include it in the main phpweather.inc file.
 *
 * Ez a fájl tartalmazza a "PHP Weather" programhoz használható magyar
 * nyelvû fordítást.
 * Ha használni akarjuk, a "demo.php" fájlban módosítani kell a
 * nyelvre vonatkozó "include('locale_en.inc');" hivatkozást 
 * erre: "include('locale_hu.inc');"
 *
 * Fordította: Gyulai Mihály  http://gyulai.freeyellow.com/
 * Utoljára módosítva: 2001-06-23
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
  'no_data'               => '<blockquote><p>Sajnos <b>nincs adat</b> a megadott helyhez: %s.</p></blockquote>',
  'mm_inches'             => '<b>%s</b> mm (<b>%s</b> inch)',
  'precip_a_trace'        => 'nyomokban',
  'precip_there_was'      => '%s lecsapódás volt ',
  'sky_str_format1'       => 'Az égbolt <b>%s</b> <b>%s</b> m magasságban (<b>%s</b> láb)',
  'sky_str_clear'         => 'Az égbolt <b>derült</b>',
  'sky_str_format2'       => ', <b>%s</b> <b>%s</b> m magasságban (<b>%s</b> láb) és <b>%s</b> <b>%s</b> m magasságban (<b>%s</b> láb)',
  'sky_str_format3'       => ' és <b>%s</b> <b>%s</b> m magasságban (<b>%s</b> láb)',
  'sky_cavok'             => 'Nincsenek felhõk <b>1,500</b> méter alatt',
  'clouds'                => ' felhõs',
  'clouds_cb'             => ' gomolyfelhõs',
  'clouds_tcu'            => ' viharfelhõs',
  'visibility_format'     => 'A látótávolság <b>%s</b> km.',
  'wind_str_format1'      => '<b>%s</b> m/s sebességgel fújt',
  'wind_str_format2'      => ', <b>%s</b> m/s-os széllökésekkel (<b>%s</b> mérföld/h),',
  'wind_str_format3'      => ' <b>%s</b> irányból',
  'wind_str_calm'         => '<b>nem fúj</b>',
  'wind_vrb_long'         => 'változó',
  'wind_vrb_short'        => 'VAR',
  'windchill'             => ' a hõérzet <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F) ',
  'precip_last_hour'      => 'az utolsó órában. ',
  'precip_last_6_hours'   => 'az utóbbi 3-6 órában. ',
  'precip_last_24_hours'  => 'az utóbbi 24 órában. ',
  'precip_snow'           => '<b>%s</b> mm (<b>%s</b> inch) hó van a felszínen. ',
  'temp_min_max_6_hours'  => 'A legmagasabb és legalacsonyabb hõmérsékletek az utóbbi 6 órában: <b>%s</b> és <b>%s</b>&nbsp;&deg;C (<b>%s</b> és <b>%s</b>&nbsp;&deg;F).',
  'temp_max_6_hours'      => 'A legmagasabb hõmérséklet az utóbbi 6 órában: <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_6_hours'      => 'A legalacsonyabb hõmérséklet az utóbbi 6 órában: <b>%s</b>&nbsp;&deg;C (<b>%s</b>&nbsp;&deg;F). ',
  'temp_min_max_24_hours' => 'A legmagasabb és legalacsonyabb hõmérséklet az utóbbi 24 órában: <b>%s</b> és <b>%s</b>&nbsp;&deg;C (<b>%s</b> és <b>%s</b>&nbsp;&deg;F). ',
  'runway_vis'            => 'A <b>%s</b> kifutópálya láthatósága, <b>%s</b> m (<b>%s</b> láb).',
  'runway_vis_min_max'    => 'A <b>%s</b> kifutópálya láthatósága változó <b>%s</b> m (<b>%s</b> láb) és <b>%s</b> m (<b>%s</b> láb) között.',
  'light'                 => 'könnyû ',
  'moderate'              => 'enyhe ',
  'Heavy'                 => 'erõs ',
  'nearby'                => 'közeli ',
  'current_weather'       => 'A pillanatnyi idõjárási jellemzõ: <b>%s</b>. ',
  'pretty_print_metar' => '<blockquote><p><b>%s</b> perccel ezelõtt,
<b>%s</b> UTC-kor, a szél %s (%s). A hõmérséklet <b>%s</b>&nbsp;&deg;C
(<b>%s</b>&nbsp;&deg;F), %s a légnyomás <b>%s</b> hPa (<b>%s</b>
Hgmm). Relatív páratartalom <b>%s%%</b>. %s %s %s %s %s
%s</p></blockquote>'
 );

$wind_dir_text_short_array = array(
  'É',
  'É/ÉK',
  'ÉK',
  'K/ÉK',
  'K',
  'K/DK',
  'DK',
  'D/DK',
  'D',
  'D/DNY',
  'DNY',
  'NY/DNY',
  'NY',
  'NY/ÉNY',
  'ÉNY',
  'É/ÉNY',
  'É');

$wind_dir_text_array = array(
  'Északi',
  'Észak/Északkeleti',
  'Északkeleti',
  'Kelet/Északkeleti',
  'Keleti',
  'Kelet/Délkeleti',
  'Délkeleti',
  'Dél/Délkeleti',
  'Déli',
  'Dél/Délnyugati',
  'Délnyugati',
  'Nyugat/Délnyugati',
  'Nyugati',
  'Nyugat/Északnyugati',
  'Északnyugati',
  'Észak/Északnyugati',
  'Északi');

$weather_array = array(
  'MI' => 'felszínes ',
  'PR' => 'részleges ',
  'BC' => 'szakadozott ',
  'DR' => 'enyhe légmozgás',
  'BL' => 'széllökés',
  'SH' => 'zápor',
  'TS' => 'zivatar',
  'FZ' => 'fagy',
  'DZ' => 'szitáló esõ',
  'RA' => 'esõ',
  'SN' => 'hó',
  'SG' => 'szemcsés hó',
  'IC' => 'jégkristály',
  'PE' => 'jégdara',
  'GR' => 'jégesõ',
  'GS' => 'apró jégesõ és/vagy hódara',
  'UP' => 'ismeretlen',
  'BR' => 'köd',
  'FG' => 'sûrû köd',
  'FU' => 'füst',
  'VA' => 'vulkáni hamu',
  'DU' => 'kiterjedt por',
  'SA' => 'homok',
  'HZ' => 'pára',
  'PY' => 'permet',
  'PO' => 'por/homok örvény',
  'SQ' => 'szélroham',
  'FC' => 'felhõtölcsér/tornádó/vízoszlop',
  'SS' => 'homokvihar/porvihar');

$cloud_condition_array = array(
  'SKC' => 'derült',
  'CLR' => 'tiszta',
  'VV'  => 'függõleges láthatóság',
  'FEW' => 'gyengén',
  'SCT' => 'szórványosan',
  'BKN' => 'szakadozottan',
  'OVC' => 'borult');
?>
