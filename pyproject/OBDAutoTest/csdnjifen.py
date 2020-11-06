#coding=utf-8
import os,time
from splinter import Browser

# from timeout import timeout


def login(username="wojiaoqsc@gmail.com",passwd="dengdengdeng"):
    """登录csdn"""
    global browser
    url = "http://passport.csdn.net/account/login"
    browser.visit(url)
    # browser.fill('f', 'splinter - python acceptance testing for web applications')
    # Find and click the 'search' button
    btnEmail = browser.find_by_id('username')
    btnPasswd = browser.find_by_id('password')
    btnRemember = browser.find_by_name('rememberMe')


    btnEmail.fill(username)#用户名
    btnPasswd.fill(passwd)#密码
    btnRemember.check()#
    #print dir(browser)
    # Interact with elements
    btnSubmit = browser.find_by_value("登 录")
    btnSubmit.click()#登录
    time.sleep(7)
    # button.click()

time.sleep(5)
def download():
    global browser

    print("try to clcik")
    btnDownload = browser.find_by_css(r'#wrap > div.bd.clearfix > div.article > div.information.mb-bg.clearfix > div.info > a.btn.btn-primary.btn-lg.WCDMA.btndownload')[0]
    btnDownload.click()
    time.sleep(4)
    btnDownload = browser.find_by_css(r'#download_btn2')[0]
    btnDownload.click()
    # btnDownload = browser.find_by_xpath(r'//*[@id="download_btn2"]')[0]
    # btnDownload.click()
    time.sleep(3)
    # btnConfirm = browser.find_by_xpath(r'//*[@id="user_score_btn"]')[0]
    # btnConfirm.click()
    # print "done"

        # try:
    btnConfirm = browser.find_by_xpath(r'//*[@id="user_score_btn"]')[0]
    btnConfirm.click()
            # time.sleep(3)
            # print "done"
        # except:
            # print "error"

def searchFree():
    """用百度搜索免费的资源，返回资源的列表"""
    global browser
    url = "http://www.baidu.com"
    browser.visit(url)
    btnKeyWord = browser.find_by_id('kw')[0]
    btnKeyWord.fill(u'"资源积分:0分"  联通下载 pdf  site:download.csdn.net')#密码
    btnSubmit = browser.find_by_id("su")[0]
    btnSubmit.click()#提交搜素

    base = 0
    time.sleep(4)
    for page in range(1,90):
        # timerThread = closeWindow(browser)
        # timerThread.start()
        print(base," base")
        print(page," page")
        for x in range(base+1,base+11):
            print(x)
            time.sleep(4)
            urlTmp = browser.find_by_xpath('//*[@id="%d"]/h3/a'%x)[0]
            urlTmp.click()
            browser.windows.current = browser.windows[1]
            browser.driver.set_window_size(800,1000)
            time.sleep(6)
            download()
            print("time out error")
            browser.windows.current = browser.windows[0]
            browser.windows.current.close_others() #关闭窗口
        base = base + 10
        nextPage = browser.find_link_by_text(u"下一页>")[0]
        nextPage.click()


if __name__ == "__main__":
    browser = Browser('chrome')#
    login()
    searchFree()
    print("Hello Kitty")