from Pcode import Pcode
from EcuPinConf import ECUPIN
from IncaApi import IncaCtl
from OBDII import OBDII
import time
import sys

from PrintRebuild import Logger
sys.stdout = Logger('OutPut\PcodeTestWithInca.txt')#使用print 保存文本
print("#############################")
print(time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(time.time())),"测试开始......")
print("#############################")

INCA=IncaCtl()
PCodeSet=Pcode()
PIN=ECUPIN()
# OBD=OBDII()

def faultexit():
    INCA.StopRecording("1234","ETASMDF")
    sys.exit(0)
def SubPrint(ch,info):
    return 0

##############INCA测量初始化#########
reT=INCA.InitialiseHW()
# reT=True
if(reT==False):
    print("HardWareInit Failled")
    sys.exit(0)
else:
    print("HardWareInit Success")
    INCA.SwitchToWorkingPage("DSMAUX_xClearTrg_C")#转到工作区
    #DownloadDifferences
    Ret = INCA.DownloadDifferences("DSMAUX_xClearTrg_C")
    print("同步INCA数据到ECU",Ret)
    INCA.StartMeasurement()
    INCA.StartRecording()#开始记录/开始测量

while(INCA.GetMeasureVal("nmot")==0):
    print("请启动发动机。。。。")
    time.sleep(1)
print(INCA.GetMeasureVal("nmot"))


#########故障测试############
PCodeSet.ResetFIU()
PCodeSet.P0137(PIN.UD8_A(8))
while(INCA.GetMeasureChar("DFES_numDFC_[0]")=="notused"):
    if(INCA.GetMeasureVal("nmot")==0):
        print("发动机熄火，请重新测试")
        faultexit()
    time.sleep(1)
print(PCodeSet.Mode7Req())
print("检查故障是否正确")
PCodeSet.ResetFIU()
time.sleep(1)
INCA.SetCalibVal("DSMAUX_xClearTrg_C",255)
time.sleep(1)
INCA.SetCalibVal("DSMAUX_xClearTrg_C",0)

#########故障测试############
PCodeSet.ResetFIU()
PCodeSet.P0138(PIN.UD8_A(8))
while(INCA.GetMeasureChar("DFES_numDFC_[0]")=="notused"):
    if(INCA.GetMeasureVal("nmot")==0):
        print("发动机熄火，请重新测试")
        faultexit()
    time.sleep(1)
print(PCodeSet.Mode7Req())
print("检查故障是否正确")
PCodeSet.ResetFIU()
time.sleep(1)
INCA.SetCalibVal("DSMAUX_xClearTrg_C",255)
time.sleep(1)
INCA.SetCalibVal("DSMAUX_xClearTrg_C",0)
###保存MDF
INCA.StopRecording("1234","ETASMDF")

