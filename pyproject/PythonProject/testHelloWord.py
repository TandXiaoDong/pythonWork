import  tkinter as tk
import  time
import  sys
import clr
clr.AddReference("System.Windows.Forms")
clr.AddReference("System.Drawing")
from System.Windows.Forms import *
from System import  *
import  os
import TaskWin as tw

tw.timeMaxss = 23
tw.taskInfo = "2020-0eu930"
tw.UpdateLabel()
#clr.FindAssembly("OBDAutoTestAPI.dll")
#clr.AddReference('OBDAutoTestAPI')
#from OBDAutoTestAPI import  *
#from OBDAutoTestAPI.Mode import  *

#mode = AutoTestObject()
#MessageBox.Show("Hello World!")

#mode.TaskWinShow("hkhk", 3, 2000)
#os.system('pause')
# val = mode.Test001(4)
# print('val', val)
# mode.TaskWinShow("test pip", 5, 1000)

# root = tk.Tk()
# root.title("Current Task")
# var = tk.StringVar()
# w =tk.Label(root, text="Hello Python!",textvariable=var,fg='blue',font=("微软雅黑",40))
# var.set("Test time")
# w.pack()#布局
# def gettime():
#     var.set(time.strftime("%H:%M:%S"))  # 获取当前时间
#     root.after(1000, gettime)  # 每隔1s调用函数 gettime 自身获取时间
# btn = tk.Button(text="测试",command=gettime(),fg='blue',font=("黑体",20))
# btn.pack()
# root.mainloop()# 进入消息循环
