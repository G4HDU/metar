<?php
if (!defined('e107_INIT'))
{
    exit;
}

if ($raw = file_get_contents("/var/www/html/wdl/clientraw.txt"))
{
    $raw_array = explode(" ", $raw);
    $fred = $raw_array[49];
    $fred = str_replace("_", " ", $fred);
    $retval = str_replace("\\", " ", $fred); // Current conditions text
}
else
{
    $retval = "No hum";
}

?>