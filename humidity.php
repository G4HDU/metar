<?php
if (!defined('e107_INIT'))
{
    exit;
}
// $raw = file_get_contents("clientraw.txt");
if ($raw = file_get_contents("/var/www/html/wdl/clientraw.txt"))
{
    $raw_array = explode(" ", $raw);
    $retval = $raw_array[5] . "%"; // Humidity %
    if ($led_tmpparam[0] == "trend")
    {
        if ($raw_array[144] > 0)
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
    $retval = "No hum";
}

?>