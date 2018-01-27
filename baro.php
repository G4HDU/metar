<?php
if (!defined('e107_INIT'))
{
    exit;
}
// $raw = file_get_contents("clientraw.txt");
if ($raw = file_get_contents("/var/www/html/wdl/clientraw.txt"))
{
    $raw_array = explode(" ", $raw);
    switch ($led_tmpparam[0])
    {
        case "inches":
            $retval = number_format(($raw_array[6]/ 33.86),2) . " inches";
            break;
        case "mm" :
            $retval = number_format(($raw_array[6] /1.33),2) . " mm";
            break;
        default:
            $retval = intval($raw_array[6]) . " hPa";
    } // switch == "mph")
}
else
{
    $retval = "No baro";
}
?>