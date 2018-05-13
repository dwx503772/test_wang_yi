Action()
{
	//变量初始化
    int numrows=0;
    merc_timer_handle_t timer;  
	int wasteTime=0;

	//参数化（FILE）
	lr_save_string("172.31.89.116","ip");

	//数据库参数化
	lr_save_string("MySQL ODBC 3.51 Driver","driver");
	lr_save_string("172.31.89.116","dbip");
	lr_save_string("3306","port");
	lr_save_string("testlink","database");
	lr_save_string("root","dbuser");
	lr_save_string("123456","dbpassword");

	//录脚本

	web_url("index.php", 
		"URL=http://{ip}/testlink/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("login.php", 
		"URL=http://{ip}/testlink/login.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{ip}/testlink/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("testlink.css", 
		"URL=http://{ip}/testlink/gui/themes/default/css/testlink.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("sorttable.js", 
		"URL=http://{ip}/testlink/gui/javascript/sorttable.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("testlink_library.js", 
		"URL=http://{ip}/testlink/gui/javascript/testlink_library.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("niftycube.js", 
		"URL=http://{ip}/testlink/gui/niftycube/niftycube.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("test_automation.js", 
		"URL=http://{ip}/testlink/gui/javascript/test_automation.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("company_logo.png", 
		"URL=http://{ip}/testlink/gui/themes/default/images/company_logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("prototype.js", 
		"URL=http://{ip}/testlink/third_party/prototype/prototype.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=http://{ip}/testlink/gui/themes/default/images/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/vnd.microsoft.icon", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("tl_print.css", 
		"URL=http://{ip}/testlink/gui/themes/default/css/tl_print.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t9.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("navbar.gif", 
		"URL=http://{ip}/testlink/gui/themes/default/images/navbar.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("niftyCorners.css", 
		"URL=http://{ip}/testlink/gui/niftycube/niftyCorners.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t12.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(2);

	web_url("New User?", 
		"URL=http://{ip}/testlink/firstLogin.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(2);


    lr_start_transaction("Reg");

	web_submit_data("firstLogin.php", 
		"Action=http://{ip}/testlink/firstLogin.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{ip}/testlink/firstLogin.php", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=login", "Value={loginName}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=password2", "Value={password}", ENDITEM, 
		"Name=firstName", "Value={firstName}", ENDITEM, 
		"Name=lastName", "Value={{lastName}}", ENDITEM, 
		"Name=email", "Value=edwin@Edwin-Salve.com", ENDITEM, 
		"Name=doEditUser", "Value=Add User Data", ENDITEM, 
		LAST);



    //断言部分
	// 
	//计时
    timer=lr_start_timer();  


    lr_db_connect("StepName=Connect","ConnectionString=DRIVER={{driver}};SERVER={dbip};PORT={port};DATABASE={database};USER={dbuser};PASSWORD={dbpassword};OPTION=3",
		"ConnectionName=db1",
		"ConnectionType=ODBC",
		LAST);

    lr_start_sub_transaction("sql","Reg");
    numrows=lr_db_executeSQLStatement("StepName=deletedatas",
		"ConnectionName=db1",
		"SQLStatement=SELECT * FROM testlink.users where login='{loginName}';",
		"DatasetName=MyDataset",
        LAST);  
	//计时结束
    wasteTime=lr_end_timer(timer); 
	//把wasteTime变量的时间作为垃圾
    lr_wasted_time(wasteTime*1000);


	lr_end_sub_transaction("sql",LR_AUTO);

    if(numrows==1){
        lr_end_transaction("Reg",LR_PASS);
    }else{
        lr_end_transaction("Reg",LR_FAIL);
    }

    web_url("login.php_2", 
		"URL=http://{ip}/testlink/login.php?note=first", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{ip}/testlink/firstLogin.php", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);
    //中止ODBC连接
    lr_db_disconnect("StepName=Disconnect",
		   "ConnectionName=db1",
		   LAST);
	return 0;
}

