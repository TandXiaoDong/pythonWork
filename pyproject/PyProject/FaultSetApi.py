import  clr
clr.FindAssembly("OBDAutoTestAPI.dll")
clr.AddReference('OBDAutoTestAPI')
from OBDAutoTestAPI import  *
from OBDAutoTestAPI.Mode import  *

class FaultSet():
    def __init__(self):
        self.Api=AutoTestObject()

    #ClearAllFault
    def ClearFault(self):
        return self.Api.ClearCaseFault()
    # FaultPinShortCircuit(int testType, int pin1, int pin2, int duration, bool scircuitWithPin)
    # result = mode.FaultPinShortCircuit(0, 1, 1, 1000, False)
    def PinShortGND(self,pin,scircuitWithPin):
        return self.Api.FaultPinShortCircuit(2, pin, 0, 0, scircuitWithPin)
    def PinShor5V(self,pin,scircuitWithPin):
        return self.Api.FaultPinShortCircuit(1, pin, 0, 0, scircuitWithPin)
    def PinShortBat(self,pin,scircuitWithPin):
        return self.Api.FaultPinShortCircuit(0, pin, 0, 0, scircuitWithPin)
    def PinShorTwoPin(self,pin1,pin2,scircuitWithPin):
        return self.Api.FaultPinShortCircuit(3, pin1, pin2, 0, scircuitWithPin)

    ##UpdateTaskWin("start add ressistance test", 5)
    # FaultPinAddResistance(int testType, int pin, int resisval, int duration)
    #result = mode.FaultPinAddResistance(0, 1, 100, 1000)
    def AddSigResistance(self,pin,resval):
        return self.Api.FaultPinAddResistance(0, pin, resval, 0)
    def AddPowerResistance(self,pin,resval):
        return self.Api.FaultPinAddResistance(1, pin, resval, 0)

    # UpdateTaskWin("start fault viscous test", 5)
    # FaultPinViscous(int pin, int cycle, int fixVal, int duration)
    #FaultPinViscous(1, 0, 1, 1000) #周期性产生毛刺
    def SetPulseSig(self,pin,cycle_ms,PulseVal):
        return self.FaultPinViscous(pin, cycle_ms, PulseVal, 0)
    #FaultPinDAC(int pin, int voltage, int duration)
    def SetVoltage (self,pin,voltage_mv):#固定输出电压
        return self.Api.FaultPinDAC(pin,voltage_mv,0)

    # FaultPinOpen(int pin, int cycleTime, int duration)
    def OpenPin(self,pin):
        return self.Api.FaultPinOpen(pin,0,0)
    def OpenClosePin(self, pin,cycleTime_ms,duration_ms):
        return self.Api.FaultPinOpen(pin, cycleTime_ms, duration_ms)

    ###普通模拟信号合理故障接口
    # FaultLowpassFilter(LowPassType testType, int pin, int lowpFilterVal, int delay)
    def AnLowpassDelay(self,pin,lowpFilterVal,delay_ms):
        return self.Api.FaultLowpassFilter(0,pin,lowpFilterVal,delay_ms)
    # FaultAmplitudeLimit(int pin, double min, double max)
    def AnLimitAmp(self,pin,min_mv,max_mv):
        return self.Api.FaultAmplitudeLimit(pin,min_mv,max_mv)
    # FaultRatioOffset(int pin, int muliple, int offset)
    def AnRatioOffset(self,pin,mulipleX1000,offset_mv):
        return self.Api.FaultRatioOffset(pin,mulipleX1000,offset_mv)
    ###开关氧信号合理故障
    # int SetSensorLowPass(int pin1, int pin2, int lpType, int lowPassVal, int delay)
    def BinO2SensorLowpassDelay(self,gndpin,sigpin,lowpFilterVal,delay_ms):
        return self.Api.SetSensorLowPass(gndpin,sigpin,0,lowpFilterVal,delay_ms)
    # int SetSensorLimit(int pin1, int pin2, int min, int max)
    def BinO2SensorLimitAmp(self,gndpin,sigpin,min_mv,max_mv):
        return self.Api.SetSensorLimit(gndpin,sigpin,min_mv,max_mv)
    # int SetSensorOffset(int pin1, int pin2, int ratio, int offset)
    def BinO2SensorOffset(self,pin,mulipleX1000,offset_mv):
        return self.Api.SetSensorOffset(pin,mulipleX1000,offset_mv)
    #
    # ### 线性氧故障电气故障
    #SetLineSensorElcFault(SensorElcFaultType testType, SensorElcFaultPin fPin, SensorElcSourcePin sPin, uint resVal)
    def LineO2SensorOpenUN(self):
        return self.Api.SetLineSensorElcFault(1,1,0,0)
    def LineO2SensorOpenVM(self):
        return self.Api.SetLineSensorElcFault(1,2,0,0)
    def LineO2SensorOpenIP(self):
        return self.Api.SetLineSensorElcFault(1,3,0,0)
    def LineO2SensorOpenHL(self):
        return self.Api.SetLineSensorElcFault(1,5,0,0)

    def LineO2SensorUNShortGND(self):
        return self.Api.SetLineSensorElcFault(2,1,7,0)
    def LineO2SensorVMShortGND(self):
        return self.Api.SetLineSensorElcFault(2,2,7,0)
    def LineO2SensorIPShortGND(self):
        return self.Api.SetLineSensorElcFault(2,3,7,0)

    def LineO2SensorUNShortBAT(self):
        return self.Api.SetLineSensorElcFault(2,1,6,0)
    def LineO2SensorVMShortBAT(self):
        return self.Api.SetLineSensorElcFault(2,2,6,0)
    def LineO2SensorIPShortBAT(self):
        return self.Api.SetLineSensorElcFault(2,3,6,0)
    def LineO2SensorHLShortBAT(self):
        return self.Api.SetLineSensorElcFault(2,5,6,0)

    def LineO2SensorAddHeatRes(self,ResVal):
        return self.Api.SetLineSensorElcFault(3, 0, 0, ResVal)

    def LineO2SensorHLShortIP(self):
        return self.Api.SetLineSensorElcFault(1,5,6,0)

    #SetLineSensorOldB(int sType, int lowpval, int duration, int mode)
    def LineO2SensorLowpassDelay(self,sensorType,lowpFilterVal,delay_ms):
        return self.Api.SetLineSensorOldB(sensorType,lowpFilterVal,delay_ms,0)

    #SetLineSensorOldSImulA(int sType, int min, int max, int multiple, int offset)
    def LineO2SensorLimitAmpOffSet(self,sensorType,min_uA, max_uA,mulipleX100,offset_uA):
        return self.Api.SetLineSensorOldSImulA(sensorType,min_uA, max_uA,mulipleX100,offset_uA)
    #FaultPinSentOut(1, 0, 0, False, False, 1000)
    #int FaultPinSentOut(int pin, int dataInput1, int dataInput2,bool IsReverseData1, bool IsReverseData2, int duration)
    def SentSet(self,sent_pin,FD1,FD2):
        return self.Api.FaultPinSentOut(sent_pin,FD1,FD2,0,0,0)
    #result = mode.SetCANNodeFault(0, 1, 3, 0, 0, 2)
    ## int SetCANNodeFault(int frameType, int id1, int id2, int id3, int id4, int dataLen)
    def CanIdFilter(self,id1,id2,id3,id4):
        return self.Api.SetCANNodeFault(0,id1,id2,id3,id4,4)
    #int SetLinNodeFault(int pin, int id1, int id2, int id3, int id4, int id5, int id6, int id7, int id8, int dataLen)
    def LinIdFilter(self,lin_pin,id1,id2):
        return self.Api.SetLinNodeFault(lin_pin,id1,id2,0,0,0,0,0,0,2)
    def ReadResultMode1(self):
        return self.Api.ReadResultMode1(False)
    def ReadResultMode3(self):
        return self.Api.ReadResultMode3(False)
    def ReadResultMode4(self):
        return self.Api.ReadResultMode4(False)
    def ReadResultMode7(self):
        return self.Api.ReadResultMode7(False)
    def ReadResultMode9(self):
        return self.Api.ReadResultMode9(False)
    def ReadResultModeA(self):
        return self.Api.ReadResultModeA(False)

    def OBDGetEnginSpeed(self):
        return self.Api.OBDReadEnginSpeed()

    def OBDGetCarSpeed(self):
        return self.Api.OBDReadCarSpeed()

    def OBDGetEnginLoade(self):
        return self.Api.OBDReadLoad()

    def OBDGetEnginTemperature(self):
        return self.Api.OBDReadTemperature()

