import unittest
from time import sleep

from basic import basicAutoDirver


class NewTests(unittest.TestCase):
    def setUp(self):
        self.baseUrl = 'http://localhost:808/ranzhi/www'
        self.url_homePage = self.baseUrl + '/sys/index.html'
        self.url_loginPage = self.baseUrl + '/sys/user-login-L3JhbnpoaS93d3cvc3lzLw==.html'
        self.ab = basicAutoDirver.BasicAutoDriverLib()

    def tearDown(self):
        self.ab.closeBrowser()


    def test_001(self):
        """
        测试然之的登录
        """
        self.ab.openBrowser(self.url_loginPage)
        sleep(2)
        # 输入用户admin
        self.ab.typeById("account", "admin")
        # 输入密码admin
        self.ab.typeById("password", "admin")
        # 点击登录按钮
        self.ab.clickById("submit")
        sleep(2)
        # 判断页面是否转到然之的主页
        self.assertEqual(self.url_homePage, self.ab.getUrl(), "然之登录失败！ ")




