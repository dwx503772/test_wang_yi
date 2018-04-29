#coding:utf-8
"""
crate on 2018/04/10
@author: dingxingxiang
product: myunit.py
"""
import sys,os,time,re
import unittest
from selenium import webdriver

class MyUnit(unittest.TestCase):
    def setUp(self):
        self.driver = webdriver.Chrome()
        self.username = "18270726394@163.com"
        self.password = "112481ding"
        self.base_url = "http://mail.163.com"
        self.driver.get(self.base_url)
 #       self.driver.implicitly_wait(10)
 #       self.driver.maximize_window()
    def test_01(self):
        pass
    def tearDown(self):
        pass
#        self.driver.quit()
if __name__ == "__main__":
    unittest.main()

