<?php
if (!defined('e107_INIT'))
{
    exit;
}
// $raw = file_get_contents("clientraw.txt");
if ($raw = file_get_contents("/var/www/html/wdl/clientraw.txt"))
{
    $raw_array = explode(" ", $raw);
    $tmp = explode("-", $raw_array[32]);
    $retval = substr($tmp[1], 0, 5);
}
else
{
    $retval = "No baro";
}

?>