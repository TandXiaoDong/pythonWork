import  tkinter as tk
import  time
import  sys

taskInfo = "testTaskInfo"
timeMaxss = 19
enginSpeed = 100
carSpeed = 108
waterTem = 23
loadValue = 0.8
lbxXPosition = 100
entryPosition = 70

win = tk.Tk()


def initUI():
    frame1 = tk.Frame(win)
    # self.frame1.pack(side = 'left')
    win.resizable(False, False)  # 不可调整大小
    width = win.winfo_width()
    height = win.winfo_height()
    x = (win.winfo_screenwidth() - width) // 2
    y = (win.winfo_screenheight() - height) // 2 - 50
    win.geometry('500x350')
    win.geometry('+%d+%d' % (x, y))
    win.title("TaskWin")
    win.minsize(40, 40)
    ctr = timeMaxss
    tk_var = tk.StringVar()
    tk_var.set("0")
    # lab=tk.Label(self.win, textvariable=self.tk_var,bg='#40E0D0', fg='#FF0000')     #换颜色
    # lab.place(x=20, y=30)
    tipInfo = tk.Label(win, text=str(taskInfo), textvariable=tk_var, fg='black', font=("微软雅黑", 16))
    tk_var.set(taskInfo)
    tipInfo.pack(side="top")  # 布局
    # timeout
    lbxTimeout = tk.Label(win, text="超时时间(s)", fg='black', font=("微软雅黑", 16))
    lbxTimeout.pack(side="left")
    yPosition = entryPosition
    lbxTimeout.place(x=lbxXPosition, y=yPosition)
    timeOut = tk.StringVar()
    entry = tk.Entry(win, textvariable=timeOut, show=None)
    timeOut.set("10")
    entry.pack()
    yPosition += 5
    entry.place(x=lbxXPosition + 135, y=yPosition)
    # timeout

    # enginSpeed
    lbxEnginSpeed = tk.Label(win, text="发动机转速", fg='black', font=("微软雅黑", 16))
    lbxEnginSpeed.pack(side="left")
    yPosition += 40
    lbxEnginSpeed.place(x=lbxXPosition, y=yPosition)
    enginSpeed = tk.StringVar()
    entry = tk.Entry(win, textvariable=enginSpeed, show=None)
    enginSpeed.set("67")
    entry.pack()
    yPosition += 5
    entry.place(x=lbxXPosition + 135, y=yPosition)
    # enginSpeed

    # carSpeed
    lbxCarSpeed = tk.Label(win, text="汽车速度", fg='black', font=("微软雅黑", 16))
    lbxCarSpeed.pack(side="left")
    yPosition += 40
    lbxCarSpeed.place(x=lbxXPosition, y=yPosition)
    carSpeed = tk.StringVar()
    entry = tk.Entry(win, textvariable=carSpeed, show=None)
    carSpeed.set("23")
    entry.pack()
    yPosition += 5
    entry.place(x=lbxXPosition + 135, y=yPosition)
    # carSpeed

    # loadVal
    lbxLoadVal = tk.Label(win, text="负载荷值", fg='black', font=("微软雅黑", 16))
    lbxLoadVal.pack(side="left")
    yPosition += 40
    lbxLoadVal.place(x=lbxXPosition, y=yPosition)
    loadVal = tk.StringVar()
    entry = tk.Entry(win, textvariable=loadVal, show=None)
    loadVal.set("0.34")
    entry.pack()
    yPosition += 5
    entry.place(x=lbxXPosition + 135, y=yPosition)
    # loadVal

    # waterTemperature
    lbxwaterTemperature = tk.Label(win, text="发动机水温", fg='black', font=("微软雅黑", 16))
    lbxwaterTemperature.pack(side="left")
    yPosition += 40
    lbxwaterTemperature.place(x=lbxXPosition, y=yPosition)
    waterTemperature = tk.StringVar()
    entry = tk.Entry(win, textvariable=waterTemperature, show=None)
    waterTemperature.set("220")
    entry.pack()
    yPosition += 5
    entry.place(x=lbxXPosition + 135, y=yPosition)
    # waterTemperature

    war = 210;
    lab1 = tk.Label(win, text="00:", fg='black', font=("微软雅黑", 20))  # 换颜色
    lab1.pack(side="left")
    lab1.place(x=20 + war, y=300)

    lab2 = tk.Label(win, text="00:", fg='black', font=("微软雅黑", 20))  # 换颜色
    lab2.pack(side="left")
    lab2.place(x=60 + war, y=300)
    tk_var3 = tk.StringVar()
    tk_var3.set("0")
    lab3 = tk.Label(win, text="00", textvariable=tk_var3, fg='black', font=("微软雅黑", 20))  # 换颜色
    tk_var3.set(12)
    lab3.place(x=100 + war, y=300)
    # lab3.pack(side="left")
    # self.updater()

    b = tk.Button(win, text='退出', command=win.quit)
    b.pack()
    win.mainloop()

    def updater(self):
        self.ctr -= 1
        if len(str(self.ctr)) == 1:
            self.tk_var3.set("0" + str(self.ctr))
        else:
            self.tk_var3.set(str(self.ctr))

        if self.ctr > 0:
            self.win.after(500, self.updater)
        else:
            self.win.quit()

def Close():
    win.quit


#taskInfo = "544ty"
#timeMaxss = 15
UpdateLabel()
