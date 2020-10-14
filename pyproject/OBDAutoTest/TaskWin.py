import  tkinter as tk
import  time
import  sys
import  threading

taskInfo = "testTaskInfo"
timeMaxss = 19
enginSpeed = 100
carSpeed = 108
waterTem = 23
loadValue = 0.8
lbxXPosition = 100
entryPosition = 70
IsStop = 1

class UpdateLabel():
    def __init__(self):
        self.win = tk.Tk()
        self.frame1 = tk.Frame(self.win)
        #self.frame1.pack(side = 'left')
        self.win.resizable(False, False)  # 不可调整大小
        self.width = self.win.winfo_width()
        self.height = self.win.winfo_height()
        self.x = (self.win.winfo_screenwidth() - self.width) // 2
        self.y = (self.win.winfo_screenheight() - self.height) // 2 - 50
        self.win.geometry('500x350')
        self.win.geometry('+%d+%d' % (self.x, self.y))
        self.win.title("TaskWin")
        self.win.minsize(40, 40)
        self.ctr = 0
        self.tk_var = tk.StringVar()
        self.tk_var.set("0")
        #lab=tk.Label(self.win, textvariable=self.tk_var,bg='#40E0D0', fg='#FF0000')     #换颜色
        #lab.place(x=20, y=30)
        tipInfo = tk.Label(self.win, text=str(taskInfo), textvariable=self.tk_var, fg='black', font=("微软雅黑", 16))
        self.tk_var.set(taskInfo)
        tipInfo.pack(side="top")  # 布局
        #timeout
        lbxTimeout = tk.Label(self.win, text="超时时间(s)", fg='black', font=("微软雅黑", 16))
        lbxTimeout.pack(side="left")
        yPosition = entryPosition
        lbxTimeout.place(x=lbxXPosition, y=yPosition)
        self.timeOut = tk.StringVar()
        self.tbOutTime = tk.Entry(self.win, textvariable=self.timeOut, show=None)
        self.timeOut.set(timeMaxss)
        self.tbOutTime.pack()
        yPosition += 5
        self.tbOutTime.place(x=lbxXPosition + 135, y=yPosition)
        #timeout

        # enginSpeed
        lbxEnginSpeed = tk.Label(self.win, text="发动机转速", fg='black', font=("微软雅黑", 16))
        lbxEnginSpeed.pack(side="left")
        yPosition += 40
        lbxEnginSpeed.place(x=lbxXPosition, y=yPosition)
        self.engSpeed = tk.StringVar()
        entry = tk.Entry(self.win, textvariable=self.engSpeed, show=None)
        self.engSpeed.set(enginSpeed)
        entry.pack()
        yPosition += 5
        entry.place(x=lbxXPosition + 135, y=yPosition)
        # enginSpeed

        # carSpeed
        lbxCarSpeed = tk.Label(self.win, text="汽车速度", fg='black', font=("微软雅黑", 16))
        lbxCarSpeed.pack(side="left")
        yPosition += 40
        lbxCarSpeed.place(x=lbxXPosition, y=yPosition)
        self.carspeed = tk.StringVar()
        entry = tk.Entry(self.win, textvariable=self.carspeed, show=None)
        self.carspeed.set(carSpeed)
        entry.pack()
        yPosition += 5
        entry.place(x=lbxXPosition + 135, y=yPosition)
        # carSpeed

        # loadVal
        lbxLoadVal = tk.Label(self.win, text="负载荷值", fg='black', font=("微软雅黑", 16))
        lbxLoadVal.pack(side="left")
        yPosition += 40
        lbxLoadVal.place(x=lbxXPosition, y= yPosition)
        self.load = tk.StringVar()
        entry = tk.Entry(self.win, textvariable=self.load, show=None)
        self.load.set(loadValue)
        entry.pack()
        yPosition += 5
        entry.place(x=lbxXPosition + 135, y=yPosition)
        # loadVal

        # waterTemperature
        lbxwaterTemperature = tk.Label(self.win, text="发动机水温", fg='black', font=("微软雅黑", 16))
        lbxwaterTemperature.pack(side="left")
        yPosition += 40
        lbxwaterTemperature.place(x=lbxXPosition, y= yPosition)
        self.temper = tk.StringVar()
        entry = tk.Entry(self.win, textvariable=self.temper, show=None)
        self.temper.set(waterTem)
        entry.pack()
        yPosition += 5
        entry.place(x=lbxXPosition + 135, y=yPosition)
        # waterTemperature

        war = 210;
        lab1=tk.Label(self.win, text="00:", fg='black', font=("微软雅黑", 20))     #换颜色
        lab1.pack(side="left")
        lab1.place(x=20 + war, y=300)

        lab2 = tk.Label(self.win, text="00:", fg='black', font=("微软雅黑", 20))  # 换颜色
        lab2.pack(side="left")
        lab2.place(x=60 + war, y=300)
        self.tk_var3 = tk.StringVar()
        self.tk_var3.set("0")
        lab3 = tk.Label(self.win, text="00", textvariable=self.tk_var3, fg='black', font=("微软雅黑", 20))  # 换颜色
        self.tk_var3.set(0)
        lab3.place(x=100 + war, y=300)
        #lab3.pack(side="left")
        self.updater()
        self.win.mainloop()

    def updater(self):
        self.ctr += 1
        if len(str(self.ctr)) == 1:
            self.tk_var3.set("0" + str(self.ctr))
        else:
            self.tk_var3.set(str(self.ctr))
        timeMaxss = int(self.timeOut.get())

        if IsStop == 1 and self.ctr <= timeMaxss:
            self.win.after(400, self.updater)
        elif self.ctr > timeMaxss:
            self.win.destroy()
        elif IsStop == 0:
            self.win.destroy()

#taskInfo = "544ty"
#timeMaxss = 15
# UpdateLabel()
