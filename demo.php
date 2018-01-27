<html>
<head>
  <title>PHP Weather Demonstration</title>
</head>
<body>

<?php
/* $Id: demo.php,v 1.9 2002/10/04 21:31:40 gimpster Exp $
   Be sure to check out the newest version from
   http://www.sourceforge.net/projects/phpweather/ */

/* This gives us English strings: */
include('locale_en.inc');
/* The main PHP Weather code: */
include('phpweather.inc');
/* Support for including images: */
include('images.inc');

/* We prepare some variables we'll need later. The variables might
 * have been submitted by the user: */
if (empty($HTTP_POST_VARS['city']))
  $city = 'BGTL';
else
  $city = $HTTP_POST_VARS['city'];

if (empty($HTTP_POST_VARS['language']))
  $language = 'en';
else
  $language = $HTTP_POST_VARS['language'];

?>

<h1><a href="http://sourceforge.net/projects/phpweather/">PHP Weather</a></h1>

<p><a href="http://sourceforge.net/projects/phpweather/">PHP
Weather</a> is a script written in PHP, that will decode a METAR
weather report. Every hour a round the clock airports make a
METAR-report where they measure things like the temperature, the wind
speed and direction etc. This information is available on the Internet
<a href="http://weather.noaa.gov/weather/ccworld.html">here</a>.
Choose a country and then a observing location and you'll get the
latest report. It even caches the METARs in a database so subsequent
request for the same station will be served as fast as possible.</p>

<p>But the report is not just saved in plain-text. Its coded in a
special <a
href="http://tgsv5.nws.noaa.gov/oso/oso1/oso12/fmh1/fmh1ch12.htm">code</a>,
so it has to be decoded before you can use it. This is what <a
href="http://sourceforge.net/projects/phpweather/">PHP Weather</a> is
for, decoding a METAR into plain-text, so you can use for something
useful.</p>

<h1>Your version: <?php echo $version ?></h1>

<p>You can download new versions from the <a
href="http://sourceforge.net/projects/phpweather/">project page</a> at
SourceForge.</p>

<p>If you are having problems with <a
href="http://sourceforge.net/projects/phpweather/">PHP Weather</a>,
then please upgrade to the latest version. If that doesn't help, then
ask for help at the maillinglist, by sending a mail to <a
href="mailto:phpweather-devel@lists.sourceforge.net">phpweather-devel@lists.sourceforge.net</a>.
But before doing that, you <b>must</b> be subscribed to the list - go
to <a
href="http://lists.sourceforge.net/lists/listinfo/phpweather-devel">this
page</a>.</p>

<p>You should know, that active development has stopped on the 1.x
versions of PHP Weather which are still available because the 2.x
version doesn't run on PHP version 3. If your server is running PHP
version 4 or later, then you should download the latest version of PHP
Weather instead of this.</p>

<p>To help speed up the development, you should take a look at the
latest code from CVS. Try and see if you can figure out what is
happening in there, and then tell me what you think. Or even better:
create a user-account at <a
href="http://www.sourceforge.net/">SourceForge</a>, and mail me the
username. I'll then add you to the project, so that you can help by
changing the code yourself.</p>

<h1>A sample METAR-report</h1>

<p>The report below is the latest from Tirstrup, Denmark (this is
where I live). The raw METAR looks this way:</p>

<?php $metar = get_metar('EKAH'); ?>

<blockquote><code><?php echo $metar ?></code></blockquote>

<p>Not exactly a pretty sight? Well by using <a
href="http://sourceforge.net/projects/phpweather/">PHP Weather</a> you
could also present the information like this:</p>

<?php
pretty_print_metar($metar, 'Tirstrup, Denmark')
?>

<blockquote>
<?php $decoded_metar = process_metar($metar); ?>
<img src="<?php get_temp_image($decoded_metar) ?>" height="50" width="20" border="1">&nbsp;
<img src="<?php get_winddir_image($decoded_metar) ?>" height="40" width="40" border="1">
<img src="<?php get_sky_image($decoded_metar) ?>" height="50" width="80" border="1">&nbsp;
</blockquote>

<p>Here is the same piece of text with the current weather in
Honolulu, Hawaii. This time the information is presented in Spanish.
First comes the raw METAR:</p>

<blockquote><code><?php echo $metar = get_metar('PHNL') ?></code></blockquote>

<p>and then the pretty-printed output:</p>

<?php
include('locale_es.inc');
pretty_print_metar($metar, 'Honolulu, Hawaii');
?>
<blockquote>
<?php $decoded_metar = process_metar($metar); ?>
<img src="<?php get_temp_image($decoded_metar) ?>" height="50" width="20" border="1">&nbsp;
<img src="<?php get_winddir_image($decoded_metar) ?>" height="40" width="40" border="1">
<img src="<?php get_sky_image($decoded_metar) ?>" height="50" width="80" border="1">&nbsp;
</blockquote>

<p>The only thing I changed between the two pieces of code was the
identifier of the weather station, and the include-file with the
strings used by <a
href="http://sourceforge.net/projects/phpweather/">PHP Weather</a>.
The identifier for Tirstrup, Denmark is <code>EKAH</code> and the one
for Honolulu, Hawaii is <code>PHNL</code>.</p>

<p>Try it out for yourself - choose a city and a language from the
lists and you'll see the current weather for the city you
selected:<br>

<form action="demo.php" method="post">
<select name="city" onChange="this.form.submit()">
<?php 

$cities = array(
  'BGTL' => 'Thule A. B., Greenland',
  'EGKK' => 'London / Gatwick Airport, United Kingdom',
  'EKCH' => 'Copenhagen / Kastrup, Denmark',
  'ENGM' => 'Oslo / Gardermoen, Norway',
  'ESSA' => 'Stockholm / Arlanda, Sweden',
  'FCBB' => 'Brazzaville / Maya-Maya, Congo',
  'LEMD' => 'Madrid / Barajas, Spain',
  'LFPB' => 'Paris / Le Bourget, France',
  'LHBP' => 'Budapest / Ferihegy, Hungary',
  'LIRA' => 'Roma / Ciampino, Italy',
  'LMML' => 'Luqa International Airport, Malta',
  'KNYC' => 'New York City, Central Park, NY, United States',
  'NZCM' => 'Williams Field, Antarctic',
  'UUEE' => 'Moscow / Sheremet\'Ye , Russian Federation',
  'RKSS' => 'Seoul / Kimp\'O International Airport, Korea',
  'YSSY' => 'Sydney Airport, Australia',
  'ZBAA' => 'Beijing, China'
  );

while (list($icao, $location) = each($cities)) {
  if ($icao == $city) {
    echo "<option selected value=\"$icao\">$location</option>\n";
  } else {
    echo "<option value=\"$icao\">$location</option>\n";
  }
} ?>
</select>
<select name="language" onChange="this.form.submit()">
<?
$languages = array(
  'po_br' => 'Brazilian Portuguese',
  'cz' => 'Czech',
  'da' => 'Danish',
  'nl' => 'Dutch',
  'en' => 'English',
  'fr' => 'French',
  'de' => 'German',
  'el' => 'Greek',
  'hu' => 'Hungarian',
  'it' => 'Italian',
  'no' => 'Norwegian',
  'es' => 'Spanish'
  );

while (list($lang_code, $locale) = each($languages)) {
  if ($lang_code == $language) {
    echo "<option selected value=\"$lang_code\">$locale</option>\n";
  } else {
    echo "<option value=\"$lang_code\">$locale</option>\n";
  }
} ?>
</select>
<input type="submit" value="Show weather">
</form></p>

<?

$metar = get_metar($city);

include('locale_' . $language . '.inc');

pretty_print_metar($metar, $cities[$city]) ?>

<blockquote>
<?php $decoded_metar = process_metar($metar); ?>
<img src="<?php get_temp_image($decoded_metar) ?>" height="50" width="20" border="1">&nbsp;
<img src="<?php get_winddir_image($decoded_metar) ?>" height="40" width="40" border="1">
<img src="<?php get_sky_image($decoded_metar) ?>" height="50" width="80" border="1">&nbsp;
</blockquote>
<p>The METAR for <?php echo $cities[$city] ?>, presented in <?php echo $languages[$language] ?>, was:</p>
<blockquote><code><?php echo $metar ?></code></blockquote>


<h1>Using PHP Weather</h1>

<p>Using <a href="http://sourceforge.net/projects/phpweather/">PHP
Weather</a> is very simple. First you have to include the file
<code>phpweather.inc</code> in your page. Then you call the function
<code>get_metar($station)</code> with the four-character
station-identifier. This gives you the METAR, which you can then feed
to <code>process_metar($metar)</code>. This function return an array
that contains the various parts of the METAR in decoded form. They are
also returned in both empirical (feet, miles, degrees of Fahrenheit,
etc.) and metric units (meters, kilometers and degrees Celsius).</p>
<p>This code is all that is <i>necessary</i> to make <a
href="http://sourceforge.net/projects/phpweather/">PHP Weather</a>
work:</p>

<code><font color="#000000">
<font color="#0000BB">&lt;?php<br></font><font color="#007700">include(</font><font color="#DD0000">'locale_en.inc'</font><font color="#007700">);<br>include(</font><font color="#DD0000">'phpweather.inc'</font><font color="#007700">);<br></font><font color="#0000BB">$metar&nbsp;</font><font color="#007700">=&nbsp;</font><font color="#0000BB">get_metar</font><font color="#007700">(</font><font color="#DD0000">'EKAH'</font><font color="#007700">);<br></font><font color="#0000BB">$data&nbsp;</font><font color="#007700">=&nbsp;</font><font color="#0000BB">process_metar</font><font color="#007700">(</font><font color="#0000BB">$metar</font><font color="#007700">);<br></font><font color="#0000BB">$temp&nbsp;</font><font color="#007700">=&nbsp;</font><font color="#0000BB">$data</font><font color="#007700">[</font><font color="#DD0000">'temp_c'</font><font color="#007700">];<br>echo&nbsp;</font><font color="#DD0000">"The&nbsp;temperature&nbsp;is&nbsp;$temp&nbsp;degrees&nbsp;Celsius."</font><font color="#007700">;<br></font><font color="#0000BB">?&gt;<br></font>
</font>
</code>

<p>That's it! The above code will tell you what the temperature is in
Tirstrup, Denmark. To make the examples above I've made a function
called <code>pretty_print_metar()</code>. You use it like this:</p>

<code><font color="#000000">
<font color="#0000BB">&lt;?php<br>$metar&nbsp;</font><font color="#007700">=&nbsp;</font><font color="#0000BB">get_metar</font><font color="#007700">(</font><font color="#DD0000">'EKAH'</font><font color="#007700">);<br></font><font color="#0000BB">pretty_print_metar</font><font color="#007700">(</font><font color="#0000BB">$metar</font><font color="#007700">,&nbsp;</font><font color="#DD0000">'Tirstrup,&nbsp;Denmark'</font><font color="#007700">);<br></font><font color="#0000BB">?&gt;<br></font>
</font>
</code>

<p>To get matching icons you should include the file
<code>images.inc</code> and then use the functions
<code>get_temp_image($data)</code>,
<code>get_winddir_image($data)</code>, and
<code>get_sky_image($data)</code> like this:</p>

<code><font color="#000000">
<font color="#0000CC">&lt;?php<br />$decoded_metar&nbsp;</font><font color="#006600">=&nbsp;</font><font color="#0000CC">process_metar</font><font color="#006600">(</font><font color="#0000CC">$metar</font><font color="#006600">);<br />include(</font><font color="#CC0000">'images.inc'</font><font color="#006600">);<br /></font><font color="#0000CC">?&gt;<br /></font>&lt;blockquote&gt;<br />&lt;img src="<font color="#0000CC">&lt;?php&nbsp;get_temp_image</font><font color="#006600">(</font><font color="#0000CC">$decoded_metar</font><font color="#006600">)&nbsp;</font><font color="#0000CC">?&gt;</font>" height="50" width="20" border="1"&gt;&amp;nbsp;<br />&lt;img src="<font color="#0000CC">&lt;?php&nbsp;get_winddir_image</font><font color="#006600">(</font><font color="#0000CC">$decoded_metar</font><font color="#006600">)&nbsp;</font><font color="#0000CC">?&gt;</font>" height="40" width="40" border="1"&gt;<br />&lt;img src="<font color="#0000CC">&lt;?php&nbsp;get_sky_image</font><font color="#006600">(</font><font color="#0000CC">$decoded_metar</font><font color="#006600">)&nbsp;</font><font color="#0000CC">?&gt;</font>" height="50" width="80" border="1"&gt;&amp;nbsp;<br />&lt;/blockquote&gt;<br /></font>
</code>

<p>Please refer to <a href="table.php">this document</a> for more
information about how to use these functions.</p>

<p>If you wan't to see all the data in the METAR, then try the following code:</p>

<code><font color="#000000">
<font color="#0000CC">&lt;?php<br>$data&nbsp;</font><font color="#006600">=&nbsp;</font><font color="#0000CC">process_metar</font><font color="#006600">(</font><font color="#0000CC">get_metar</font><font color="#006600">(</font><font color="#CC0000">'EKAH'</font><font color="#006600">));<br>echo&nbsp;</font><font color="#CC0000">"&lt;pre&gt;\n"</font><font color="#006600">;<br></font><font color="#0000CC">print_r</font><font color="#006600">(</font><font color="#0000CC">$data</font><font color="#006600">);<br>echo&nbsp;</font><font color="#CC0000">"&lt;/pre&gt;\n"</font><font color="#006600">;<br></font><font color="#0000CC">?&gt;<br></font>
</font>
</code>

<p>But please note that you'll only find <code>print_r()</code> in PHP4.</p>

<h1>Caching the METARs</h1>

<p>You'll soon start to look for a way to improve the response-time of
your script. The problem is, that it takes about a second to retrieve
a METAR report from the NWS. It would be a waste if your page had to
do this every time it's accessed.</p>

<p>To decrease the time it takes for the script to access the METARs,
you can cache the retrieved METARs locally. You will have to decide
what database you want to use. You do this by copying the file
<code>config-dist.inc</code> to <code>config.inc</code> - the name is
important. Now change <code>config.inc</code> so suit your preferences
by changing <i>one</i> of the <code>$useXXX</code> variables to
<code>1</code>. You'll find more instructions in the comments in the
file.</p>

<p>You have a number of different databases to choose from:</p>

<dl>
  
  <dt><b>A MySQL database</b></dt>
  <dd>
    <p>Set <code>$useMySQL</code> to 1, and then create a table with
    the following SQL statement:</p>
    
    <pre>
CREATE TABLE metars (
  metar VARCHAR(255) NOT NULL,
  timestamp TIMESTAMP(14),
  station VARCHAR(4) NOT NULL,
  PRIMARY KEY (station),
  UNIQUE station (station)
);
</pre>
    
  </dd>
  
  <dt><b>A PostgreSQL database</b></dt>
  
  <dd>
    <p>Set <code>$usePSQL</code> to 1 and create a table with the
    following SQL statement:</p>
    
    <pre>
CREATE TABLE metars (
  metar VARCHAR(255) NOT NULL,
  timestamp TIMESTAMP,
  station VARCHAR(4) PRIMARY KEY NOT NULL
);
</pre>
    
  </dd>
  
  <dt><b>An Oracle 8 database</b></dt>
  
  <dd>
    <p>Set <code>$useOCI</code> to 1 and create a table with this SQL
    statement:</p>
    
    <pre>
create table metars (
  metar varchar2(255) not null,
  timestamp date,
  station varchar2(4)
);
alter table metars add primary key (station);
</pre>
  </dd>
  
  <dt><b>A DBM database</b></dt>
  
  <dd>
    <p>Set <code>$useDBM</code> to 1 and make make sure that the user
    running the webserver has write-permission to the current
    directory.</p>
  </dd>
  
  <dt><b>An XML file</b></dt>
  
  <dd>
    <p>Set <code>$useXML</code> to 1 and make sure that the webserver
    has read/write permission to the file <code>cache.xml</code>.</p>
  </dd>
  
</dl>

<p>If you don't connect to your database, you'll recieve a lot of
errors, saying things like: &quot;<code>MySQL Connection Failed:
Access denied for user: 'nobody@localhost' (Using password: NO) in
phpweather.inc</code>&quot; and &quot;<code>Supplied argument is not a
valid MySQL result resource in phpweather.inc</code>&quot;. These
errors are trying to tell you, that PHP Weather couldn't store the
METAR in the <a href="http://www.mysql.com">MySQL</a>-database,
because you didn't supply a valid username and password. The errors
will be similar for other databases. Go back to
<code>config.inc</code> and make sure that the code in that file does
establish a connection to the database.</p>

<p>If you've configured <a
href="http://www.sourceforge.net/projects/phpweather/">PHP Weather</a>
and the database correctly, <a
href="http://sourceforge.net/projects/phpweather/">PHP Weather</a>
will store the retrieved <a
href="http://www.nws.noaa.gov/oso/oso1/oso12/metar.htm">METARs</a> in
the database, and use the cached METAR if it's less that 1 hour old.
If it's older, it is expected that the station has made a new
observation, so we should update our data.</p>

<h1>Using PHP Weather with <a href="http://www.wapforum.org/">WAP</a></h1>

<p>PHP Weather can also be used to serve current weather
information to <a href="http://www.wapforum.org/">WAP</a>-enables
mobile phones. To do this, just put the file <code>wap.php</code> in
the same directory as <code>phpweather.inc</code> and then point your
<a href="http://www.wapforum.org/">WAP</a>-browser on your mobile
phone to the page. It should then show you the current weather in
Tirstrup, Denmark.</p> <p>The format used in the
<code>wap.php</code>-page is a smaller and more compact format than
the one shown on this page. It looks like this:</p>

<pre><?php pretty_print_metar_wap(get_metar('EKAH'), 'Tirstrup'); ?></pre>

<h1>Related information</h1>

<dl>

<dt><a href="http://www.sourceforge.net/projects/phpweather/">PHP Weather at Sourceforge.net</a></dt>

<dd><p>PHP Weather has moved to <a
href="http://www.sourceforge.net/">SourceForge</a>. So please check <a
href="http://www.sourceforge.net/projects/phpweather/">these pages</a>
for new versions etc.</p></dd>

<dt><a
href="http://tgsv5.nws.noaa.gov/oso/oso1/oso12/fmh1/fmh1ch12.htm">Federal
Meteorological Handbook No. 1, Chapter 12 Coding</a></dt>

<dd><p>This is the official specification on the METAR-encoding
scheme. If you want to learn how to read the raw coded messages, or
want to make a parser yourself, you should read this. It might seam a
bit complicated at first sight, but when you've read it a couple of
times things start to clear up :-)</p></dd>

<dt><a href="http://www.wcnet.org/~jzawodn/perl/Geo-METAR/">Geo::METAR</a></dt>

<dd><p><a
href="http://www.wcnet.org/~jzawodn/perl/Geo-METAR/">Geo::METAR</a> is
written by <a href="mailto:Jeremy@Zawodny.com">Jeremy D. Zawodny</a>,
and is the <a href="http://www.perl.com">Perl</a> module that I used
as a template for <a
href="http://sourceforge.net/projects/phpweather/">PHP Weather</a>. I
searched the web for a PHP-script that could translate a METAR, but
instead I found <a
href="http://www.wcnet.org/~jzawodn/perl/Geo-METAR/">Geo::METAR</a>.
When looking at the <a href="http://www.perl.com">Perl</a>-code I
realised that I could just translate the <a
href="http://www.perl.com">Perl</a>-code into PHP-code. So I did, and
the result is <a
href="http://sourceforge.net/projects/phpweather/">PHP
Weather</a>.</p></dd>

<dt><a href="http://weather.noaa.gov/weather/metar.shtml">METAR Data
Access</a></dt>

<dd><p>Here you'll find the raw METAR data. In <a
href="http://sourceforge.net/projects/phpweather/">PHP Weather</a> I
download the reports from <a
href="http://weather.noaa.gov/pub/data/observations/metar/stations/">http://weather.noaa.gov/pub/data/observations/metar/stations/</a>.</p>

<p>To use any of these services you have to know the four-character
ICAO Location Indicator for the station. The easiest way to find the
Location Indicator is to go to <a
href="http://weather.noaa.gov/weather/ccworld.html">this</a> page.
There you'll be able to choose a country, and the choose a station
from a list of stations is that country.</p></dd>

</dl>

</body>
</html>
