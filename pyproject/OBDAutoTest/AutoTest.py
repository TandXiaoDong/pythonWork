import  sys
import  clr
import TaskWin as tw
import threading
import time
import os

clr.FindAssembly("OBDAutoTestAPI.dll")
clr.AddReference('OBDAutoTestAPI')
from OBDAutoTestAPI import  *
from OBDAutoTestAPI.Mode import  *
from OBDAutoTestAPI.OBDMode import  *

#-------------------------------------------------------------CAN communication-----------------------------------------
Is_Read_Fault_Code = True
Is_Read_Forever_Fault_Code = True


def UpdateWinParams(tipInfo, timeMax, engSpeed, carSpeed, load, tempera):
    tw.timeMaxss = timeMax
    tw.taskInfo = tipInfo
    tw.enginSpeed = engSpeed
    tw.carSpeed = carSpeed
    tw.loadValue = load
    tw.waterTem = tempera
    tw.UpdateLabel()

mode = AutoTestObject()

def ReadCANFault():
    if Is_Read_Fault_Code == True:
        faultCodeList = mode.ReadResultMode7(True)
        codeStr = ""
        for code in faultCodeList:
            codeStr = codeStr + code + " "
        print("【普通故障码】", codeStr)
    if Is_Read_Forever_Fault_Code == True:
        faultCodeList = mode.ReadResultModeA(True)
        strCode = ""
        for code in faultCodeList:
            strCode = strCode + code + " "
        print('【永久故障码】', code)

def ResetCaseFault():
    result = mode.ClearCaseFault()
    if result == True:
        print('清除故障成功！')
    else:
        print('清除故障失败！')
    if result != True:
        sys.exit(0)

def ClearMode7Fault():
    result = mode.ClearMode7Fault()
    if result == True:
        print("MODE7-清除故障码成功！")
    else:
        print("MODE7-清除故障码失败！")

def UpdateEnginParams():
    tw.enginSpeed = mode.OBDReadEnginSpeed()
    print('发动机速度：', tw.enginSpeed)
    tw.carSpeed = mode.OBDReadCarSpeed()
    print('汽车速度：', tw.carSpeed)
    tw.loadValue = mode.OBDReadLoad()
    print('发动机负荷：', tw.loadValue)
    tw.waterTem = mode.OBDReadTemperature()
    print('发动机温度：', tw.waterTem)

def ReadMode1():
    list = mode.ReadResultMode1(True)
    for result in list:
        print(result)
def ReadMode2():
    list = mode.ReadResultMode2(True)
    for result in list:
        print(result)

def ReadMode3():
    list = mode.ReadResultMode3(True)
    for result in list:
        print(result)

def ReadMode4():
    list = mode.ReadResultMode4(True)
    for result in list:
        print(result)

def ReadMode6():
    list = mode.ReadResultMode6(True)
    for result in list:
        print(result)

def ReadMode9():
    list = mode.ReadResultMode9(True)
    for result in list:
        print(result)

def ReadModeA():
    list = mode.ReadResultModeA(True)
    for result in list:
        print(result)

def ReadMode7():
    tw.IsStop = 1
    list = mode.ReadResultMode7(False)
    str = ""
    for result in list:
        str = str + result + " "
    print("【普通故障码】", str)

def SetShortCircuit():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print("注入短路故障...")
    # UpdateTaskWin("start short circuit fault", 5)
    # FaultPinShortCircuit(int testType, int pin1, int pin2, int duration, bool scircuitWithPin)
    result = mode.FaultPinShortCircuit(0, 1, 1, 1000, False)
    print("注入短路故障返回值：", result)
    ReadCANFault()

def SetAddRessitance():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print("添加电阻...")
    # FaultPinAddResistance(int testType, int pin, double resisval, int duration)
    result = mode.FaultPinAddResistance(0, 1, 100, 1000)
    print('添加电阻返回值：', result)
    ReadCANFault()

def SetViscous():
    tw.IsStop  = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('输出值粘滞...')
    # FaultPinViscous(int pin, int cycle, double fixVal, int duration)
    result = mode.FaultPinViscous(1, 0, 1, 1000)
    print('输出值粘滞返回值：', result)
    ReadCANFault()

def SetFaultDAC():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('DAC输出测试...')
    # FaultPinDAC(int pin, double voltage, int duration)
    result = mode.FaultPinDAC(1, 23, 1000)
    print('DAC输出返回值：', result)
    ReadCANFault()

def SetOpenCircuit():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('开路测试...')
    # FaultPinOpen(int pin, int cycleTime, int duration)
    result = mode.FaultPinOpen(1, 0, 1000)
    print('开路测试返回值：', result)
    ReadCANFault()

def SetSentOut():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('SENT输出...')
    # int FaultPinSentOut(int pin, int dataInput1, int dataInput2, int duration)
    result = mode.FaultPinSentOut(1, 0, 0, 1000)
    print('SENT输出返回值：', result)
    ReadCANFault()

def SetLowPass():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('低通滤波...')
    # FaultLowpassFilter(LowPassType testType, int pin, int lowpFilterVal, int duration)
    result = mode.FaultLowpassFilter(0, 23, 90, 1000)
    print('低通滤波返回值：', result)
    ReadCANFault()

def SetAmplitudeLimit():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('幅值限制...')
    # FaultAmplitudeLimit(int pin, double min, double max)
    result = mode.FaultAmplitudeLimit(12, 0, 2)
    print('幅值限制返回值:', result)
    ReadCANFault()

def SetRatioOffset():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('比例偏移...')
    # FaultRatioOffset(int pin, double muliple, double offset)
    result = mode.FaultRatioOffset(22, 8, 0)
    print('比例偏移返回值：', result)
    ReadCANFault()

def SetLineSensorElc():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('SetLineSensorElc...')
    # SetLineSensorElcFault(SensorElcFaultType testType, SensorElcFaultPin fPin, SensorElcSourcePin sPin, uint resVal)
    result = mode.SetLineSensorElcFault(0, 0, 0, 0)
    print('SetLineSensorElc返回值：', result)
    ReadCANFault()

def SetLineSensorOldB():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('SetLineSensorOldB...')
    # int SetLineSensorOldB(int sType, int lowpval, int duration, int mode)
    result = mode.SetLineSensorOldB(0, 0, 0, 0)
    print('SetLineSensorOldB返回值：', result)
    ReadCANFault()

def SetLineSensorOldSImulA():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('SetLineSensorOldSImulA...')
    # int SetLineSensorOldSImulA(int sType, int min, int max, int multiple, int offset)
    result = mode.SetLineSensorOldSImulA(0, 0, 0, 0, 0)
    print('SetLineSensorOldSImulA返回值:', result)
    ReadCANFault()

def SetSensorOut():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('FaultSensorOut...')
    # int FaultSensorOut(int pin1, int pin2, int ftype, int cycleVal, double fixVal, int delay)
    result = mode.FaultSensorOut(1, 0, 0, 0, 0, 0)
    print('FaultSensorOut返回值:', result)
    ReadCANFault()

def SetLinNode():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('SetLinNodeFault...')
    # int SetLinNodeFault(int pin, int id1, int id2, int id3, int id4, int id5, int id6, int id7, int id8, int dataLen)
    # dataLen is equal to the number of IDs written in the function
    result = mode.SetLinNodeFault(1, 3, 4, 0, 0, 0, 0, 0, 0, 2)
    print('SetLinNodeFault返回值:', result)
    ReadCANFault()

def SetCANNode():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('etCANNodeFault...')
    # int SetCANNodeFault(int frameType, int id1, int id2, int id3, int id4, int dataLen)
    # dataLen is equal to the number of IDs written in the function
    result = mode.SetCANNodeFault(0, 1, 3, 0, 0, 2)
    print('etCANNodeFault返回值:', result)
    ReadCANFault()

def SetSensorLowPass():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('SetSensorLowPass...')
    # int SetSensorLowPass(int pin1, int pin2, int lpType, int lowPassVal, int delay)
    result = mode.SetSensorLowPass(0, 0, 0, 0, 0)
    print('SetSensorLowPass返回值:', result)
    ReadCANFault()

def SetSensorLimit():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('SetSensorLimit...')
    # int SetSensorLimit(int pin1, int pin2, int min, int max)
    result = mode.SetSensorLimit(0, 0, 0, 0)
    print('SetSensorLimit返回值:', result)
    ReadCANFault()

def SetSensorOffset():
    tw.IsStop = 1
    ResetCaseFault()
    ClearMode7Fault()
    print('SetSensorOffset...')
    # int SetSensorOffset(int pin1, int pin2, double ratio, double offset)
    result = mode.SetSensorOffset(0, 0, 0, 0)
    print('SetSensorOffset返回值:', result)
    ReadCANFault()

def CloseCAN():
    result = mode.CloseCAN1()
    print('关闭CAN1：', result)
    result = mode.CloseCAN2()
    print('关闭CAN2:', result)

def AutoWinTask():
    while True:
        if tw.IsStop != 0:
            UpdateWinParams("engin params", 20, tw.enginSpeed, tw.carSpeed, tw.loadValue, tw.waterTem)

def OBDAutoTestTask():
    fun_id = 1
    while True:
        try:
            if fun_id == 1:
                UpdateEnginParams()
                SetShortCircuit()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 2:
                UpdateEnginParams()
                SetAddRessitance()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 3:
                UpdateEnginParams()
                SetViscous()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 4:
                UpdateEnginParams()
                SetFaultDAC()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 5:
                UpdateEnginParams()
                SetOpenCircuit()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 6:
                UpdateEnginParams()
                SetSentOut()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 7:
                UpdateEnginParams()
                SetLowPass()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 8:
                UpdateEnginParams()
                SetAmplitudeLimit()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 9:
                UpdateEnginParams()
                SetRatioOffset()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 9:
                UpdateEnginParams()
                SetLineSensorElc()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 10:
                UpdateEnginParams()
                SetLineSensorElc()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 11:
                UpdateEnginParams()
                SetLineSensorOldB()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 12:
                UpdateEnginParams()
                SetLineSensorOldSImulA()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 13:
                UpdateEnginParams()
                SetSensorOut()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 14:
                UpdateEnginParams()
                SetLinNode()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 15:
                UpdateEnginParams()
                SetCANNode()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 16:
                UpdateEnginParams()
                SetSensorLowPass()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 17:
                UpdateEnginParams()
                SetSensorLimit()
                tw.IsStop = 0
                fun_id = fun_id + 1
            elif fun_id == 18:
                UpdateEnginParams()
                SetSensorOffset()
                tw.IsStop = 0
                fun_id = fun_id + 1
        except Exception as err:
            tw.IsStop = 0
            print("ERROR Line：", err.__traceback__.tb_lineno)
            print("Err Info:", err)
            break
        time.sleep(1)
def MainAutoTestTask():
    task1 = threading.Thread(target=AutoWinTask)
    task1.start()
    task2 = threading.Thread(target=OBDAutoTestTask)
    task2.start()
    task2.join()

def TestOBD():
    for i in range(2):
        SetShortCircuit()
        SetLinNode() #读取故障码减少了
        # SetSensorOffset()
        # SetLineSensorElc()
        # ResetCaseFault()
        # ClearMode7Fault()
        # ReadCANFault()
        time.sleep(0.1)
TestOBD()
# MainAutoTestTask()
CloseCAN()


#-----------------------------------------------------------------------------------------------------------------------