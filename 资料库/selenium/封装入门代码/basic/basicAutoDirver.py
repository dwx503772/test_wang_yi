from selenium import webdriver


class BasicAutoDriverLib(object):

    def __init__(self):
        print("instance of BasicAutoDriverLib init...")
        self.browser = webdriver.Firefox()

    def openBrowser(self, url):
        """
        第一步：打开浏览器（火狐浏览器）
        第二步：输入网址（url）
        第三步：窗口最大化
        """
        self.browser.get(url)
        self.browser.maximize_window()

    def closeBrowser(self):
        """
        关闭浏览器
        """
        self.browser.close()

    def typeById(self, id, text):
        """
        第一步：根据元素Id去定位，定位以后清除元素原本的文字（比如：输入框里的文字）
        第二步：向定位好的元素中输入指定的文字 text
        """
        self.browser.find_element_by_id(id).clear()
        self.browser.find_element_by_id(id).send_keys(text)

    def clickById(self, id):
        """
        第一步：根据元素Id去定位
        第二步：单击定位好的元素
        """
        self.browser.find_element_by_id(id).click()

    def getUrl(self):
        """
        返回当前浏览器的URL
        """
        return self.browser.current_url

    def newPrint(self, a, b):
        print(a % b)
