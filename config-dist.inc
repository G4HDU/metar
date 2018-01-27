<?php

/* These variables control the behavious of PHP Weather.
 *
 * You should only use this file as a template - it will be overridden
 * when you upgrade to a new version. You should instead make a new
 * file called 'config.php' and save your customizations there. The
 * 'config.php' file is loaded after this file so that you can
 * override the settings in this file.
 */

/* Offset in hours to add to the time of a report. If all your times
 * are 2 hours off, then set this to -2.  */
$offset = 0;

/* The $useXXX variables control the databaseformat PHP Weather uses.
 * Set them all to 0 to turn database-support off. Then PHP Weather
 * will retrieve a new METAR everytime the script is called. It takes
 * about one second to retrieve a METAR, so you probably want to use a
 * database.
 *
 * If $useDBM is set to 1, the program will create the appropriate
 * files, but the owner will be set to the user running the webserver,
 * usually nobody. This will fail if that user does not have write
 * permission to the current directory.
 */

/* set to 1 to use a MySQL database */
$useMySQL = 0;

/* set to 1 to use a DBM database */
$useDBM = 0;

/* set to 1 to use a PostgreSQL database */
$usePSQL = 0;

/* set to 1 to use a Oracle 8 database */
$useOCI = 0;

/* set to 1 to use XML */
$useXML = 0;

/* set to 1 to use a DBA database */
$useDBA = 0;
/* the DBA handler to use, if $useDBA is set to 1: */
$DBAmethod = 'db2'; // or ndbm, gdbm, db3 if db2 doesn't work.


/* The directory used by PHP Weather to store file-based databases.
 * The webserver has to have write permission to the directory for
 * this to work. */
$db_dir = '/tmp';

/* If you're using a database that requires you to log on, then set
 * the following variables. Make sure to protect the 'config.php' file
 * so that other people cannot read your password!
 */
$db_hostname = 'localhost';
$db_name     = 'database_name';
$db_username = 'your_username';
$db_password = 'your_secret';


/* This lets you configure a proxy. If you want to use a proxy, set
 * the next variable to 1. */
$useProxy = 0;
/* Then set this variable to the ip-number or hostname of the proxy. */
$proxy_host = 'proxy.your-isp.com';
/* Finally, change the port, if necessary. The popular Squid proxy
 * defaults to port 3128, but port 80 or 8080 is also commonly
 * used. */
$proxy_port = 3128;

?>
