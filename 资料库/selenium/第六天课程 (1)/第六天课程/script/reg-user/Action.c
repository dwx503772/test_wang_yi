Action()
{
	web_set_max_html_param_len("1024");
	//web_reg_save_param();
	lr_save_string("192.168.0.106","ip");
	web_url("login.php", 
		"URL=http://{ip}/testlink/login.php", 
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

	lr_think_time(6);

	web_url("New User?", 
		"URL=http://{ip}/testlink/firstLogin.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{ip}/testlink/login.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);


	web_submit_data("firstLogin.php", 
		"Action=http://{ip}/testlink/firstLogin.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{ip}/testlink/firstLogin.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value={userName}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=password2", "Value={password}", ENDITEM, 
		"Name=firstName", "Value={firstname}", ENDITEM, 
		"Name=lastName", "Value={lastname}", ENDITEM, 
		"Name=email", "Value={email}", ENDITEM, 
		"Name=doEditUser", "Value=Add User Data", ENDITEM, 
		LAST);

	web_reg_save_param_ex(
		"ParamName=sessionPara",
		"LB=name=\"csrf_protection_token\" value=\"",
		"RB=>",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);



	web_url("login.php_2",
		"URL=http://{ip}/testlink/login.php?note=first",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/firstLogin.php",
		"Snapshot=t4.inf",
		"Mode=HTML",
		LAST);

	lr_think_time(5);

	web_submit_data("login.php_3",
		"Action=http://{ip}/testlink/login.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/login.php?note=first",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=csrf_protection_token", "Value={sessionPara}", ENDITEM,
		"Name=reqURI", "Value=", ENDITEM,
		"Name=destination", "Value=", ENDITEM,
		"Name=tl_login", "Value={userName}", ENDITEM,
		"Name=tl_password", "Value={password}", ENDITEM,
		"Name=login_submit", "Value=Login", ENDITEM,
		LAST);

web_reg_find("Text={userName}",
		LAST);

	web_url("index.php",
		"URL=http://{ip}/testlink/index.php",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t6.inf",
		"Mode=HTML",
		EXTRARES,
		"Url=gui/themes/default/images/white-top-bottom.gif", "Referer=http://{ip}/testlink/lib/general/mainPage.php", ENDITEM,
		LAST);
// 	web_find("Text={userName}",LAST);
	return 0;
}