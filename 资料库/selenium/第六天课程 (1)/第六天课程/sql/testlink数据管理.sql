SELECT * FROM users;
SELECT COUNT(1) FROM users;
UPDATE users SET role_id=8;
##造数脚本
INSERT INTO `users` (`login`, `PASSWORD`, `role_id`, `email`, `FIRST`, `LAST`, `locale`, `default_testproject_id`, `active`, `script_key`, `cookie_string`) VALUES('test2','5a105e8b9d40e1329780d63ea2265d8a','5','edwin@Edwin-Salve.com','test1','test1','en_GB',NULL,'1',NULL,'0108af17742c36b4e96158b3e3ee34bfa033a2365f03629962012ee8e8ab1d92');
##删除数据
DELETE FROM users WHERE login LIKE '%test%'
##查询记录
SELECT COUNT(1) FROM users;
#项目查询
SELECT * FROM testprojects;
SELECT COUNT(1) FROM testprojects;
#删除项目
DELETE FROM testprojects WHERE prefix LIKE '%testproject%'