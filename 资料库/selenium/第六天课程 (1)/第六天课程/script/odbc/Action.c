Action()
{
		int numrows=0;
		lr_db_connect("StepName=Connect",
		 "ConnectionString=DRIVER={MySQL ODBC 3.51 Driver};SERVER=192.168.0.106;PORT=3306;DATABASE=testlink;USER=root;PASSWORD=123456;OPTION=3",
			   "ConnectionName=db1",
			   "ConnectionType=ODBC",
		  LAST);
lr_start_transaction("SQL");

numrows=lr_db_executeSQLStatement("StepName=deletedatas",
				   "ConnectionName=db1",
				   "SQLStatement=SELECT * FROM testlink.users where login='test1';",
				   "DatasetName=MyDataset",                                           LAST);  

  if(numrows==1){
	  
  lr_end_transaction("SQL",LR_PASS);
	  
  }else{
	  
  lr_end_transaction("SQL",LR_FAIL);
  }


  lr_db_disconnect("StepName=Disconnect",
		   "ConnectionName=db1",
		   LAST);

 
	return 0;
}