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
        case "mph":
            $retval = intval($raw_array[1] * 1.1508) . " mph";
            break;
        case "kph" :
            $retval = intval($raw_array[1] * 1.852) . " kph";
            break;
        default:
            $retval = intval($raw_array[1]) . " knots";
    } // switch == "mph")
}
else
{
    $retval = "No wind";
}

?>