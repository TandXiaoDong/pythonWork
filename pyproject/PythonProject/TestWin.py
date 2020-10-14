import TaskWin as tw
import time
import  sys
from multiprocessing import  Pool
import  threading
import  ctypes
import  inspect

#count = 0
def UpdateTaskWin(tipInfo, timeMax, engSpeed, carSpeed, load, tempera):
    tw.timeMaxss = timeMax
    tw.taskInfo = tipInfo
    tw.enginSpeed = engSpeed
    tw.carSpeed = carSpeed
    tw.loadValue = load
    tw.waterTem = tempera
def OpenWin():
    tw.UpdateLabel()


def StartTask():
    print('start...')
    time.sleep(4)
    print('stop...')
    tw.IsStop = 0

threads = []

def _async_raise(tid, exctype):
    """raises the exception, performs cleanup if needed"""
    tid = ctypes.c_long(tid)
    if not inspect.isclass(exctype):
        exctype = type(exctype)
    res = ctypes.pythonapi.PyThreadState_SetAsyncExc(tid, ctypes.py_object(exctype))
    if res == 0:
        raise ValueError("invalid thread id")
    elif res != 1:
        # """if it returns a number greater than one, you're in trouble,
        # and you should call it again with exc=NULL to revert the effect"""
        ctypes.pythonapi.PyThreadState_SetAsyncExc(tid, None)
        raise SystemError("PyThreadState_SetAsyncExc failed")

def StartAutoTestTask(fun1, fun2):
    threads.append(threading.Thread(target=fun1).start())
    threads.append(threading.Thread(target=fun2).start())
UpdateTaskWin("test", 4, 45, 66, 77, 88)

def TestThread():
    th = threading.Thread(target=OpenWin)
    th.start()
    StartTask()

#StartAutoTestTask(OpenWin, StartTask)
TestThread()
# time.sleep(6)
# TestThread()
#time.sleep(10)

#StartAutoTestTask(OpenWin, StartTask)

# time.sleep(6)
# ta1 = myclass(1, 2)
# ta1.start()
