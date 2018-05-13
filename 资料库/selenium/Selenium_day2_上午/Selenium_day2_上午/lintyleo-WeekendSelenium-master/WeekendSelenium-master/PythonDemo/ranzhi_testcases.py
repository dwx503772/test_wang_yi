# 引入unittest模组
import unittest
from time import sleep

from selenium import webdriver


# 继承unittest.TestCase基类
class RanzhiTestCases(unittest.TestCase):
    # define a method
    # 测试方法以test开头
    def test_log_in(self):
        base_url = "http://localhost:808/ranzhi/www"
        driver = webdriver.Firefox()
        driver.get(base_url)
        sleep(2)

        # 改变语言为中文简体
        driver.find_element_by_class_name("btn").click()
        driver.find_element_by_link_text("简体").click()
        sleep(1)

        account = driver.find_element_by_id("account")
        account.clear()
        account.send_keys("admin")

        password = driver.find_element_by_id("password")
        password.clear()
        password.send_keys("admin")

        driver.find_element_by_id("submit").click()
        sleep(2)

        expected = base_url + "/sys/index.html"
        actual = driver.current_url
        # 断言
        self.assertEqual(expected, actual, "登录页面导航失败")

        driver.quit()
