CREATE TABLE metarlatest (
	metarlatest_id INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
	metarlatest_icao CHAR(5) NOT NULL,
	metarlatest_report TEXT NOT NULL,
	metarlatest_reported INT(10) UNSIGNED NOT NULL DEFAULT '0',
	metarlatest_retrieved INT(10) UNSIGNED NOT NULL DEFAULT '0',
	metarlatest_lastupdate TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
	PRIMARY KEY (metarlatest_id),
	INDEX metarlatest_icao (metarlatest_icao)
)
COMMENT='Latest metar report'
COLLATE='utf8_general_ci'
ENGINE=InnoDB
;
CREATE TABLE metarmaxmin (
	metarmaxmin_id INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
	metarmaxmin_icao CHAR(5) NOT NULL,
	metarmaxmin_year INT(10) UNSIGNED NOT NULL DEFAULT '0',
	metarmaxmin_daynumber INT(10) UNSIGNED NOT NULL DEFAULT '0',
	metarmaxmin_maxtemp INT(11) NOT NULL DEFAULT '0',
	metarmaxmin_mintemp INT(11) NOT NULL DEFAULT '0',
	metarmaxmin_maxgust INT(10) UNSIGNED NOT NULL DEFAULT '0',
	metarmaxmin_mingust INT(10) UNSIGNED NOT NULL DEFAULT '0',
	metarmaxmin_maxbaro INT(10) UNSIGNED NOT NULL DEFAULT '0',
	metarmaxmin_minbaro INT(10) UNSIGNED NOT NULL DEFAULT '0',
	metarmaxmin_lastupdate TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
	PRIMARY KEY (metarmaxmin_id),
	INDEX metarmaxmin_icao (metarmaxmin_icao)
)
COLLATE='utf8_general_ci'
ENGINE=InnoDB
;
CREATE TABLE metarcountries` (
	`metarcountries_id` CHAR(5) NOT NULL,
	`metarcountries_name` VARCHAR(50) NOT NULL,
	`metarcountries_additional` TEXT NOT NULL,
	`metarcountries_lastupdate` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
	PRIMARY KEY (`metarcountries_id`)
)
ENGINE=InnoDB
;
CREATE TABLE `e107_metarairports` (
	`metarairports_icao` CHAR(5) NOT NULL,
	`metarairports_country` CHAR(5) NOT NULL,
	`metarairports_name` VARCHAR(50) NOT NULL,
	`metarairports_lat` DECIMAL(10,4) NOT NULL,
	`metarairports_lon` DECIMAL(10,4) NOT NULL,
	`metarairports_info` TEXT NOT NULL,
	`metarairports_lastupdate` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
	PRIMARY KEY (`metarairports_icao`)
)
ENGINE=InnoDB
;
