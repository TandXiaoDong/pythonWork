import time
from IncaApi import IncaCtl
from PrintRebuild import Logger
import os
import sys
path = os.path.abspath(os.path.dirname(__file__))
type = sys.getfilesystemencoding()
# sys.stdout = Logger('Log.txt')#使用print 保存文本

INCA = IncaCtl()
reT=INCA.InitialiseHW()

reT=True
if(reT==False):
    print("HardWareInit Failled")
else:
    print("HardWareInit Success")
    INCA.SwitchToWorkingPage("DSMAUX_xClearTrg_C")#转到工作区
    #DownloadDifferences
    Ret = INCA.DownloadDifferences("DSMAUX_xClearTrg_C")
    print("同步INCA数据到ECU",Ret)

    INCA.StartMeasurement()
    #INCA.StartRecording()#开始记录/开始测量
    #读取测量变量
    # print("Measurement Test-----------------")
    # Ret = INCA.GetMeasureVal("nmot")
    # print("nmot=",Ret)
    # Ret = INCA.GetMeasureVal("abak")
    # print("abak=",Ret)

    #读取标定变量
    print("CalibVal Test ---------------------")
    Ret = INCA.GetCalibVal("DSMAUX_xClearTrg_C")
    print("DSMAUX_xClearTrg_C=",Ret)
    #修改标定变量
    Ret = INCA.SetCalibVal("DSMAUX_xClearTrg_C",0)
    print(Ret)
    #读取修改后的标定变量
    Ret = INCA.GetCalibVal("DSMAUX_xClearTrg_C")
    print("DSMAUX_xClearTrg_C",Ret)


    #读取Vector
    print("Vector Test-----------------")
    Ret = INCA.GetCalibVal("ABMM4")
    print("ABMM4",Ret)
    #修改Vector
    Wrtab = INCA.ChangeOneTabVal(Ret,2,5)
    print(Wrtab)
    Ret = INCA.SetCalibVal("ABMM4",Wrtab)
    print(Ret)
    #读取修改后的Vector
    Ret = INCA.GetCalibVal("ABMM4")
    print("ABMM4",Ret)

    #读取曲线
    print("Curve Test-----------------")
    Ret = INCA.GetCurveVal("AC_dmClgACOff_CUR")
    print("AC_dmClgACOff_CUR",Ret)
    #修改曲线
    Wrtab = INCA.ChangeOneTabVal(Ret, 2, 4)
    Ret = INCA.SetCurveVal("AC_dmClgACOff_CUR",Wrtab)
    print(Ret)
    #读取修改后的曲线
    Ret = INCA.GetCurveVal("AC_dmClgACOff_CUR")
    print("AC_dmClgACOff_CUR",Ret)
    #读取曲线X轴坐标
    Ret = INCA.GetDistribution("AC_dmClgACOff_CUR")
    print("AC_dmClgACOff_CUR-Aix",Ret)
    #修改曲线X轴坐标
    Wrtab = INCA.ChangeOneTabVal(Ret, 2, 10010)
    Ret = INCA.SetDistribution("AC_dmClgACOff_CUR",Wrtab)
    print(Ret)
    #读取修改后的X轴坐标
    Ret = INCA.GetDistribution("AC_dmClgACOff_CUR")
    print("AC_dmClgACOff_CUR-Aix",Ret)

    #读取MAP
    print("MAP Test-----------------")
    Ret = INCA.GetMapVal("AC_dmClgACOn_MAP")
    print("AC_dmClgACOn_MAP",Ret)
    #修改MAP
    Wrtab = INCA.ChangeTwoTabVal(Ret, 1,1, 8)
    Ret = INCA.SetMapVal("AC_dmClgACOn_MAP",Wrtab)
    print("AC_dmClgACOn_MAP",Ret)
    #读取修改后的MAP
    Ret = INCA.GetMapVal("AC_dmClgACOn_MAP")
    print(Ret)
    # 读取MAP X轴坐标
    Ret = INCA.GetXDistribution("AC_dmClgACOn_MAP")
    print("AC_dmClgACOn_MAP-Aix-X",Ret)
    # 修改MAP X轴坐标
    Wrtab = INCA.ChangeOneTabVal(Ret, 1, 8000)
    Ret = INCA.SetXDistribution("AC_dmClgACOn_MAP",Wrtab)
    print(Ret)
    # 读取修改后的X轴坐标
    Ret = INCA.GetXDistribution("AC_dmClgACOn_MAP")
    print("AC_dmClgACOn_MAP-Aix-X",Ret)
    # 读取MAP Y轴坐标
    Ret = INCA.GetYDistribution("AC_dmClgACOn_MAP")
    print("AC_dmClgACOn_MAP-Aix-Y",Ret)
    # 修改MAP Y轴坐标
    Wrtab = INCA.ChangeOneTabVal(Ret, 1, -5)
    Ret = INCA.SetYDistribution("AC_dmClgACOn_MAP",Wrtab)
    print(Ret)
    # 读取修改后的Y轴坐标
    Ret = INCA.GetYDistribution("AC_dmClgACOn_MAP")
    print("AC_dmClgACOn_MAP-Aix-Y",Ret)

    Ret = INCA.SetCalibVal("DSMAUX_xClearTrg_C", 255)
    print("DSMAUX_xClearTrg_C -255", Ret)
    time.sleep(10)
    Ret = INCA.SetCalibVal("DSMAUX_xClearTrg_C", 0)
    print("DSMAUX_xClearTrg_C -0", Ret)




    #停止测量并记录/不记录
    # time.sleep(10)
    # INCA.StopMeasurement()
    #INCA.StopRecording("1234","ETASMDF")
#
# #退出INCA
# #INCA.Close()






