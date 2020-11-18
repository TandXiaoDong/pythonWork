import  tkinter as tk
import  time
import  sys
import  threading

taskInfo = "testTaskInfo"

def AddTimerLable(self):
    war = 210;
    lab1 = tk.Label(self.root, text="00:", fg='black', font=("微软雅黑", 20))  # 换颜色
    lab1.pack(side="left")
    lab1.place(x=20 + war, y=300)

    lab2 = tk.Label(self.root, text="00:", fg='black', font=("微软雅黑", 20))  # 换颜色
    lab2.pack(side="left")
    lab2.place(x=60 + war, y=300)
    self.tk_var3 = tk.StringVar()
    self.tk_var3.set("0")
    lab3 = tk.Label(self.root, text="00", textvariable=self.tk_var3, fg='black', font=("微软雅黑", 20))  # 换颜色
    self.tk_var3.set(0)
    lab3.place(x=100 + war, y=300)
    # lab3.pack(side="left")

class UpdateLabel():
    def __init__(self):
        self.root = tk.Tk()
        self.frame1 = tk.Frame(self.root)
        #self.frame1.pack(side = 'left')
        self.root.resizable(False, False)  # 不可调整大小
        self.width = self.root.winfo_width()
        self.height = self.root.winfo_height()
        self.x = (self.root.winfo_screenwidth() - self.width) // 2
        self.y = (self.root.winfo_screenheight() - self.height) // 2 - 50
        self.root.geometry('500x350')
        self.root.geometry('+%d+%d' % (self.x, self.y))
        self.root.title("TaskWin")
        self.root.minsize(40, 40)
        self.ctr = 0
        self.tk_var = tk.StringVar()
        self.tk_var.set("0")
        #lab=tk.Label(self.win, textvariable=self.tk_var,bg='#40E0D0', fg='#FF0000')     #换颜色
        #lab.place(x=20, y=30)
        tipInfo = tk.Label(self.root, text=str(taskInfo), textvariable=self.tk_var, fg='black', font=("微软雅黑", 16))
        self.tk_var.set(taskInfo)
        tipInfo.pack(side="top")  # 布局
        #添加control
        AddTimerLable(self)
        self.updater()
        # self.timeOut.set(6)

        self.root.mainloop()

    def updater(self):
        self.ctr += 1
        if len(str(self.ctr)) == 1:
            print(0)
            # self.tk_var3.set("0" + str(self.ctr))
        else:
            print(1)
            # self.tk_var3.set(str(self.ctr))
        # timeMaxss = int(self.timeOut.get())

        if self.ctr <= 7:
            self.root.after(1000, self.updater)
        elif self.ctr > 7:
            self.root.destroy()

UpdateLabel()