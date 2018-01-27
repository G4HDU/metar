<?php
/*
* e107 website system
*
* Copyright (C) 2008-2013 e107 Inc (e107.org)
* Released under the terms and conditions of the
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)
*
* Custom install/uninstall/update routines for metar plugin
**
*/

class _METAR_setup
{
	
 	function install_pre($var)
	{
		// print_a($var);
		// echo "custom install 'pre' function<br /><br />";
	}

	/**
	 * For inserting default database content during install after table has been created by the metar_sql.php file. 
	 */
	function install_post($var)
	{
		$sql = e107::getDb();
		$mes = e107::getMessage();
		
		$e107_METAR = array(
			'metar_id'				=>'1',
			'metar_icon'			=>'{e_PLUGIN}_METAR/images/metar_32.png',
			'metar_type'			=>'type_1',
			'metar_name'			=>'My Name',
			'metar_folder'			=>'Folder Value',
			'metar_version'			=>'1',
			'metar_author'			=>'bill',
			'metar_authorURL'		=>'http://e107.org',
			'metar_date'			=>'1352871240',
			'metar_compatibility'	=>'2',
			'metar_url'				=>'http://e107.org'
		);
		
		if($sql->insert('metar',$e107_METAR))
		{
			$mes->add("Custom - Install Message.", E_MESSAGE_SUCCESS);
		}
		else
		{
			$mes->add("Custom - Failed to add default table data.", E_MESSAGE_ERROR);	
		}

	}
	
	function uninstall_options()
	{
	
		$listoptions = array(0=>'option 1',1=>'option 2');
		
		$options = array();
		$options['mypref'] = array(
				'label'		=> 'Custom Uninstall Label',
				'preview'	=> 'Preview Area',
				'helpText'	=> 'Custom Help Text',
				'itemList'	=> $listoptions,
				'itemDefault'	=> 1
		);
		
		return $options;
	}
	

	function uninstall_post($var)
	{
		// print_a($var);
	}

	function upgrade_post($var)
	{
		// $sql = e107::getDb();
	}
	
}
?>