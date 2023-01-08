import pyautogui
import pyperclip

# 1. 키보드 입력 (문자)
# pyautogui.write('Start Python', interval = 0.25)

# 2. 키보드 입력 (키)
# pyautogui.press('enter')
# pyautogui.press('up')

# 3. 키보드 입력 (여러 개의 키를 동시에 입력)
# pyautogui.hotkey('ctrl','c') 

# 4. 한글 입력 방법
pyperclip.copy('유니티 엔진')
pyautogui.hotkey('ctrl','v')


