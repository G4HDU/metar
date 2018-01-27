<?php
if (!defined('e107_INIT'))
{
    exit;
}

if ($raw = file_get_contents("/var/www/html/wdl/clientraw.txt"))
{
    $raw_array = explode(" ", $raw);
    // print $raw_array[1]."<br />";// Avg speed kts
    // print $raw_array[3]."<br />";// Direction degrees
    if ($led_tmpparam[0] == "f")
    {
        $retval = intval(($raw_array[4] * 9 / 5 + 32)) . " F";
    }
    else
    {
        $retval = $raw_array[4] . " C";
    }
    // print $raw_array[5]."<br />"; // Humidity %
    if ($led_tmpparam[1] == "trend")
    {
        if ($raw_array[143] > 0)
        {
            $retval .= " and Rising";
        }
        else
        {
            $retval .= " and Falling";
        }
    }
}
else
{
    $retval = "No Temp";
}

?>