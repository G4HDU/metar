<?php
require_once("../../class2.php");
error_reporting(E_ALL);
require_once("includes/setup_class.php");
$fred=new metarSetup();
$fred->importCountries();
exit;
require_once(HEADERF);
define(WATCH,"font-weight: bold;
	color: orange;
	text-decoration: none;");
	define(WARN,"font-weight: bold;
	color: red;");

/*
Weather Decoder v1.2
by Christopher Curtis  - http://www.curtisfamily.org.uk

inspired by (and including some great code from) the Wordpress "Weather Report" plug-in
by "Pericat" - http://pericat.ca
itself inspired and using code from "phpweather"  by Martin Geisler (<gimpster@gimpster.com>),
http://sourceforge.net/projects/phpweather/

 - internet delivery of weather data is not regarded as secure or reliable enough for "operational" purposes
 NEVER RELY ON THE OUTPUT OF THIS SCRIPT TO MAKE DECISIONS ABOUT ANYTHING IN WHICH THE WEATHER FORECAST
 AND ITS INTERPRETATION COULD BE AN ISSUE OF SAFETY. I GIVE NO WARRANTY OF ANY KIND THAT THIS SCRIPT WILL WORK AT ALL OR WORK PROPERLY
 AND THERE IS NO WARRANTY OF ANY KIND THAT THE NWS INTERNET DATA IS ACCURATE, UP TO DATE OR MEANINGFUL.

 What do you expect for nothing?!

 - The UK Met Office is very possessive and legally fierce about what it regards as its data, even when this is freely published by other countries.
   This script is provided for personal, completely non-commercial use and experimentation only

This php script fetches the "Meteorological Aviation Report" (METAR) and "Terminal Area Forecast" (TAF) for an airport weather station
from the archive at the National Weather Service
and decodes it into reasonable English

This is opensource software - do what you want with it but do acknowledge the people who
made it - it did take some hours! If in doubt, refer to the GNU licence.

To use it,
edit (using a text editor like "notepad" - not a word processor) the lines above to include the 4-letter
airport ICAO codes and the airports' real names in the lists above. You can add additional ones provided you copy the format exactly.
Then place the file onto a web server which is php enabled (many of them)
- it does not require database access -
then simply point your browser at the file or create a link
e.g. http://www.myserver.com/wx.php

Known issues
 - it is not well tested yet, so there can easily be things that might break it
 - TAFS themselves may be coded wrongly - this will produce odd results
 - the archive may update irregularly (or not at all) for all but the major airports - I have no control over that!
 - you can edit this block of comments out - it is the "readme".

Revision History
This script started life as "TAF decoder"
0.1 2004/07/08 - first go - problems with US visibilities
0.2 2004/07/09 - fixed US visibilities, now handles RMK fields, added handling of CB and TCU
0.3 2004/07/10 - fixed dates, added windspeed conversion, added wmo beaufort description to wind
0.4 2004/07/15 - fixed so now handles RADZ and RASN correctly
0.5 2004/07/21 - fixed display of dates, altered parse routines for output to read a little more like English
2004/07/22 - added metar translation so "taf decoder" becomes "weather decoder" v1.0
WEATHER decoder
1.0 2004/07/22 - added the METAR report to the TAF forecast and provided a menu to choose airports"
1.1 2004/07/23 - now handles codes for "recent" and "in the vicinity"
1.2 2004/08/01 -  handles military colour codes - some bug fixes
1.3 2004/08/16 - some bug fixes to military codes and temperature handling
1.4 2004/08/30 - uses css styles and formatting to present information more clearly

*/
// either produce form to choose airport or produce the output once airport is chosen
// stage is a hidden field with value set to 'process' once a choice has been made

$index = 0;
$_POST['airport'] = "EGGPLiverpool";

$wx_text.=process();
$wx_text.="<br /><br />Current Conditions<br /><br /><img src='/wdl/metar.gif' style='border:0px;' alt='Current Liverpool Metar' title='Current Liverpool Metar' />";
$ns->tablerender("Current Forecast",$wx_text);

require_once(FOOTERF);
exit;
function process()
{
    $index = 0; // points to current block within the taf
    $taf = ""; //an array - each element holds one block of the taf
    $metar = ""; //an array - each element holds one block of the metar
    $icao = substr($_POST['airport'], 0, 4);
    $station = substr($_POST['airport'], 4);
    $icao="EGGP";
    $station="Liverpool";
    #$text .= "<h1>$station</h1>";
    // $text.= "<span class='coded'>Coded Weather Report: ";
    // ******** MAIN PROGRAM **********
    #$metar = get_metar($icao); //retreive metar from nws
    // $text.= "<hr><h3>Weather Report</h3>";
   # $rp_details = rp_details($metar); // extract details of report (e.g. date and time) from metar
    global $index;
    // $text.=$rp_details; //print it
    do // loop through each block parsing & printing it in turn
    {
        $type = get_type($metar);
        switch ($type)
        {
            case "wind":
                $line = parse_wind($metar);
                break;
            case "vari":
                $line = parse_vari($metar);
                break;
            case "vis":
                $line = parse_vis($metar);
                break;
            case "wx":
                $line = parse_wx($metar);
                break;
            case "heat":
                $line = parse_temp($metar);
                break;
            case "tempo":
                $line = parse_met_tempo($metar);
                break;
            case "code":
                $line = parse_mil_code($metar);
                break;
            case "sky":
                $line = parse_sky($metar);
                break;
            case "rvr":
                $line = parse_rvr($metar);
                break;
            case "press":
                $line = parse_pressure($metar);
                break;
            case "rmk":
                $line = parse_rmk($metar);
                break;
        }
        // $text.= $line;
    }
    while ($index < count($metar)-1);
    $index = 0;
    // $text.= "<br /><hr><span class='coded'>Coded Weather Forecast: ";
    $taf = get_taf($icao); // retreive taf from nws
    $text .= "<h3>Weather Forecast for the Liverpool Area</h3>";
    $fc_details = fc_details($taf); // extract details of forecast (e.g. date and time) from taf

    $text .= $fc_details; //print it
    do // loop through each block parsing & printing it in turn
    {
        $type = get_type($taf);

        switch ($type)
        {
            case "wind":
                $line = parse_wind($taf);
                break;
            case "vis":
                $line = parse_vis($taf);
                break;
            case "wx":
                $line = parse_wx($taf);
                break;
            case "sky":
                $line = parse_sky($taf);
                break;
            case "prob":
                $line = parse_prob($taf);
                break;
            case "tempo":
                $line = parse_tempo($taf);
                break;
            case "from":
                $line = parse_from($taf);
                break;
            case "becmg":
                $line = parse_becmg($taf);
                break;
            case "rmk":
                $line = parse_rmk($taf);
                break;
        }
        $text .= $line;

    }
    while ($index < (count($taf)-1));

    return $text;
}
// ******** END MAIN PROGRAM **********
// -------- get_metar --------
// retrieves metar file from nws archive, returns an array, where each member is one block of the metar
function get_metar($icao)
{
    $host = 'weather.noaa.gov';
    $path = '/pub/data/observations/metar/stations/';
    $rawfile = 'http://' . $host . $path . $icao . '.TXT';
    $res = '';

    $res = @file($rawfile);

    if (!$res)
    {
        ini_set('user_agent', 'MSIE 4\.0b2;');

        $mf = @fopen($rawfile, 'rb');
        if ($mf)
        {
            $res = fread($mf, 8192);
            fclose($mf);
        }
        if (!$res)
        {
            return '';
        }
    }

    $raw_metar = ereg_replace("[\n\r ]+", ' ', trim(implode(' ', (array)$res)));
    // echo $raw_metar . "</span>";
    $parts = explode(' ', $raw_metar);
    $part_count = count($parts);
    for ($i = 0; $i < $part_count; $i++)
    {
        $metar[$i] = $parts[$i];
    }
    return($metar);
}
// -------- get_taf --------
// retrieves taf file from nws archive, returns an array, where each member is one block of the taf
function get_taf($icao)
{
    if (file_exists("taf.php") && filemtime("taf.php") > (time()-(30*60)))
    {
        $ft = fopen("taf.php", "r");
        $taffile = fread($ft,4096);
        fclose($ft);
        $taf=unserialize($taffile);
    }
    else
    {
        $host = 'weather.noaa.gov';
        $path = '/pub/data/forecasts/taf/stations/';
        $rawfile = 'http://' . $host . $path . $icao . '.TXT';
        $res = '';

        $res = @file($rawfile);

        if (!$res)
        {
            ini_set('user_agent', 'MSIE 4\.0b2;');

            $mf = @fopen($rawfile, 'rb');
            if ($mf)
            {
                $res = fread($mf, 8192);
                fclose($mf);
            }
            if (!$res)
            {
                return '';
            }
        }

        $raw_taf = ereg_replace("[\n\r ]+", ' ', trim(implode(' ', (array)$res)));
        // echo $raw_taf . "</span>";
        $parts = explode(' ', $raw_taf);
        $part_count = count($parts);
        for ($i = 0; $i < $part_count; $i++)
        {
            $taf[$i] = $parts[$i];
        }
        $taffile = serialize($taf);
        $ft = fopen("taf.php", "w");
        fwrite($ft, $taffile);
        fclose($ft);
    }

    return($taf);
}
// -------- rp_details --------
// extracts details about the report (e.g. date, time) from the metar
function rp_details($metar)
{
    global $index;
    $issued = "<b>Report issued:</b> " . $metar[0] . " at " . $metar[1] . " UTC<br />";
    $rp_details = $issued . "<br />";
    $index = 3;
    return ($rp_details);
}
// -------- fc_details --------
// extracts details about the forecast (e.g. date, time, validity) from the taf
function fc_details($taf)
{
    global $index;
    $temp=explode("/",$taf[0]);
    $intdate=mktime(0,0,0,$temp[1],$temp[2],$temp[0]);
    $newdate=date("l jS F Y",$intdate);
    $issued = "<b>Forecast issued:</b> " . $newdate . " at " . $taf[1] . " UTC<br />";
    $valid = "<b>Forecast valid: </b>";
    if (substr($taf[4], 0, 1) == "0")
    {
        $valid_d = substr($taf[5], 1, 1);
    }
    else
    {
        $valid_d = substr($taf[5], 0, 2);
    }
    $valid .= $valid_d;
    $valid_d_2 = $valid_d + 1;
    $valid .= stthnd($valid_d);
    $t1 = substr($taf[5], 2, 2);
    $t2 = substr($taf[5], 4, 2);
    $valid .= " from " . $t1 . ":00 to ";
    if ($t1 > $t2)
    {
        $valid .= $valid_d_2 . stthnd($valid_d_2) . " until ";
    }
    $valid .= $t2 . ":00 <br />";
    $fc_details = $airport . $issued . $valid . "<br />";
    $index = 5;
    return ($fc_details);
}

function stthnd($v1)
{
    switch ($v1)
    {
        case "1":
            $v2 = "st ";
            break;
        case "2":
            $v2 = "nd ";
            break;
        case "3":
            $v2 = "rd ";
            break;
        case "21":
            $v2 = "st";
            break;
        case "22":
            $v2 = "nd";
            break;
        case "23":
            $v2 = "rd";
            break;
        case "31":
            $v2 = "st";
            break;
        default:
            $v2 = "th ";
            break;
    }
    $v2 .= " ";
    return ($v2);
}
// -------- get_type --------
// determines type of block and returns type in a string
function get_type ($taf)
{
    global $index;
    $pattern = "(SKC)|(CLR)|(SCT)|(OVC)|(BKN)|(FEW)";
    $pattern2 = "(BLU)|(YLO)|(YLO1)|(YLO2)|(AMB)|(RED)|(WHI)|(WHT)|(GRN)";
    $index ++;
    $block = $taf[$index];
    if (substr($block, 0, 4) == "PROB")
    {
        $type = "prob";
    } elseif ($block == "CAVOK")
    {
        $type = "vis";
    } elseif (eregi($pattern2, $block))
    {
        $type = "code";
    } elseif (substr($block, 0, 2) == "FM")
    {
        $type = "from";
    } elseif ($block == "BECMG")
    {
        $type = "becmg";
    } elseif ((is_numeric(substr($block, 0, 5))) && (strlen($block) > 4) && (substr($block, 0, 1) < '4'))
    {
        $type = "wind";
    } elseif (substr($block, 0, 3) == "VRB")
    {
        $type = "wind";
    } elseif (((is_numeric($block)) && (strlen($block) == 4)) or (substr($block, -2, 2) == "SM"))
    {
        $type = "vis";
    } elseif (eregi($pattern, substr($block, 0, 3)))
    {
        $type = "sky";
    } elseif ((substr($block, 2, 1) == "/") or (substr($block, 0, 1) == "M"))
    {
        $type = "heat";
    } elseif ((substr($block, 0, 1) == "R") && (is_numeric(substr($block, 1, 1))))
    {
        $type = "rvr";
    } elseif ((substr($block, 0, 1) == "Q") or ((substr($block, 0, 1) == "A") and (is_numeric(substr($block, 1, 1)))))
    {
        $type = "press";
    } elseif (substr($block, 3, 1) == "V")
    {
        $type = "vari";
    } elseif ($block == "TEMPO")
    {
        $type = "tempo";
    } elseif ($block == "RMK")
    {
        $type = "rmk";
    }
    else
    {
        $type = "wx";
    }
    return ($type);
}
// ++++++++ PARSING FUNCTIONS ++++++++
// Each function parses a block of one type
// sub-functions are listed with each parsing function
function parse_wind($taf)
{
    global $index;
    if (substr($taf[$index], 3, 1) == "0")
    {
        $ws = substr($taf[$index], 4, 1);
    }
    else
    {
        $ws = substr($taf[$index], 3, 2);
    }
    $bf1 = parse_bf1($ws);
    $bf2 = parse_bf2($ws);
    if (substr($taf[$index], 0, 3) == "VRB")
    {
        $wind = "<b>Wind:</b> variable $bf1 at ";
    } elseif (substr($taf[$index], 0, 3) == "000")
    {
        $wind = "<b>Wind:</b> calm ";
    }
    else
    {
        $windrose = convert_windrose_english(substr($taf[$index], 0, 3));
    }
    if ($wind == "")
    {
        $wind = "<b>Wind:</b> " . $bf1 . " " . $windrose . " (" . substr($taf[$index], 0, 3) . " degrees) at ";
    }
    $wind .= $ws . " knots (" . round($ws * 1.15) . " mph, " . round($ws * 1.85) . " kph, " . $bf2 . ")";
    if ((strlen($taf[$index]) > 5) && (substr($taf[$index], 5, 1) == "G"))
    {
        $gs = substr($taf[$index], 6, 2);
        $wind .= " <span style='".WATCH."'>gusting to " . $gs . " knots (" . round($gs * 1.15) . " mph " . round($gs * 1.85) . " kph)</span><br />";
    }
    else
    {
        $wind .= "<br />";
    }
    $line = $wind;
    return ($line);
}

function convert_windrose_english ($compass)
{
    if ($compass > '360')
    {
        $windrose = '';
    } elseif ($compass == 'VRB')
    {
        $windrose = 'variable';
    } elseif (($compass <= '022') || ($compass >= '337'))
    {
        $windrose = 'from the north';
    } elseif (($compass <= '067') && ($compass >= '023'))
    {
        $windrose = 'from the northeast';
    } elseif (($compass <= '112') && ($compass >= '068'))
    {
        $windrose = 'from the east';
    } elseif (($compass <= '157') && ($compass >= '113'))
    {
        $windrose = 'from the southeast';
    } elseif (($compass <= '202') && ($compass >= '158'))
    {
        $windrose = 'from the south';
    } elseif (($compass <= '247') && ($compass >= '203'))
    {
        $windrose = 'from the southwest';
    } elseif (($compass <= '292') && ($compass >= '248'))
    {
        $windrose = 'from the west';
    } elseif (($compass <= '336') && ($compass >= '293'))
    {
        $windrose = 'from the northwest';
    }
    return ($windrose);
}

function parse_bf1($ws)
{
    if ($ws < 1)
    {
        $bf = "calm";
    } elseif (($ws >= 1) && ($ws <= 3))
    {
        $bf = "light air";
    } elseif (($ws >= 4) && ($ws <= 6))
    {
        $bf = "light breeze";
    } elseif (($ws >= 7) && ($ws <= 10))
    {
        $bf = "gentle breeze";
    } elseif (($ws >= 11) && ($ws <= 16))
    {
        $bf = "moderate breeze";
    } elseif (($ws >= 17) && ($ws <= 21))
    {
        $bf = "<span style='".WATCH."'>fresh breeze</span>";
    } elseif (($ws >= 22) && ($ws <= 27))
    {
        $bf = "<span style='".WATCH."'>strong breeze</span>";
    } elseif (($ws >= 28) && ($ws <= 33))
    {
        $bf = "<span style='".WATCH."'>near gale</span>";
    } elseif (($ws >= 34) && ($ws <= 40))
    {
        $bf = "<span style='".WARN."'>gale</span>";
    } elseif (($ws >= 41) && ($ws <= 47))
    {
        $bf = "<span style='".WARN."'>severe gale</span>";
    } elseif (($ws >= 48) && ($ws <= 55))
    {
        $bf = "<span style='".WARN."'>storm force winds</span>";
    } elseif (($ws >= 56) && ($ws <= 63))
    {
        $bf = "<span style='".WARN."'>violent storm force winds</span>";
    } elseif ($ws >= 64)
    {
        $bf = "<span style='".WARN."'>hurricane force winds</span>";
    }
    return ($bf);
}

function parse_bf2($ws)
{
    if ($ws < 1)
    {
        $bf = "Force 0";
    } elseif (($ws >= 1) && ($ws <= 3))
    {
        $bf = "Force 1";
    } elseif (($ws >= 4) && ($ws <= 6))
    {
        $bf = "Force 2";
    } elseif (($ws >= 7) && ($ws <= 10))
    {
        $bf = "Force 3";
    } elseif (($ws >= 11) && ($ws <= 16))
    {
        $bf = "Force 4";
    } elseif (($ws >= 17) && ($ws <= 21))
    {
        $bf = "Force 5";
    } elseif (($ws >= 22) && ($ws <= 27))
    {
        $bf = "Force 6";
    } elseif (($ws >= 28) && ($ws <= 33))
    {
        $bf = "Force 7";
    } elseif (($ws >= 34) && ($ws <= 40))
    {
        $bf = "Force 8";
    } elseif (($ws >= 41) && ($ws <= 47))
    {
        $bf = "Force 9";
    } elseif (($ws >= 48) && ($ws <= 55))
    {
        $bf = "Force 10";
    } elseif (($ws >= 56) && ($ws <= 63))
    {
        $bf = "Force 11";
    } elseif ($ws >= 64)
    {
        $bf = "Force 12";
    }
    return ($bf);
}

function parse_vis($taf)
{
    global $index;
    if (substr($taf[$index], -2, 2) == "SM")
    {
        $vtype = "US";
    }
    else
    {
        $vtype = "EU";
    }
    switch ($vtype)
    {
        case "US" :
            if (substr($taf[$index], 0, 1) == "P")
            {
                $vis = "<b>Visibility:</b> more than " . substr($taf[$index], 1, 1) . " statute miles<br />";
            }
            else
            {
                $vis = "<b>Visibility:</b> " . substr($taf[$index], 0, 1) . " statute miles<br />";
            }
            break;
        case "EU":
            if ($taf[$index] == "9999")
            {
                $vis = "<b>Visibility:</b> 10km or more<br />";
            }
            else
            {
                if (substr($taf[$index], 0, 3) == "CAV")
                {
                    $vis = "<b>Weather:</b> good visibility and no low cloud (ceiling and visibility OK)<br />";
                }
                else
                {
                    $vis = "<b>Visibility:</b> " . $taf[$index] . " metres <br />";
                }
            }
            break;
    }
    return ($vis);
}

function parse_wx($taf)
{
    global $index;
    $first = substr($taf[$index], 0, 1);
    $isqual = 0;
    $qual = "";
    $qual1 = "";
    $wxtype = "";
    switch ($first)
    {
        case "+":
            $qual1 = "<span style='".WARN."'>heavy </span>";
            $isqual = 1;
            break;
        case "-":
            $qual1 = "light ";
            $isqual = 1;
            break;
        default:
            $qual1 = "";
            break;
    }
    $first_two = substr($taf[$index], $isqual, 2);
    switch ($first_two)
    {
        case "MI":
            $qual = "shallow ";
            $isqual += 2;
            break;
        case "BC":
            $qual = "<span style='".WATCH."'>patches of </span>";
            $isqual += 2;
            break;
        case "DR":
            $qual = "<span style='".WARN."'>drifting </span>";
            $isqual += 2;
            break;
        case "BL":
            $qual = "<span style='".WARN."'>blowing </span>";
            $isqual += 2;
            break;
        case "SH":
            $qual = "<span style='".WATCH."'>showers of </span>";
            $isqual += 2;
            break;
        case "TS":
            $qual = "<span style='".WARN."'>thunderstorm with </span>";
            $isqual += 2;
            break;
        case "FZ":
            $qual = "<span style='".WARN."'>freezing </span>";
            $isqual += 2;
            break;
        case "RE":
            $qual = "recent ";
            $isqual += 2;
            break;
        case "VC":
            $qual = "nearby ";
            $isqual += 2;
            break;
        case "PR":
            $qual = "partial ";
            $isqual += 2;
            break;
        default:
            $qual = "";
            break;
    }
    $length = strlen($taf[$index]) - $isqual;
    $wxpart = substr($taf[$index], $isqual, $length);
    switch ($wxpart)
    {
        case "NOSIG":
            $wxtype = "no significant change expected";
            break;
        case "DZ":
            $wxtype = "drizzle ";
            break;
        case "SH":
            $wxtype = "<span style='".WATCH."'>showers </span>";
            break;
        case "TS":
            $wxtype = "<span style='".WARN."'>thunderstorm </span>";
            break;
        case "RA":
            $wxtype = "<span style='".WATCH."'>rain </span>";
            break;
        case "RADZ":
            $wxtype = "<span style='".WATCH."'>rain and drizzle </span>";
            break;
        case "RAGR":
            $wxtype = "<span style='".WATCH."'>rain and hail </span>";
            break;
        case "SN":
            $wxtype = "<span style='".WARN."'>snow </span>";
            break;
        case "RASN":
            $wxtype = "<span style='".WATCH."'>sleet </span>";
            break;
        case "SG":
            $wxtype = "<span style='".WATCH."'>snow grains </span>";
            break;
        case "IC":
            $wxtype = "<span style='".WARN."'>ice crystals </span>";
            break;
        case "PL":
            $wxtype = "<span style='".WARN."'>ice pellets </span>";
            break;
        case "GR":
            $wxtype = "<span style='".WARN."'>hail </span>";
            break;
        case "GS":
            $wxtype = "<span style='".WATCH."'>small Hail </span>";
            break;
        case "BR":
            $wxtype = "mist ";
            break;
        case "FG":
            $wxtype = "<span style='".WARN."'>fog </span>";
            break;
        case "FU":
            $wxtype = "smoke ";
            break;
        case "DU":
            $wxtype = "dust ";
            break;
        case "SA":
            $wxtype = "sand ";
            break;
        case "HZ":
            $wxtype = "haze ";
            break;
        case "PY":
            $wxtype = "spray ";
            break;
        case "VA":
            $wxtype = "volcanic ash ";
            break;
        case "PO":
            $wxtype = "dust devils ";
            break;
        case "SQ":
            $wxtype = "<span style='".WARN."'>squalls </span>";
            break;
        case "SS":
            $wxtype = "<span style='".WARN."'>sandstorm </span>";
            break;
        case "DS":
            $wxtype = "<span style='".WARN."'>duststorm </span>";
            break;
        case "FC":
            $wxtype = "<span style='".WARN."'>funnel clouds and/or tornadoes </span>";
            break;
        case "NSW":
            $wxtype = "no significant weather ";
            break;
        default:
            $wxtype = "Code: " . $taf[$index];
            break;
    }
    $line = "<b>Weather:</b> " . $qual1 . $qual . $wxtype . "<br />";
    return ($line);
}

function parse_mil_code($metar)
{
    global $index;
    $block = $metar[$index];
    $index ++;
    switch ($block)
    {
        case "AMB":
            $wxtype = "amber - ceiling under 300ft, and/or Visibility under 1600m";
            break;
        case "RED":
            $wxtype = "red - ceiling under 200ft, and/or Visibility under 800m";
            break;
        case "YLO":
            $wxtype = "yellow - ceiling under 700ft, and/or visibility under 3700m";
            break;
        case "BLU":
            $wxtype = "blue - ceiling 2500ft or above and visibility 8km or more ";
            break;
        case "YLO1":
            $wxtype = "yellow 1 - ceiling under 500ft, and/or Visibility under 2500m";
            break;
        case "YLO2":
            $wxtype = "yellow 2 - ceiling under 300ft, and/or Visibility under 1600m";
            break;
        case "GRN":
            $wxtype = "green - ceiling under 1500ft, and/or visibility under 5km ";
            break;
        case "WHI":
            $wxtype = "white - ceiling under 2500ft, and/or visibility under 8km";
            break;
        case "WHT":
            $wxtype = "white - ceiling under 2500ft, and/or visibility under 8km";
            break;
    }
    $line = "<b>Airfield Condition: </b>" . $wxtype . "<br />";
    return ($line);
}

function parse_sky($taf)
{
    global $index;
    $cloud = "<b>Cloud:</b> ";
    $clr = false;
    $c_amt = substr($taf[$index], 0, 3);
    switch ($c_amt)
    {
        case "SKC":
            $cloud = "<b>Cloud: </b>Sky clear ";
            $clr = true;
            break;
        case "CLR":
            $cloud = "<b>Cloud: </b>Sky clear ";
            $clr = true;
            break;
        case "SCT":
            $cloud .= "scattered at ";
            break;
        case "OVC":
            $cloud .= "overcast at ";
            break;
        case "BKN":
            $cloud .= "broken at ";
            break;
        case "FEW":
            $cloud .= "a few clouds at ";
            break;
    }
    if (!$clr)
    {
        $hgt = substr($taf[$index], 3, 3);
        if (substr($hgt, 0, 1) == "0")
        {
            $hgt = substr($hgt, 1, 2) . "00 feet";
        }
        else
        {
            $hgt .= "00 feet";
        }
        if (substr($hgt, 0, 1) == "0")
        {
            $hgt = substr($hgt, 1, 1) . "00 feet";
        }
        $cloud .= $hgt;
    }
    if (substr($taf[$index], -2, 2) == "CB")
    {
        $cloud .= "<span style='".WATCH."'> with cumulonimbus </span><br />";
    } elseif (substr($taf[$index], -3, 3) == "TCU")
    {
        $cloud .= " with towering cumulus <br />";
    }
    else
    {
        $cloud .= "<br />";
    }
    return ($cloud);
}

function parse_tempo($taf)
{
    global $index;
    $line = "<br /><b><i>From time to time ";
    $index ++;
    $t1 = substr($taf[$index], 0, 2) . ":00";
    $t2 = substr($taf[$index], 2, 2) . ":00";
    $line .= "between " . $t1 . " and " . $t2 . $t . ":</i></b><br />";
    return ($line);
}

function parse_met_tempo($metar)
{
    global $index;
    $line = "<b><i>From time to time:</i></b><br />";
    return ($line);
}

function parse_prob($taf)
{
    global $index;
    $line = "";
    $prob = substr($taf[$index], 4, 2);
    $index ++;
    if ($taf[$index] == "TEMPO")
    {
        $t = " (from time to time)";
        $index ++;
    }
    $t1 = substr($taf[$index], 0, 2) . ":00";
    $t2 = substr($taf[$index], 2, 2) . ":00";
    $line .= "<br /><b><i>Between " . $t1 . " and " . $t2 . $t . " there is a " . $prob . "% chance of:</i></b><br />";
    return ($line);
}

function parse_from($taf)
{
    global $index;
    $line = "<br /><b><i>From " . substr($taf[$index], 2, 2) . ":00 becoming:</i></b><br />";
    return ($line);
}

function parse_becmg($taf)
{
    global $index;
    $line = "";
    $index ++;
    if ($taf[$index] == "TEMPO")
    {
        $t = " (from time to time)";
        $index ++;
    }
    $t1 = substr($taf[$index], 0, 2) . ":00";
    $t2 = substr($taf[$index], 2, 2) . ":00";
    $line .= "<br /><b><i>Between " . $t1 . " and " . $t2 . $t . " becoming:</i></b><br />";
    return ($line);
}

function parse_rmk($taf)
{
    global $index;
    $line = "<b>Remarks</b> (coded): ";
    $index ++;
    do
    {
        $line .= " " . $taf[$index] . " ";
        $index++;
    }
    while ($index < count($taf));
    $line .= "<br />";
    return ($line);
}

function parse_temp($taf)
{
    global $index;
    if (substr($taf[$index], 0, 1) == "M")
    {
        $t = substr($taf[$index], 1, 2);
        if (substr($t, 0, 1) == "0")
        {
            $t = substr($t, 1, 1);
        }
        $t = "<span style='".WATCH."'>-" . $t . "</span>";
        $didx = 4;
    }
    else
    {
        $t = substr($taf[$index], 0, 2);
        if (substr($t, 0, 1) == "0")
        {
            $t = substr($t, 1, 1);
        }
        $didx = 3;
    }
    if (substr($taf[$index], $didx, 1) == "M")
    {
        $dp = substr($taf[$index], $didx + 1, 2);
        if (substr($dp, 0, 1) == "0")
        {
            $dp = substr($dp, 1, 1);
        }
        $dp = "-" . $dp;
    }
    else
    {
        $dp = substr($taf[$index], $didx, 2);
        if (substr($dp, 0, 1) == "0")
        {
            $dp = substr($dp, 1, 1);
        }
    }
    $hum = " <b>Humidity:</b> " . calc_rel_hum($t, $dp) . "%";
    if ($t > 28)
    {
        $line = "<b>Termperature:</b> <span style='".WATCH."'>$t C </span><br /><b>Dewpoint:</b> $dp C<br />" . $hum . "<br />";
    }
    else
    {
        $line = "<b>Termperature:</b> $t C <br /><b>Dewpoint:</b> $dp C<br />" . $hum . "<br />";
    }
    return ($line);
}

function calc_rel_hum($tc, $dpc)
{
    $val1 = 237.3 + $tc;
    $val2 = 237.3 + $dpc;
    $divisor = ($val2 * $val1);
    $val3 = $dpc - $tc;
    $dividee = 1779.75 * $val3;
    $val4 = ($dividee / $divisor) + 2;
    $result = pow(10, $val4);
    $result = round($result);
    return ($result);
}

function parse_vari($taf)
{
    global $index;
    $d1 = substr($taf[$index], 0, 3);
    $d2 = substr ($taf[$index], 4, 3);
    $wr1 = convert_windrose_english($d1);
    $wr2 = convert_windrose_english($d2);
    $line = "<b>Wind:</b> direction varying between $wr1 ($d1 degrees) and $wr2 ($d2 degrees)<br />";
    return ($line);
}

function parse_rvr($taf)
{
    global $index;
    $line = "<b>Visibility:</b> visual range for runway " . substr($taf[$index], 1, 2) . " is ";
    if (substr($taf[$index], -2, 2) == "FT")
    {
        $line .= substr($taf[$index], -6, 4) . " feet";
    } elseif (Substr($taf[$index], -1, 1) == "U")
    {
        $line .= substr($taf[$index], -5, 4) . " metres";
    }
    else
    {
        $line .= substr($taf[$index], -4, 4) . " metres";
    }
    $line .= "<br />";
    return ($line);
}

function parse_pressure($taf)
{
    global $index;
    $line = "<b>Pressure:</b> ";
    if (substr($taf[$index], 0, 1) == "A")
    {
        $line .= substr($taf[$index], 1, 2) . "." . substr($taf[$index], 3, 2) . " inches of mercury<br />";
    }
    else
    {
        $line .= substr($taf[$index], 1, 4) . " hPa<br />";
    }
    return ($line);
}

?>
