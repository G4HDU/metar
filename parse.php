<?php

$raw= file_get_contents("../../wdl/clientraw.txt");
$raw_array=explode(" ",$raw);
print $raw_array[1]."<br />";// Avg speed kts
print $raw_array[3]."<br />";// Direction degrees
print $raw_array[4]."<br />"; //temp C
print $raw_array[5]."<br />"; // Humidity %

?>