import tkinter as tk
import UIEntity as entity
import time
import threading

root = tk.Tk()

frame1 = tk.Frame(root)
frame2 = tk.Frame(root)
frame3 = tk.Frame(root)
frame4 = tk.Frame(root)
frame5 = tk.Frame(root)
frame6 = tk.Frame(root)
frame7 = tk.Frame(root)
frame8 = tk.Frame(root)

root.resizable(False, False)  # 不可调整大小
width = root.winfo_width()
height = root.winfo_height()
x = (root.winfo_screenwidth() - width) // 2
y = (root.winfo_screenheight() - height) // 2 - 50
root.geometry('350x380')
root.geometry('+%d+%d' % (x, y))
root.title("OBDAutoTest")

frame1.pack(padx=100, pady=10)
frame2.pack(padx=100, pady=10)
frame3.pack(padx=100, pady=10)
frame4.pack(padx=100, pady=10)
frame5.pack(padx=100, pady=10)
frame6.pack(padx=100, pady=10)
frame7.pack(padx=100, pady=10)
frame8.pack(padx=100, pady=10)
winEnty = entity.UIEntity()

tk_r1 = tk.StringVar()
tk_r2_p1 = tk.StringVar()
tk_r2_p2 = tk.StringVar()
tk_r3_p1 = tk.StringVar()
tk_r3_p2 = tk.StringVar()
tk_r4_p1 = tk.StringVar()
tk_r4_p2 = tk.StringVar()
tk_r5_p1 = tk.StringVar()
tk_r5_p2 = tk.StringVar()
tk_r6_p1 = tk.StringVar()
tk_r6_p2 = tk.StringVar()
tk_r7_p1 = tk.StringVar()
tk_r7_p2 = tk.StringVar()
tk_r8_timer = tk.StringVar()
tk_r8_timer.set('00:00:00')

def UpdateUIParams():
    tk_r1.set(winEnty.get_r1())
    tk_r2_p1.set(winEnty.get_r2_p1())
    tk_r2_p2.set(winEnty.get_r2_p2())
    tk_r3_p1.set(winEnty.get_r3_p1())
    tk_r3_p2.set(winEnty.get_r3_p2())
    tk_r4_p1.set(winEnty.get_r4_p1())
    tk_r4_p2.set(winEnty.get_r4_p2())
    tk_r5_p1.set(winEnty.get_r5_p1())
    tk_r5_p2.set(winEnty.get_r5_p2())
    tk_r6_p1.set(winEnty.get_r6_p1())
    tk_r6_p2.set(winEnty.get_r6_p2())
    tk_r7_p1.set(winEnty.get_r7_p1())
    tk_r7_p2.set(winEnty.get_r7_p2())

def CreateRow1Title():
    label = tk.Label(frame1, textvariable = tk_r1, justify = tk.LEFT, fg='black', font=("微软雅黑", 12))
    label.pack(side = tk.LEFT)

def CreateRow2Params():
    lbx_p1 = tk.Label(frame2, textvariable = tk_r2_p1, justify = tk.LEFT, fg='black', font=("微软雅黑", 12))
    lbx_p1.pack(side = tk.LEFT)
    lbx_p2 = tk.Label(frame2, textvariable=tk_r2_p2, justify=tk.RIGHT, fg='blue', font=("微软雅黑", 12))
    lbx_p2.pack(side=tk.RIGHT)

def CreateRow3Params():
    lbx_p1 = tk.Label(frame3, textvariable = tk_r3_p1, justify = tk.LEFT, fg='black', font=("微软雅黑", 12))
    lbx_p1.pack(side = tk.LEFT)
    lbx_p2 = tk.Label(frame3, textvariable=tk_r3_p2, justify=tk.RIGHT, fg='blue', font=("微软雅黑", 12))
    lbx_p2.pack(side=tk.RIGHT)

def CreateRow4Params():
    lbx_p1 = tk.Label(frame4, textvariable = tk_r4_p1, justify = tk.LEFT, fg='black', font=("微软雅黑", 12))
    lbx_p1.pack(side = tk.LEFT)
    lbx_p2 = tk.Label(frame4, textvariable=tk_r4_p2, justify=tk.RIGHT, fg='blue', font=("微软雅黑", 12))
    lbx_p2.pack(side=tk.RIGHT)

def CreateRow5Params():
    lbx_p1 = tk.Label(frame5, textvariable = tk_r5_p1, justify = tk.LEFT, fg='black', font=("微软雅黑", 12))
    lbx_p1.pack(side = tk.LEFT)
    lbx_p2 = tk.Label(frame5, textvariable=tk_r5_p2, justify=tk.RIGHT, fg='blue', font=("微软雅黑", 12))
    lbx_p2.pack(side=tk.RIGHT)

def CreateRow6Params():
    lbx_p1 = tk.Label(frame6, textvariable = tk_r6_p1, justify = tk.LEFT, fg='black', font=("微软雅黑", 12))
    lbx_p1.pack(side = tk.LEFT)
    lbx_p2 = tk.Label(frame6, textvariable=tk_r6_p2, justify=tk.RIGHT, fg='blue', font=("微软雅黑", 12))
    lbx_p2.pack(side=tk.RIGHT)

def StartTestThread():
    threading.Thread(target=DefineTestContent).start()
    threading.Thread(target=StartTimer).start()

def StartTimer():
    try:
        winEnty.timerCount = 0
        while True:
            if winEnty.stopFlag == 1:
                if(winEnty.timerCount < int(tk_r2_p2.get())):
                    if str(winEnty.timerCount).__len__() == 1:
                        tk_r8_timer.set('00:00:0' + str(winEnty.timerCount))
                    else:
                        tk_r8_timer.set('00:00:' + str(winEnty.timerCount))
                    winEnty.timerCount = winEnty.timerCount + 1
                else:
                    print('超时', tk_r2_p2.get())
                    winEnty.stopFlag = 0
                time.sleep(1)
            elif winEnty.stopFlag == 0:
                time.sleep(1)
            elif winEnty.stopFlag == -1:
                break
    except Exception as ex:
        print(ex)

def CreateTimerText():
    lbx = tk.Label(frame8, textvariable=tk_r8_timer, justify=tk.RIGHT, fg='black', font=("微软雅黑", 13))
    lbx.pack(side=tk.RIGHT)

def CreateButton():
    btn = tk.Button(frame7, text='startTest', command=StartTestThread, fg='black', font=("微软雅黑", 10))
    btn.pack()

def StartAutoTest():
    UpdateUIParams()
    CreateRow1Title()
    CreateRow2Params()
    CreateRow3Params()
    CreateRow4Params()
    CreateRow5Params()
    CreateRow6Params()
    CreateButton()
    CreateTimerText()
    root.mainloop()

def SetRow1Info(taskInfo):
    tk_r1.set(taskInfo)
def SetRow2Info(tips, value):
    tk_r2_p1.set(tips)
    tk_r2_p2.set(value)
def SetRow3Info(tips, value):
    tk_r3_p1.set(tips)
    tk_r3_p2.set(value)
def SetRow4Info(tips, value):
    tk_r4_p1.set(tips)
    tk_r4_p2.set(value)
def SetRow5Info(tips, value):
    tk_r5_p1.set(tips)
    tk_r5_p2.set(value)
def SetRow6Info(tips, value):
    tk_r6_p1.set(tips)
    tk_r6_p2.set(value)
def SetViewParams(taskInfo, r2_tips, r2_val, r3_tips, r3_val, r4_tips, r4_val, r5_tips, r5_val, r6_tips, r6_val):
    SetStartTaskFlags()
    SetRow1Info(taskInfo)
    SetRow2Info(r2_tips, r2_val)
    SetRow3Info(r3_tips, r3_val)
    SetRow4Info(r4_tips, r4_val)
    SetRow5Info(r5_tips, r5_val)
    SetRow6Info(r6_tips, r6_val)
def SetStartTaskFlags():
    winEnty.timerCount = 0  # 每一个任务结束完成后timerCount设置为0清空计数
    winEnty.stopFlag = 1#开始测试时，stopFlag设置为1开始计数
def AllTaskCompled():
    winEnty.stopFlag = 0#最终测试完成后，stopFlag设置为0，结束循环

def DefineTestContent():
    SetViewParams('start task0001', '超时时间', '10', 'enginSpeed', '23', 'carSpeed', '87', 'load', '3', 'temperature',
                  '43')
    time.sleep(4)
    SetViewParams('start task0001', 'outTime', '17', 'enginSpeed', '23', 'carSpeed', '87', 'load', '39', 'temperature',
                  '49')
    time.sleep(4)
    AllTaskCompled()

StartAutoTest()
