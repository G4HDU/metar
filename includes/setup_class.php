<?php

class metarSetup{
    private $sql;
    function __construct(){
        $this->sql = e107::getDb();
    }
    function importCountryList(){
        require_once(e_PLUGIN . "/metar/setup/countries/countries.php");
        foreach($countries as $key => $value){
            // print $key."<br />";
            $qry = "INSERT INTO #metarcountries (metarcountries_id,metarcountries_name) VALUES ('{$key}','{$value}') ";
            $this->sql->gen($qry, false);
        }
    }
    function importCountries(){
        foreach(glob(e_PLUGIN . "/metar/setup/*.php") as $filename){
            unset($icaos);
            $countryCode = pathinfo($filename, PATHINFO_FILENAME);
            require_once($filename);
            foreach($icaos as $key => $value){
                $qry = "INSERT INTO #metarairports (metarairports_icao,metarairports_countryfk,metarairports_name) VALUES('{$key}','{$countryCode}','{$value}')";
                $this->sql->gen($qry, true);
            }
        }
    }
}

?>