from selenium import webdriver

driver = webdriver.Firefox()
driver.get("https://www.jd.com")
driver.find_element_by_id("key").clear()
driver.find_element_by_id("key").send_keys("iphone6s")
driver.find_element_by_class_name("button").click()
