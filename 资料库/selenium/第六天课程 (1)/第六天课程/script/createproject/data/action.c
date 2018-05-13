Action()
{

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

	lr_think_time(7);

	web_submit_data("login.php_2", 
		"Action=http://192.168.0.106/testlink/login.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_protection_token", "Value=2016081651ce685e407c399b7351b5b67834453a044d4e14", ENDITEM, 
		"Name=reqURI", "Value=", ENDITEM, 
		"Name=destination", "Value=", ENDITEM, 
		"Name=tl_login", "Value=admin", ENDITEM, 
		"Name=tl_password", "Value=test1", ENDITEM, 
		"Name=login_submit", "Value=Login", ENDITEM, 
		LAST);

	web_url("index.php", 
		"URL=http://192.168.0.106/testlink/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("projectEdit.php", 
		"URL=http://192.168.0.106/testlink/lib/project/projectEdit.php?doAction=create", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/testlink/third_party/fckeditor/fckconfig.js", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/editor/js/fckeditorcode_ie.js", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/cfg/tl_fckeditor_config.js", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/editor/skins/default/fck_editor.css", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/editor/lang/zh-cn.js", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.expand.gif", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.collapse.gif", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.buttonarrow.gif", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.start.gif", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/editor/skins/default/fck_strip.gif", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/editor/css/fck_editorarea.css", "Referer=", ENDITEM, 
		"Url=/testlink/third_party/fckeditor/fckstyles.xml", "Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", ENDITEM, 
		LAST);

	lr_think_time(26);

	web_submit_data("projectEdit.php_2", 
		"Action=http://192.168.0.106/testlink/lib/project/projectEdit.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectEdit.php?doAction=create", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_protection_token", "Value=2016081641c70eca84b14c8dd7729d33b2443e2b47c7a8b2", ENDITEM, 
		"Name=tprojectName", "Value=testproject1", ENDITEM, 
		"Name=tcasePrefix", "Value=testproject1", ENDITEM, 
		"Name=notes", "Value=", ENDITEM, 
		"Name=issue_tracker_id", "Value=0", ENDITEM, 
		"Name=active", "Value=on", ENDITEM, 
		"Name=is_public", "Value=on", ENDITEM, 
		"Name=doAction", "Value=doCreate", ENDITEM, 
		"Name=tprojectID", "Value=0", ENDITEM, 
		"Name=doActionButton", "Value=´´½¨", ENDITEM, 
		EXTRARES, 
		"Url=/testlink/gui/themes/default/images/white-top-bottom.gif", ENDITEM, 
		LAST);

	web_reg_find("Text=testproject1", 
		LAST);

	web_url("navBar.php", 
		"URL=http://192.168.0.106/testlink/lib/general/navBar.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectEdit.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}