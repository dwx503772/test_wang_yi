Action()
{

	web_add_auto_header("Accept-Language", 
		"zh-CN");

	web_url("login.php", 
		"URL=http://192.168.0.106/testlink/login.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("testlink.css", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/css/testlink.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("tl_print.css", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/css/tl_print.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("niftycube.js", 
		"URL=http://192.168.0.106/testlink/gui/niftycube/niftycube.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("test_automation.js", 
		"URL=http://192.168.0.106/testlink/gui/javascript/test_automation.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("prototype.js", 
		"URL=http://192.168.0.106/testlink/third_party/prototype/prototype.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("testlink_library.js", 
		"URL=http://192.168.0.106/testlink/gui/javascript/testlink_library.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("company_logo.png", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/company_logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("sorttable.js", 
		"URL=http://192.168.0.106/testlink/gui/javascript/sorttable.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/vnd.microsoft.icon", 
		"Referer=", 
		"Snapshot=t12.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("navbar.gif", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/navbar.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("niftyCorners.css", 
		"URL=http://192.168.0.106/testlink/gui/niftycube/niftyCorners.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(7);

	web_url("New User?", 
		"URL=http://192.168.0.106/testlink/firstLogin.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(29);

	web_submit_data("firstLogin.php", 
		"Action=http://192.168.0.106/testlink/firstLogin.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/firstLogin.php", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
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
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/firstLogin.php", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(13);

	web_submit_data("login.php_3", 
		"Action=http://192.168.0.106/testlink/login.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php?note=first", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=csrf_protection_token", "Value=20160813334dc6994a35652f9e2838b79e88cbc84123e962", ENDITEM, 
		"Name=reqURI", "Value=", ENDITEM, 
		"Name=destination", "Value=", ENDITEM, 
		"Name=tl_login", "Value=test1", ENDITEM, 
		"Name=tl_password", "Value=test1", ENDITEM, 
		"Name=login_submit", "Value=Login", ENDITEM, 
		LAST);

	web_url("index.php", 
		"URL=http://192.168.0.106/testlink/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_reg_find("Text=: test1", 
		LAST);

	web_url("navBar.php", 
		"URL=http://192.168.0.106/testlink/lib/general/navBar.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/index.php", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("mainPage.php", 
		"URL=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/index.php", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("magnifier.png", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images//magnifier.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.0.106/testlink/lib/general/navBar.php", 
		"Snapshot=t19.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ext-all.css", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/css/ext-all.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("RangeMenu.css", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/css/RangeMenu.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("ListMenu.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/menu/ListMenu.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("GridFilters.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/GridFilters.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("StringFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/StringFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("Filter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/Filter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("GridFilters.css", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/css/GridFilters.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("DateFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/DateFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("ListFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/ListFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("BooleanFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/BooleanFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("NumericFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/NumericFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("ext-lang-en_GB.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/src/locale/ext-lang-en_GB.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("TableGrid.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/TableGrid.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("slide_gripper.gif", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/slide_gripper.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("Reorderer.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/Reorderer.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("ext-base.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/adapter/ext/ext-base.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("ext-all.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ext-all.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("ToolbarReorderer.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/ToolbarReorderer.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("ToolbarDroppable.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/ToolbarDroppable.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("Exporter-all.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/Exporter-all.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("RangeMenu.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/menu/RangeMenu.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t41.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("white-top-bottom.gif", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/white-top-bottom.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t42.inf", 
		LAST);

	return 0;
}