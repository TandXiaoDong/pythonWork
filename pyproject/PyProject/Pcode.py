
from FaultSetApi import FaultSet

class Pcode():
    def __init__(self):
        self.FIU=FaultSet()
    ##清空故障
    def ResetFIU(self):
        return self.FIU.ClearFault()
    def Mode1Req(self):
        return self.FIU.ReadResultMode1()
    def Mode3Req(self):
        return self.FIU.ReadResultMode3()
    def Mode4Req(self):
        return self.FIU.ReadResultMode4()
    def Mode7Req(self):
        return self.FIU.ReadResultMode7()
    def Mode9Req(self):
        return self.FIU.ReadResultMode9()
    def ModeAReq(self):
        return self.FIU.ReadResultModeA()
    def EngSpeedReq(self):
        return self.FIU.OBDGetEnginSpeed()
    def CarSpeedReq(self):
        return self.FIU.OBDGetCarSpeed()
    def EngLoadReq(self):
        return self.FIU.OBDGetEnginLoade()
    def EngTempReq(self):
        return self.FIU.OBDGetEnginLoade()

    
    ##线氧故障
    def P2251(self):
        print("P2251 上游氧传感器IPE线开路")
        return self.FIU.LineO2SensorOpenVM()
    def P2237(self):
        print("P2237 LSU型氧传感器APE线断路")
        return self.FIU.LineO2SensorOpenIP()
    def P2243(self):
        print("P2243 LSU型氧传感器RE线断路")
        return self.FIU.LineO2SensorOpenUN()
    def P0131(self):
        print("P0131 上游氧传感器信号电路电压过低（APE IPE RE 线对地短路）")
        return self.FIU.LineO2SensorUNShortGND()
    def P0132(self):
        print("P0132 上游氧传感器信号电路电压过高（APE IPE RE线对电源短路）")
        return self.FIU.LineO2SensorUNShortBAT()
    def P2414(self):
        print("P2414 上游氧传感器输出电压不合理  lambda过量空气系数 ")
        return self.FIU.LineO2SensorLimitAmpOffSet(16,-3000,3000,0,1000)#持续输出1mA电流
    def P0053(self):
        print("P0053 上游氧传感器加热线路故障")
        return self.FIU.LineO2SensorAddHeatRes(5)
    def P0133(self):
        print("P0133 上游氧传感器老化")
        return self.FIU.LineO2SensorLowpassDelay(16,350,0)#16代表NTK
    def P2195(self):
        print("P2195 LSU型氧传感器特性偏移(偏稀侧)故障")
        return self.FIU.LineO2SensorLimitAmpOffSet(16,-3000,3000,1,500)
    def P2196(self):
        print("P2196 LSU型氧传感器特性偏移(偏浓侧)故障")
        return self.FIU.LineO2SensorLimitAmpOffSet(16,-3000,3000,1,-500)
    #开关氧
    def P013A(self,gnd_pin,sig_pin):
        print("P013A 下游氧传感器浓到稀方向反应慢")
        return self.FIU.BinO2SensorLowpassDelay(gnd_pin,sig_pin,0,1200)
    def P2270(self,gnd_pin,sig_pin):
        print("P2270 下游氧传感器老化- 信号持续偏浓")
        return self.FIU.BinO2SensorLimitAmp(gnd_pin,sig_pin,0.65,1)
    def P2270(self,gnd_pin,sig_pin):
        print("P2270 下游氧传感器老化- 信号持续偏浓")
        return self.FIU.BinO2SensorLimitAmp(gnd_pin,sig_pin,0.65,1)
    def P0136(self,sig_pin):
        print("P0136 下游氧传感器信号开路")
        return self.FIU.OpenPin(sig_pin)
    def P0137(self,sig_pin):
        print("P0137 下游氧传感器信号线对地短路")
        return self.FIU.PinShortGND(sig_pin,False)
    def P0138(self,sig_pin):
        print("P0138 下游氧传感器信号线对电源短路")
        return self.FIU.PinShor5V(sig_pin,False)
    def P2232(self,sig_pin,heater_pin):
        print("P2232 下游氧传感器信号线对加热线耦合")
        return self.FIU.PinShorTwoPin(sig_pin,heater_pin,True)
    # def P0054(self,sig_pin):
    #     print("下游氧传感器加热内阻不合理")
    #     return self.FIU.AddSigResistance(sig_pin,2000)
    def P0054(self,heater_pin):
        print("P0054 下游氧传感器加热内阻不合理")
        return self.FIU.AddPowerResistance(heater_pin,50)


    #GPF
    def P2455(self,gpf_pin):
        print("P2455 颗粒捕集器压差传感器电路电压过高")
        return self.FIU.PinShor5V(gpf_pin,False)
    def P2454(self,gpf_pin):
        print("P2454 颗粒捕集器压差传感器电路电压过低")
        return self.FIU.PinShortGND(gpf_pin,False)
    def U0601(self,gpf_pin):
        print("U0601 颗粒捕集器压差传感器Sent通讯故障")
        return self.FIU.OpenPin(gpf_pin)
    def P1296(self,gpf_pin):
        print("P1296 颗粒捕集器压差传感器信号粘滞")
        return self.FIU.SentSet(gpf_pin,800,1000)
    def P1293(self,gpf_pin):
        print("P1293 GPF Pressure Sensor(Sent) Reporting Fast Channel 1 Error")
        return self.FIU.SentSet(gpf_pin,4095,1000)
    def P1294(self,gpf_pin):
        print("P1294 GPF Pressure Sensor(Sent) Reporting Fast Channel 2 Error")
        return self.FIU.SentSet(gpf_pin,1000,4095)
    # def P1290(self,gpf_pin):
    #     print("颗粒捕集器压差传感器后运行Offset检查值不合理")
    #     return self.FIU.SentSet()
    # def P12A3(self,gpf_pin):
    #     print("颗粒捕集器压差传感器后管连接管路异常/完全堵塞/传感器信号异常")
    #     return self.FIU.SentSet()

    #汽油车颗粒捕集器上下游温度传感器
    def P0546(self,exgastemp_pin):
        print("P0546 颗粒捕集器上游温度传感器电路电压过高")
        return self.FIU.PinShor5V(exgastemp_pin,False)
    def P0545(self,exgastemp_pin):
        print("P0545 颗粒捕集器上游温度传感器电路电压过低")
        return self.FIU.PinShortGND(exgastemp_pin,False)
    def P2080(self,exgastemp_pin):
        print("P2080 颗粒捕集器上游温度传感器信号模型和实际偏差过大")
        return self.FIU.SetVoltage(exgastemp_pin,3)#该值需要标定
    def P20E2(self,exgastemp_pin):
        print("P20E2 颗粒捕集器上游温度传感器冷起动校验不合理（正偏差）")
        return self.FIU.AddSigResistance(exgastemp_pin,2000)#该值需要标定
        #return self.FIU.SetVoltage(exgastemp_pin,3)#该值需要标定

    #CAN 报文
    def U0140(self):
        print("U0140 与BCM模块通讯丢失")
        return self.FIU.CanIdFilter(1,2,3,4)#1,2,3,4 想屏蔽的ID
    #LIN 报文P1421
    def P1421(self,lin_pin):
        print("P1421 LIN硬件寄存器响应超时")
        return self.FIU.LinIdFilter(lin_pin,29,0)

