vuser_init()
{
	lr_save_string("MySQL ODBC 3.51 Driver","driver");
	lr_save_string("172.31.89.116","dbip");
	lr_save_string("3306","port");
	lr_save_string("testlink","database");
	lr_save_string("root","dbuser");
	lr_save_string("123456","dbpassword");

	lr_db_connect("StepName=Connect","ConnectionString=DRIVER={{driver}};SERVER={dbip};PORT={port};DATABASE={database};USER={dbuser};PASSWORD={dbpassword};OPTION=3",
		"ConnectionName=db1",
		"ConnectionType=ODBC",
		LAST);

		lr_db_executeSQLStatement("StepName=deletedatas",
		"ConnectionName=db1",
		"SQLStatement=delete FROM testlink.users where login like '%test%';",
		"DatasetName=MyDataset",
        LAST); 

    //ÖÐÖ¹ODBCÁ¬½Ó
    lr_db_disconnect("StepName=Disconnect",
		   "ConnectionName=db1",
		   LAST);
	return 0;
}
