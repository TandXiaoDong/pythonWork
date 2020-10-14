import  sys
import  clr
import TaskWin as tw

clr.FindAssembly("OBDAutoTestAPI.dll")
clr.AddReference('OBDAutoTestAPI')
from OBDAutoTestAPI import  *
from OBDAutoTestAPI.Mode import  *

#-------------------------------------------------------------CAN communication-----------------------------------------
Is_Read_Fault_Code = True
Is_Read_Forever_Fault_Code = True

def UpdateTaskWin(tipInfo, timeMax, engSpeed, carSpeed, load, tempera):
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
        faultCodeList = mode.ReadResultMode7()
        for code in faultCodeList:
            print('读取故障码：', code)
    if Is_Read_Forever_Fault_Code == True:
        faultCodeList = mode.ReadResultModeA()
        for code in faultCodeList:
            print('读取永久故障码：', code)

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

# print('读取MODE1...')
# mode.ReadResultMode1(True)

#UpdateTaskWin("start short circuit fault", 13, 12, 12, 12, 12)
#sys.exit(0)

ResetCaseFault()
ClearMode7Fault()
print("注入短路故障...")
UpdateTaskWin("start short circuit fault", 5)
# FaultPinShortCircuit(int testType, int pin1, int pin2, int duration, bool scircuitWithPin)
result = mode.FaultPinShortCircuit(0, 1, 1, 1000, False)
print("注入短路故障返回值：", result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print("添加电阻...")
UpdateTaskWin("start add ressistance test", 5)
# FaultPinAddResistance(int testType, int pin, int resisval, int duration)
result = mode.FaultPinAddResistance(0, 1, 100, 1000)
print('添加电阻返回值：', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('输出值粘滞...')
UpdateTaskWin("start fault viscous test", 5)
# FaultPinViscous(int pin, int cycle, int fixVal, int duration)
result = mode.FaultPinViscous(1, 0, 1, 1000)
print('输出值粘滞返回值：', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('DAC输出测试...')
UpdateTaskWin("start DAC test", 5)
# FaultPinDAC(int pin, int voltage, int duration)
result = mode.FaultPinDAC(1, 23, 1000)
print('DAC输出返回值：', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
UpdateTaskWin("start open circuit test", 5)
print('开路测试...')
# FaultPinOpen(int pin, int cycleTime, int duration)
result = mode.FaultPinOpen(1, 0, 1000)
print('开路测试返回值：', result)
ReadCANFault()


ResetCaseFault()
ClearMode7Fault()
print('SENT输出...')
UpdateTaskWin("start sent output test", 5)
# int FaultPinSentOut(int pin, int dataInput1, int dataInput2,bool IsReverseData1, bool IsReverseData2, int duration)
result = mode.FaultPinSentOut(1, 0, 0, 0, False, False, 1000)
print('SENT输出返回值：', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('外部接口测试...')
UpdateTaskWin("start outter Interface test", 5)
# FaultPinConnectExit(ExtensionInterfaceType testType, int pin, int duration)
#enum type ExtensionInterfaceType:Exit0, Exit1
result = mode.FaultPinConnectExit(0, 2, 1000)
print('外部接口测试返回值：', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('低通滤波...')
UpdateTaskWin("start Low Pass Filter test", 5)
# FaultLowpassFilter(LowPassType testType, int pin, int lowpFilterVal, int duration)
result = mode.FaultLowpassFilter(0, 23, 90, 1000)
print('低通滤波返回值：', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('幅值限制...')
UpdateTaskWin("start Amplitude limit test", 5)
# FaultAmplitudeLimit(int pin, int min, int max)
result = mode.FaultAmplitudeLimit(12, 0, 2)
print('幅值限制返回值:', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('比例偏移...')
UpdateTaskWin("start ratio offset test", 5)
# FaultRatioOffset(int pin, int muliple, int offset)
result = mode.FaultRatioOffset(22, 8, 0)
print('比例偏移返回值：', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('SetLineSensorElc...')
UpdateTaskWin("start Set Line SensorElc test", 5)
# SetLineSensorElcFault(SensorElcFaultType testType, SensorElcFaultPin fPin, SensorElcSourcePin sPin, uint resVal)
result = mode.SetLineSensorElcFault(0, 0, 0, 0)
print('SetLineSensorElc返回值：', result)

ResetCaseFault()
ClearMode7Fault()
print('SetLineSensorOldB...')
UpdateTaskWin("start SetLineSensorOldB test", 5)
#int SetLineSensorOldB(int sType, int lowpval, int duration, int mode)
result = mode.SetLineSensorOldB(0, 0, 0, 0)
print('SetLineSensorOldB返回值：', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('SetLineSensorOldSImulA...')
UpdateTaskWin("start SetLineSensorOldSImulA test", 5)
#int SetLineSensorOldSImulA(int sType, int min, int max, int multiple, int offset)
result = mode.SetLineSensorOldSImulA(0, 0, 0, 0, 0)
print('SetLineSensorOldSImulA返回值:', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('FaultSensorOut...')
UpdateTaskWin("start add ressistance test", 5)
#int FaultSensorOut(int pin1, int pin2, int ftype, int cycleVal, int fixVal, int delay)
result = mode.FaultSensorOut(1, 0, 0, 0, 0, 0)
print('FaultSensorOut返回值:', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('SetLinNodeFault...')
UpdateTaskWin("start SetLinNodeFault test", 5)
#int SetLinNodeFault(int pin, int id1, int id2, int id3, int id4, int id5, int id6, int id7, int id8, int dataLen)
# dataLen is equal to the number of IDs written in the function
result = mode.SetLinNodeFault(1, 3, 4, 0, 0, 0, 0, 0, 0, 2)
print('SetLinNodeFault返回值:', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('etCANNodeFault...')
UpdateTaskWin("start SetCANNodeFault test", 5)
# int SetCANNodeFault(int frameType, int id1, int id2, int id3, int id4, int dataLen)
# dataLen is equal to the number of IDs written in the function
result = mode.etCANNodeFault(0, 1, 3, 0, 0, 2)
print('etCANNodeFault返回值:', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('SetSensorLowPass...')
UpdateTaskWin("start SetSensorLowPass test", 5)
# int SetSensorLowPass(int pin1, int pin2, int lpType, int lowPassVal, int delay)
result = mode.SetSensorLowPass(0, 0, 0, 0, 0)
print('SetSensorLowPass返回值:', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('SetSensorLimit...')
UpdateTaskWin("start SetSensorLimit test", 5)
# int SetSensorLimit(int pin1, int pin2, int min, int max)
result = mode.SetSensorLimit(0, 0, 0, 0)
print('SetSensorLimit返回值:', result)
ReadCANFault()

ResetCaseFault()
ClearMode7Fault()
print('SetSensorOffset...')
UpdateTaskWin("start SetSensorOffset test", 5)
#int SetSensorOffset(int pin1, int pin2, int ratio, int offset)
result = mode.SetSensorOffset(0, 0, 0, 0)
print('SetSensorOffset返回值:', result)
ReadCANFault()

result = mode.CloseCAN1()
print('关闭CAN1：', result)
result = mode.CloseCAN2()
print('关闭CAN2:', result)
#-----------------------------------------------------------------------------------------------------------------------