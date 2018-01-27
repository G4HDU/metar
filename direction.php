<?php
if (!defined('e107_INIT'))
{
    exit;
}

if ($raw = file_get_contents("/var/www/html/wdl/clientraw.txt"))
{
    $raw_array = explode(" ", $raw);
    if ($led_tmpparam[0] == "name")
    {
        $dirn = array("N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW");
        $retval = $dirn[intval($raw_array[3] / 22.5)]; // Direction degrees
    }
    else
    {
        $retval = $raw_array[3] . " Degrees"; // Direction degrees
    }
}
else
{
    $retval = "No wind";
}

?>