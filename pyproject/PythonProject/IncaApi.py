from win32com import client
TOOL_ID    = u"Inca.Inca.7.1"                      # INCA COM address
DBPATH     = u"\database\\dbtest"        # path and name of used database
TOPFOLDER  = u"DEFAULT"                        # name of top folder
SUBFOLDER  = u""                                   # name of sub folder
EXPERIMENT = u"exp"                           # name of experiment element
WORKSPACE  = u"work"                        # name of workspace element

class IncaCtl():
    def __init__(self):
        # Get connection to INCA and open it, if it was closed
        self.oINCA = client.Dispatch(TOOL_ID)
        self.oExp = self.oINCA.GetOpenedExperiment()
        if(self.oExp == None):
            # Get data path
            self.sAppDataPath = self.oINCA.GetApplicationDataPath()
            # Set Database path
            sDBPath = self.sAppDataPath + DBPATH
            # Get current open Database
            self.oDB = self.oINCA.OpenDataBase(sDBPath)
            # Get Top-Folder
            # Top-Folder has to be referenced by the database object.
            self.oSF = self.oDB.GetFolder(TOPFOLDER)
            # Get Experiment-Item from Database  (EE object)
            self.oEE = self.oSF.GetComponent(EXPERIMENT)
            # Get Workspace-Item from Database (WS object)
            self.oWS = self.oSF.GetComponent(WORKSPACE)
            # if(self.oINCA.GetOpenedExperimentView() == False):
            # Open Experiment and get Experiment-View
            self.oOE = self.oEE.OpenExperiment()
            # Get reference to open experiment
            self.oExp = self.oOE.GetExperiment()
            self.oExpV = self.oINCA.GetOpenedExperimentView()
        else:
            self.oExpV = self.oINCA.GetOpenedExperimentView()

    def InitialiseHW(self):
        reT = self.oExp.InitializeHardware()
        return reT

    def DownloadDifferences(self,calbiname):
        oMe_nmot  = self.oExp.GetCalibrationElement(calbiname)
        reT = self.oExpV.OpenViewForExperimentElement(oMe_nmot)
        # Get Experiment-Device 获取变量的工作区
        oED = oMe_nmot.GetDevice()
        #Change to WorkingPage //
        reT = oED.DownloadDifferences()
        return reT

    def CreateMeasureVal(self,Name, Raster):  # "10ms time synchronous"
        oME_MeasureName = self.oExp.GetMeasureElement(Name)  # 获取标定变量信息
        reT = self.oExpV.OpenViewForExperimentElement(oME_MeasureName)
        oCV_MeasureName = oME_MeasureName.GetValue()  # 变量指针
        oCV_MeasureName.SetCurrentAcquisitionRate(Raster)
        return oCV_MeasureName

    def CreateCalibVal(self, Name):
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)  # 获取标定变量信息
        reT = self.oExpV.OpenViewForExperimentElement(oCE_CalibName)
        return reT

    def GetCalibVal(self,Name):
        # 获取标定变量
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        reT = oCV_CalibName.GetDoublePhysValue()  # xx 是数组或则数字
        return reT

    def SetCalibVal(self,Name,val):
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        reT = oCV_CalibName.SetDoublePhysValue(val)  # xx 是数组或则数字
        return reT

    def GetCurveVal(self,Name):
        print("Print in Sub Prog")
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        oCV_CalibName = oCV_CalibName.GetValue()
        reT = oCV_CalibName.GetDoublePhysValue()  # xx 是数组或则数字
        return reT
    def SetCurveVal(self,Name,val):
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        oCV_CalibName = oCV_CalibName.GetValue()
        reT = oCV_CalibName.SetDoublePhysValue(val)  # xx 是数组或则数字
        return reT

    def GetMapVal(self,Name):
        # 获取标定变量
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        oCV_CalibName = oCV_CalibName.GetValue()  #MAP 需要读取两次VAL
        reT = oCV_CalibName.GetDoublePhysValue()  # xx 是数组或则数字
        return reT

    def SetMapVal(self,Name, val):
        # 修改标定变量
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        oCV_CalibName = oCV_CalibName.GetValue()  #MAP 需要读取两次VAL
        reT = oCV_CalibName.SetDoublePhysValue(val)  # xx 是数组或则数字
        return reT


    def GetDistribution(self, Name):  # 获取坐标轴信息
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        oAix_CalibName = oCV_CalibName.GetDistribution()
        Ret = oAix_CalibName.GetDoublePhysValue()
        return Ret
# bool SetDistribution(
# 	CalibrationDistributionData dis
# )
    def SetDistribution(self,Name,val):
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)

        oCV_CalibName = oCE_CalibName.GetValue()
        oAix_CalibName = oCV_CalibName.GetDistribution()
        Ret = oAix_CalibName.SetDoublePhysValue(val)
        return Ret

    def GetXDistribution(self,Name):#获取坐标轴信息
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        oAix_CalibName= oCV_CalibName.GetXDistribution()
        Ret = oAix_CalibName.GetDoublePhysValue()
        return Ret

    def SetXDistribution(self,Name,val):
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        oAix_CalibName = oCV_CalibName.GetXDistribution()
        Ret = oAix_CalibName.SetDoublePhysValue(val)
        return Ret

    def GetYDistribution(self,Name):#获取坐标轴信息
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        oAix_CalibName= oCV_CalibName.GetYDistribution()
        Ret = oAix_CalibName.GetDoublePhysValue()
        return Ret

    def SetYDistribution(self,Name,val):
        oCE_CalibName = self.oExp.GetCalibrationElement(Name)
        oCV_CalibName = oCE_CalibName.GetValue()
        oAix_CalibName = oCV_CalibName.GetYDistribution()
        Ret = oAix_CalibName.SetDoublePhysValue(val)
        return Ret

    def GetMeasureVal(self,Name):
        oME_MeasureName = self.oExp.GetMeasureElement(Name)
        oCV_MeasureName = oME_MeasureName.GetValue()
        Ret = oCV_MeasureName.GetDoublePhysValue()  # 返回MAP或则 值
        return Ret

    def SwitchToWorkingPage(self,calbiname):#必须有一个变量名映射到硬件通道
        oMe_nmot  = self.oExp.GetCalibrationElement(calbiname)
        reT = self.oExpV.OpenViewForExperimentElement(oMe_nmot)
        # Get Experiment-Device 获取变量的工作区
        oED = oMe_nmot.GetDevice()
        #Change to WorkingPage //
        reT = oED.SwitchToWorkingPage()
        return reT

    def SwitchToReferencePage(self,calbiname):#必须有一个变量名映射到硬件通道
        oMe_nmot = self.oExp.GetCalibrationElement(calbiname)
        reT = self.oExpV.OpenViewForExperimentElement(oMe_nmot)
        # Get Experiment-Device 获取变量的工作区
        oED = oMe_nmot.GetDevice()  # 获取某个变量对应通道的dev
        # Change to WorkingPage //默认是RP  更改到WP
        reT = oED.SwitchToReferencePage()
        return reT

    # oExp.StartMeasurement()
    def StartMeasurement(self):
        reT = self.oExp.StartMeasurement()
        return reT

    def StartRecording(self):
        reT = self.oExp.StartRecording()
        return reT
    def StopMeasurement(self):
        reT = self.oExp.StopMeasurement()
        return reT

    def StopRecording(self,filename,fileformat):
        reT = self.oExp.StopMeasurement()
        reT = self.oExp.StopRecording(filename,fileformat)
        return 0
    def StopAndDiscardRecording(self):
        reT = self.oExp.StopMeasurement()
        reT = self.oExp.StopAndDiscardRecording()
        return reT

    def Close(self):
        reT = self.oINCA.CloseTool()
        return reT

    # def SetXDistribution(self,Name,dis):#设置X轴数据
    #     oCE_CalibName = self.oExp.GetCalibrationElement(Name)
    #     oCV_CalibName = oCE_CalibName.GetValue()

    def ChangeOneTabVal(self,Read,x,val):
        out = ()
        for IndexX in range(len(Read)):
            if (x == IndexX):
                tuple = val,
                out = out[:]+tuple
            else:
                out = out[:] + Read[IndexX:IndexX + 1]
        return out


    def ChangeTwoTabVal(self,Read, x, y, val):
        out = ()
        for IndexX in range(len(Read)):
            if (x == IndexX):
                tempy = ()
                oldy = Read[IndexX]
                for IndexY in range(len(oldy)):
                    if (y == IndexY):
                        tuple = val,
                        tempy = tempy[:] + tuple
                    else:
                        tempy = tempy[:] + oldy[IndexY:IndexY + 1]
                tuple = tempy,
                out = out[:] + tuple
            else:
                out = out[:] + Read[IndexX:IndexX + 1]
        return out