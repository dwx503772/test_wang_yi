Action()
{

	web_url("login.php", 
		"URL=http://192.168.0.106/testlink/login.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_url("testlink_library.js", 
		"URL=http://192.168.0.106/testlink/gui/javascript/testlink_library.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("prototype.js", 
		"URL=http://192.168.0.106/testlink/third_party/prototype/prototype.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("niftycube.js", 
		"URL=http://192.168.0.106/testlink/gui/niftycube/niftycube.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("company_logo.png", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/company_logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("sorttable.js", 
		"URL=http://192.168.0.106/testlink/gui/javascript/sorttable.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("test_automation.js", 
		"URL=http://192.168.0.106/testlink/gui/javascript/test_automation.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("navbar.gif", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/navbar.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/vnd.microsoft.icon", 
		"Referer=", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("niftyCorners.css", 
		"URL=http://192.168.0.106/testlink/gui/niftycube/niftyCorners.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t12.inf", 
		LAST);

	lr_think_time(6);

	web_submit_data("login.php_2", 
		"Action=http://192.168.0.106/testlink/login.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=csrf_protection_token", "Value=2016081606f9f47d526a886026dff0abd76929302a3d36bb", ENDITEM, 
		"Name=reqURI", "Value=", ENDITEM, 
		"Name=destination", "Value=", ENDITEM, 
		"Name=tl_login", "Value=admin", ENDITEM, 
		"Name=tl_password", "Value=test1", ENDITEM, 
		"Name=login_submit", "Value=Login", ENDITEM, 
		LAST);

	web_url("index.php", 
		"URL=http://192.168.0.106/testlink/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/login.php", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("navBar.php", 
		"URL=http://192.168.0.106/testlink/lib/general/navBar.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/index.php", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("magnifier.png", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images//magnifier.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.0.106/testlink/lib/general/navBar.php", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("mainPage.php", 
		"URL=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/index.php", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ext-all.css", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/css/ext-all.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("Exporter-all.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/Exporter-all.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("ListMenu.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/menu/ListMenu.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("GridFilters.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/GridFilters.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("Filter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/Filter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("StringFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/StringFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("ListFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/ListFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("NumericFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/NumericFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("GridFilters.css", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/css/GridFilters.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("BooleanFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/BooleanFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("ext-lang-zh_CN.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/src/locale/ext-lang-zh_CN.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("DateFilter.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/filter/DateFilter.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("slide_gripper.gif", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/slide_gripper.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("TableGrid.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/TableGrid.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("Reorderer.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/Reorderer.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("RangeMenu.css", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/css/RangeMenu.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("ext-all.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ext-all.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("ext-base.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/adapter/ext/ext-base.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("ToolbarReorderer.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/ToolbarReorderer.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("ToolbarDroppable.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/ToolbarDroppable.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("RangeMenu.js", 
		"URL=http://192.168.0.106/testlink/third_party/ext-js/ux/gridfilters/menu/RangeMenu.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("white-top-bottom.gif", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/white-top-bottom.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t39.inf", 
		LAST);

	lr_think_time(6);

	web_url("测试项目管理", 
		"URL=http://192.168.0.106/testlink/lib/project/projectView.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/lib/general/mainPage.php", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("brick.png", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/brick.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectView.php", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("sort_hint.png", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/sort_hint.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectView.php", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("apply_f2_16.png", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/apply_f2_16.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectView.php", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("trash.png", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images/trash.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectView.php", 
		"Snapshot=t44.inf", 
		LAST);

	web_submit_data("projectEdit.php", 
		"Action=http://192.168.0.106/testlink/lib/project/projectEdit.php?doAction=create", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectView.php", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=create", "Value=创建", ENDITEM, 
		LAST);

	web_url("validate.js", 
		"URL=http://192.168.0.106/testlink/gui/javascript/validate.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectEdit.php?doAction=create", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("cfield_validation.js", 
		"URL=http://192.168.0.106/testlink/gui/javascript/cfield_validation.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectEdit.php?doAction=create", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("error.gif", 
		"URL=http://192.168.0.106/testlink/gui/themes/default/images//error.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectEdit.php?doAction=create", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("fckeditor.html", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectEdit.php?doAction=create", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("spacer.gif", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/images/spacer.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("fckconfig.js", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/fckconfig.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("fckeditorcode_ie.js", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/js/fckeditorcode_ie.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("tl_fckeditor_config.js", 
		"URL=http://192.168.0.106/testlink/cfg/tl_fckeditor_config.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("fck_editor.css", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/skins/default/fck_editor.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("zh-cn.js", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/lang/zh-cn.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("toolbar.expand.gif", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.expand.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("toolbar.collapse.gif", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.collapse.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("toolbar.start.gif", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.start.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("fck_strip.gif", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/skins/default/fck_strip.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("toolbar.buttonarrow.gif", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.buttonarrow.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("fck_editorarea.css", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/editor/css/fck_editorarea.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("fckstyles.xml", 
		"URL=http://192.168.0.106/testlink/third_party/fckeditor/fckstyles.xml", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=http://192.168.0.106/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default", 
		"Snapshot=t62.inf", 
		LAST);

	lr_think_time(18);

	web_submit_data("projectEdit.php_2", 
		"Action=http://192.168.0.106/testlink/lib/project/projectEdit.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectEdit.php?doAction=create", 
		"Snapshot=t63.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=csrf_protection_token", "Value=20160816ef02911f62d71a1179a7f1a85353daa41152cb29", ENDITEM, 
		"Name=copy_from_tproject_id", "Value=0", ENDITEM, 
		"Name=tprojectName", "Value=testproject", ENDITEM, 
		"Name=tcasePrefix", "Value=testproject", ENDITEM, 
		"Name=notes", "Value=", ENDITEM, 
		"Name=issue_tracker_id", "Value=0", ENDITEM, 
		"Name=active", "Value=on", ENDITEM, 
		"Name=is_public", "Value=on", ENDITEM, 
		"Name=doAction", "Value=doCreate", ENDITEM, 
		"Name=tprojectID", "Value=0", ENDITEM, 
		"Name=doActionButton", "Value=创建", ENDITEM, 
		LAST);

	web_url("navBar.php_2", 
		"URL=http://192.168.0.106/testlink/lib/general/navBar.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.106/testlink/lib/project/projectEdit.php", 
		"Snapshot=t64.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}