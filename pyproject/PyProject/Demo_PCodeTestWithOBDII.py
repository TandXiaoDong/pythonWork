from Pcode import Pcode
from EcuPinConf import ECUPIN
from OBDII import OBDII
import time
import sys

from PrintRebuild import Logger
sys.stdout = Logger('OutPut\PcodeTestWithOBDII.txt')#使用print 保存文本
print("#############################")
print(time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(time.time())),"测试开始......")
print("#############################")

def SubPrint(ch,info):
    return 0
PCodeSet=Pcode()
PIN=ECUPIN()
OBD=OBDII()

#########故障测试############
PCodeSet.ResetFIU()
PCodeSet.P0137(PIN.UD8_A(8))
while(OBD.ReadSpeed()==0):
    SubPrint(0,"请启动发动机。。。。")#>
    time.sleep(1)
while(len(OBD.Mode7Req())<1):#没有读取到故障
    #SubPrint()
    time.sleep(1)
print("读取到故障码：",OBD.Mode7Req())
print("检查故障是否正确")
PCodeSet.ResetFIU()
time.sleep(1)
while(OBD.ReadSpeed()!=0):
    SubPrint(0,"请熄火发动机。。。。")#>
    time.sleep(1)
print(OBD.Mode3Req())
#########故障测试############
PCodeSet.ResetFIU()
PCodeSet.P0138(PIN.UD8_A(8))
while(OBD.ReadSpeed()==0):
    SubPrint(0,"请启动发动机。。。。")#>
    time.sleep(1)
while(OBD.Mode7Req()==0):
    #SubPrint()
    time.sleep(1)
print("读取到故障码：",OBD.Mode7Req())
print("检查故障是否正确")
PCodeSet.ResetFIU()
time.sleep(1)
while(OBD.ReadSpeed()!=0):
    SubPrint(0,"请熄火发动机。。。。")#>
    time.sleep(1)
print(OBD.Mode3Req())




