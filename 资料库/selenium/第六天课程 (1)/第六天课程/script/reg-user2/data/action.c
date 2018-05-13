Action()
{

	web_add_auto_header("Accept-Language", 
		"zh-CN");

	web_url("login.php", 
		"URL=http://192.168.0.106/testlink/login.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=gui/themes/default/css/testlink.css", ENDITEM, 
		"Url=gui/themes/default/css/tl_print.css", ENDITEM, 
		"Url=gui/themes/default/images/navbar.gif", ENDITEM, 
		"Url=gui/niftycube/niftyCorners.css", ENDITEM, 
		LAST);

	lr_think_time(8);

	web_url("New User?", 
		"URL=http://192.168.0.106/testlink/firstLogin.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(38);

	web_submit_data("firstLogin.php", 
		"Action=http://192.168.0.106/testlink/firstLogin.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/firstLogin.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=test1", ENDITEM, 
		"Name=password", "Value=test1", ENDITEM, 
		"Name=password2", "Value=test1", ENDITEM, 
		"Name=firstName", "Value=test1", ENDITEM, 
		"Name=lastName", "Value=test1", ENDITEM, 
		"Name=email", "Value=edwin@Edwin-Salve.com", ENDITEM, 
		"Name=doEditUser", "Value=Add User Data", ENDITEM, 
		LAST);

	web_url("login.php_2", 
		"URL=http://192.168.0.106/testlink/login.php?note=first", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/firstLogin.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Accept-Language");

	lr_think_time(8);

	web_url("IE9CompatViewList.xml", 
		"URL=http://ie9cvlist.ie.microsoft.com/IE9CompatViewList.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"zh-CN");

	lr_think_time(6);

	web_submit_data("login.php_3", 
		"Action=http://192.168.0.106/testlink/login.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php?note=first", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_protection_token", "Value=20160813d8652ded0756e431f2a1656a1275106180996c5f", ENDITEM, 
		"Name=reqURI", "Value=", ENDITEM, 
		"Name=destination", "Value=", ENDITEM, 
		"Name=tl_login", "Value=test1", ENDITEM, 
		"Name=tl_password", "Value=test1", ENDITEM, 
		"Name=login_submit", "Value=Login", ENDITEM, 
		LAST);

	web_reg_find("Text=test1", 
		LAST);

	web_url("index.php", 
		"URL=http://192.168.0.106/testlink/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=gui/themes/default/images/white-top-bottom.gif", "Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", ENDITEM, 
		LAST);

	return 0;
}