from FaultSetApi import FaultSet
from EcuPinConf import ECUPIN
import time

FIU=FaultSet()
PIN=ECUPIN()

#短路到地测试
FIU.ClearFault()
time.sleep(1)
FIU.PinShortGND(PIN.ME17810_K(40),False)
time.sleep(10)

#短路到5V
FIU.ClearFault()
time.sleep(1)
FIU.PinShor5V(PIN.ME17810_K(40),False)
time.sleep(10)

#短路到BAT
FIU.ClearFault()
time.sleep(1)
FIU.PinShortBat(PIN.ME17810_K(40),False)
time.sleep(10)

#开路测试
FIU.ClearFault()
time.sleep(1)
FIU.OpenPin(PIN.ME17810_K(40))
time.sleep(10)

#串电阻
FIU.ClearFault()
time.sleep(1)
FIU.AddSigResistance(PIN.ME17810_K(40),1000)
time.sleep(10)

#开路测试
FIU.ClearFault()
time.sleep(1)
FIU.OpenPin(PIN.ME17810_K(40))
time.sleep(10)

#DAC输出
FIU.ClearFault()
time.sleep(1)
FIU.SetVoltage(PIN.ME17810_K(40),3)
time.sleep(10)

#开关氧 BinO2SensorLimitAmp   BinO2SensorLowpassDelay
#限定最大最小值
FIU.ClearFault()
time.sleep(1)
FIU.BinO2SensorLimitAmp(PIN.ME17810_K(34),PIN.ME17810_K(62),0.6,1)
time.sleep(10)
#老化延迟
FIU.ClearFault()
time.sleep(1)
FIU.BinO2SensorLowpassDelay(PIN.ME17810_K(34),PIN.ME17810_K(62),0,1000)
time.sleep(10)

#线性氧 LineO2SensorLimitAmpOffSet  LineO2SensorLowpassDelay
FIU.ClearFault()
time.sleep(1)
FIU.LineO2SensorLimitAmpOffSet(16,0,3000,1,0)
time.sleep(10)

FIU.ClearFault()
time.sleep(1)
FIU.LineO2SensorLowpassDelay(16,350,0)
time.sleep(10)