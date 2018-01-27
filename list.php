<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<html>

<head>
<title>Listing of the processed METAR</title>
</head>
<body>

<p>You can use this simple script to test PHP Weather. After you have
typed in an ICAO, the script will show you the result of the parsing.</p>

<form action="list.php">
<p>Select ICAO: <input type="text" name="icao"> <input type="submit"></p>
</form>

<?php

include('./locale_en.inc');
include('./images.inc');
include('./phpweather.inc');

if (empty($icao)) {
  $metar = get_metar('EHEH');
} else {
  $metar = get_metar($icao);
}

$decoded_metar = process_metar($metar);
echo "<pre>\n";
while (list($key, $value) = each($decoded_metar)) {
  echo "[$key] => $value\n";
}

?>
</body>
</html>
