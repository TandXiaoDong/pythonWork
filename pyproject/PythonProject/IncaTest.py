import  sys
#import  clr
#from clr import System
#from winreg import  *
#from win32com.client import  Dispatch
#dll = Dispatch("inca")
#result = dll.Inca()
from tkinter import  *
import  os
import win32api
import win32con
#win32api.MessageBox(win32con.NULL, '我的第一个pywin32窗口！', 'Hello', win32con.MB_OK)

import platform
import time
from ctypes import *
import  comtypes.client
dll = comtypes.client.CreateObject("incacom.dll")
inca = Inca()

#import  sys
import  clr
#from clr import System

#clr.FindAssembly("incacom.dll")
#clr.AddReference('incacom.dll')
#from de.etas.cebra.toolAPI.Inca import  *
#test = Inca()
#val = test.Test(1)
#print(val)
