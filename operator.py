from selenium import webdriver
from selenium.webdriver.common.by import By
import time
import pyautogui
import pyperclip

# 셀레니옴 사용 방법
# browser = webdriver.Chrome("c:chromedrive.exe")
# browser.get("https://www.naver.com")

url = "https://nid.naver.com/nidlogin.login?mode=form&url=https%3A%2F%2Fwww.naver.com"

loginBrowser = webdriver.Chrome("c:/chormediver.exe")

# 웹 페이지가 로딩될 깨까지 최대 10초를 기다립니다.
loginBrowser.implicitly_wait(10)
# 웹 페이지 화면을 최대 크기로 설정합니다.
loginBrowser.maximize_window()
# 웹 페이지 열기
loginBrowser.get(url)

# ID 입력과 ID Inputfeild 선택
id = loginBrowser.find_element('id','id')

pyperclip.copy("kileab")
pyautogui.hotkey("ctrl", "v")
time.sleep(1)

# Password 설정
password = loginBrowser.find_element('id','pw').click()
pyperclip.copy("Pressure")
pyautogui.hotkey("ctrl", "v")
time.sleep(1)

# 로그인 
loginSelect = loginBrowser.find_element("id","log\.login").click()

# 웹 브라우저 종료 방지
while(True):
    pass