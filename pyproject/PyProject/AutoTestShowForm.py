import tkinter as tk
import time
import threading
import sys

'''
函数调用说明：
第1行：显示标题
第2行：显示提示信息
第3行开始：显示具体的参数名称与参数名称对应的测量值
....
第n行
目前预定义了5个参数，后续增加参数时自行扩展
'''
class UIEntity:
    timeOut = '10'#界面显示的最大时长（秒）
    IsStop = False
    row1_title_info = '测试标题'
    row2_messageTips = '提示消息'
    row3_name = '转速'#从第三行开始显示具体的参数与参数值
    row3_value = '20'
    row4_name = '发动机转速'
    row4_value = '40'
    row5_name = '汽车速度'
    row5_value = '47'
    row6_name = '负荷值'
    row6_value = '28'
    row7_name = '发动机水温'
    row7_value = '67'
    row8_name = '发动机'
    row8_value = '67'
    row9_name = 'name9'
    row9_value = 'value9'

global winEnty #实体类，用于存储界面显示的参数名称与参数值
winEnty = UIEntity()

def UpdateUIParams():#获取参数并设定到界面
    tk_row1_title.set(winEnty.row1_title_info)
    tk_row2_message.set(winEnty.row2_messageTips)
    tk_row3_lbxName.set(winEnty.row3_name)
    tk_row3_value.set(winEnty.row3_value)
    tk_row4_lbxName.set(winEnty.row4_name)
    tk_row4_value.set(winEnty.row4_value)
    tk_row5_lbxName.set(winEnty.row5_name)
    tk_row5_value.set(winEnty.row5_value)
    tk_row6_lbxName.set(winEnty.row6_name)
    tk_row6_value.set(winEnty.row6_value)
    tk_row7_lbxName.set(winEnty.row7_name)
    tk_row7_value.set(winEnty.row7_value)

def CreateRow1Title():#创建标题LABEL
    label = tk.Label(frame1, textvariable = tk_row1_title, justify = tk.LEFT, fg='black', font=("微软雅黑", 14))
    label.pack(side = tk.LEFT)

def CreateRow2Message():#创建消息提示MESSAGE
    label = tk.Label(frame2, textvariable = tk_row2_message, justify = tk.LEFT, fg='red', font=("微软雅黑", 11))
    label.pack(side = tk.LEFT)

def CreateRow3Params():#创建第1个参数LABEL
    lbx_p1 = tk.Label(frame3, textvariable = tk_row3_lbxName, justify = tk.CENTER, fg='black', font=("宋体", 12))
    lbx_p1.pack(side = tk.LEFT)

    lbx_p2 = tk.Label(frame3, textvariable=tk_row3_value, justify=tk.RIGHT, fg='blue', font=("宋体", 12))
    lbx_p2.pack(side=tk.RIGHT)

def CreateRow4Params():#创建第2个参数LABEL
    lbx_p1 = tk.Label(frame4, textvariable = tk_row4_lbxName, justify = tk.CENTER, fg='black', font=("宋体", 12))
    lbx_p1.pack(side = tk.LEFT)
    lbx_p2 = tk.Label(frame4, textvariable=tk_row4_value, justify=tk.RIGHT, fg='blue', font=("宋体", 12))
    lbx_p2.pack(side=tk.RIGHT)

def CreateRow5Params():#创建第3个参数LABEL
    lbx_p1 = tk.Label(frame5, textvariable = tk_row5_lbxName, justify = tk.RIGHT, fg='black', font=("宋体", 12))
    lbx_p1.pack(side = tk.LEFT)
    lbx_p2 = tk.Label(frame5, textvariable=tk_row5_value, justify=tk.CENTER, fg='blue', font=("宋体", 12))
    lbx_p2.pack(side=tk.RIGHT)

def CreateRow6Params():#创建第4个参数LABEL
    lbx_p1 = tk.Label(frame6, textvariable = tk_row6_lbxName, justify = tk.RIGHT, fg='black', font=("宋体", 12))
    lbx_p1.pack(side = tk.LEFT)
    lbx_p2 = tk.Label(frame6, textvariable=tk_row6_value, justify=tk.LEFT, fg='blue', font=("宋体", 12))
    lbx_p2.pack(side=tk.RIGHT)

def CreateRow7Params():#创建第5参数LABEL
    lbx_p1 = tk.Label(frame7, textvariable = tk_row7_lbxName, justify = tk.RIGHT, fg='black', font=("宋体", 12))
    lbx_p1.pack(side = tk.LEFT)
    lbx_p2 = tk.Label(frame7, textvariable=tk_row7_value, justify=tk.LEFT, fg='blue', font=("宋体", 12))
    lbx_p2.pack(side=tk.RIGHT)

# def CreateButton():
#     btn = tk.Button(frame7, text='startTest', command=StartTestThread, fg='black', font=("微软雅黑", 10))
#     btn.pack()

class ShowMessageBox:
    def __init__(self):
        self.root = tk.Tk()
        global frame1, frame2, frame3, frame4, frame5, frame5, frame6, frame7, frame8
        frame1 = tk.Frame(self.root)
        frame2 = tk.Frame(self.root)
        frame3 = tk.Frame(self.root)
        frame4 = tk.Frame(self.root)
        frame5 = tk.Frame(self.root)
        frame6 = tk.Frame(self.root)
        frame7 = tk.Frame(self.root)
        frame8 = tk.Frame(self.root)

        self.root.resizable(False, False)  # 不可调整大小
        width = self.root.winfo_width()
        height = self.root.winfo_height()
        x = (self.root.winfo_screenwidth() - width) // 2
        y = (self.root.winfo_screenheight() - height) // 2 - 50
        self.root.geometry('300x380')
        self.root.geometry('+%d+%d' % (x, y))
        self.root.title("OBDAutoTest")

        # frame1.pack(padx=100, pady=10)
        frame1.pack(side=tk.TOP, padx=65, fill=tk.BOTH, expand=tk.YES)
        frame2.pack(side=tk.TOP, padx=50, fill=tk.BOTH, expand=tk.YES)
        frame3.pack(side=tk.TOP, padx=50, pady=10, fill=tk.BOTH, expand=tk.YES)
        frame4.pack(side=tk.TOP, padx=50, pady=10, fill=tk.BOTH, expand=tk.YES)
        frame5.pack(sid=tk.TOP, padx=50, pady=10, fill=tk.BOTH, expand=tk.YES)
        frame6.pack(side=tk.TOP, padx=50, pady=10, fill=tk.BOTH, expand=tk.YES)
        frame7.pack(side=tk.TOP, padx=50, pady=10, fill=tk.BOTH, expand=tk.YES)
        frame8.pack(side=tk.TOP, padx=50, pady=10, fill=tk.BOTH, expand=tk.YES)
        global tk_row1_title, tk_row2_message,tk_row2_lbxName,tk_row2_value,tk_row3_lbxName,tk_row3_value,\
            tk_row4_lbxName,tk_row4_value,tk_row5_lbxName,tk_row5_value,tk_row6_lbxName,tk_row6_value,\
            tk_row7_lbxName,tk_row7_value,tk_row8_lbxName,tk_row8_value,tk_r9_timer

        tk_row1_title = tk.StringVar()
        tk_row2_message = tk.StringVar()
        tk_row3_lbxName = tk.StringVar()
        tk_row3_value = tk.StringVar()
        tk_row4_lbxName = tk.StringVar()
        tk_row4_value = tk.StringVar()
        tk_row5_lbxName = tk.StringVar()
        tk_row5_value = tk.StringVar()
        tk_row6_lbxName = tk.StringVar()
        tk_row6_value = tk.StringVar()
        tk_row7_lbxName = tk.StringVar()
        tk_row7_value = tk.StringVar()
        tk_row8_lbxName = tk.StringVar()
        tk_row8_value = tk.StringVar()
        tk_r9_timer = tk.StringVar()
        tk_r9_timer.set('00:00:00')
        UpdateUIParams()
        CreateRow1Title()
        CreateRow2Message()
        CreateRow3Params()
        CreateRow4Params()
        CreateRow5Params()
        CreateRow6Params()
        CreateRow7Params()
        self.count = 1
        self.refreshUI()
        self.root.mainloop()

    # def refreshUI(self):
    #     if self.count <= int(winEnty.timeOut):
    #         root.after(1000, self.refreshUI)
    #     elif self.count > int(winEnty.timeOut):
    #         # self.root.destroy()
    #         Close()
    #     self.count += 1

    def refreshUI(self):
        if winEnty.IsStop == False:
            self.root.after(1000, self.refreshUI)
        elif winEnty.IsStop == True:
            self.root.destroy()

    def CloseForm(self):
        self.root.destroy()

def ShowTestFormBox():
    ShowMessageBox()

def UpdateShowParams(timeOut, title, message, row3lbxName, row3Value, row4lbxName, row4Value, row5lbxName, row5Value, row6lbxName, row6Value,row7lbxName, row7Value):
    winEnty.timeOut = timeOut
    winEnty.row1_title_info = title
    winEnty.row2_messageTips = message
    winEnty.row3_name = row3lbxName
    winEnty.row3_value = row3Value
    winEnty.row4_name = row4lbxName
    winEnty.row4_value = row4Value
    winEnty.row5_name = row5lbxName
    winEnty.row5_value = row5Value
    winEnty.row6_name = row6lbxName
    winEnty.row6_value = row6Value
    winEnty.row7_name = row7lbxName
    winEnty.row7_value = row7Value
    winEnty.IsStop = False
def CloseForm():
    winEnty.IsStop = True