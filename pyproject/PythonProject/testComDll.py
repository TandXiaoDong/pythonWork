__author__ = 'nf82si'
#-------------------------------------------------------------------------------
# This Python-Script shows how to read out measurement values and read and change a calibration map.
# Python V3.4 pywin32-219
# Project ..\Data\Demo\0400
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Library for COM communication
import win32com
import time
from win32com import client
#-------------------------------------------------------------------------------


#-------------------------------------------------------------------------------
# const
TOOL_ID = u"Inca.Inca.7.1"              # INCA COM address
DBPATH  = u"\database\\dbtest"        # path and name of used database
TOPFOLDER  = u"DEFAULT"            # name of top folder
SUBFOLDER = u""            # name of sub folder
EXPERIMENT = u"EE_API"                  # name of experiment element
WORKSPACE  = u"WS_API"                  # name of workspace element
MEAS_DOUBLE = u"adIn0"                  # name of double measurement
MEAS_BOOL   = u"B_LL"                   # name of boolean measurement
CALIBR_DOUBLE = u"DEF_ADIN0"            # name of double calibration
CALIBR_MAP    = u"KFZW"                 # name of map calibration
Rate = u"RASTER_A"
#-------------------------------------------------------------------------------
print ("----- Start -----")
# Get connection to INCA and open it, if it was closed
oINCA = client.Dispatch(TOOL_ID)
# Get data path
sAppDataPath = oINCA.GetApplicationDataPath()
# Set Database path
sDBPath = sAppDataPath + DBPATH

# Get current open Database
oDB = oINCA.OpenDataBase(sDBPath)

# Get Top-Folder
# Top-Folder has to be referenced by the database object.
oTF = oDB.GetFolder(TOPFOLDER)

# Get Sub-Folder
# Sub-Folder has to be referenced by other folder objects.
# Folder objects are Top-Folder and Sub-Folder objects.
oSF = oTF.GetSubFolder(SUBFOLDER)

# Get Experiment-Item from Database  (EE object)
oEE = oSF.GetComponent(EXPERIMENT)

# Get Workspace-Item from Database (WS object)
oWS = oSF.GetComponent(WORKSPACE)

# Reference Experiment with Workspace
reT = oEE.SetHardwareConfiguration(oWS)
print("Referenced Experiment with Workspace: ", reT)

# Initialise HW
reT = oWS.InitializeHardware()

# Open Experiment and get Experiment-View
oOE = oEE.OpenExperiment()

# Get reference to open experiment
oExp = oOE.GetExperiment()

# Get Experiment View
oExpV = oINCA.GetOpenedExperimentView()

# Get Measure-Element
MEAS_DOUBLE = 'abak'
oME_Double  = oExp.GetMeasureElement(MEAS_DOUBLE)
#oME_Boolean = oExp.GetMeasureElement(MEAS_BOOL)

# Get Measure-Value
oMV_Double  = oME_Double.GetValue()
#oMV_Boolean = oME_Boolean.GetValue()

reT = oExpV.OpenViewForExperimentElement(oME_Double)
#reT = oExpV.OpenViewForExperimentElement(oME_Boolean)
time.sleep(2)

# Get Calibration-Element
CALIBR_DOUBLE = 'abo'
oCE_Double = oExp.GetCalibrationElement(CALIBR_DOUBLE)
oCE_Map    = oExp.GetCalibrationElement( CALIBR_MAP)

# Get Experiment-Device
oED = oCE_Double.GetDevice()

# Change to WorkingPage
reT = oED.SwitchToWorkingPage()

# Get Calibration-Value
oCV_Double = oCE_Double.GetValue()
oCV_Map    = oCE_Map.GetValue()
# Get Matrix-Object for Map Calibration
oCE       = oCV_Map.GetValue()

# Start Recording
reT = oExp.StartRecording()
print ("Recording started: " , reT )

# Get Value of Double Measurement
print("Measure-Element: " + oME_Double.GetName() + "; " +
      "Measure-Value: " + str(oMV_Double.GetDoublePhysValue()))
# Get Value of Boolean Measurement
print("Measure-Element: " + oME_Boolean.GetName() + "; " +
      "Measure-Value: " + str(oMV_Boolean.GetDoublePhysValue()))

# Get Value of Double Calibration
DoubleValue = oCV_Double.GetDoublePhysValue()
print("Calibration-Element: " + oCE_Double.GetName() + "; " +
      "Calibration-Value: " + str(DoubleValue))
# Get Value of Map Calibration
MatrixValue = oCE.GetDoublePhysValue()
print("Calibration-Element: " + oCE_Map.GetName() + "; " +
      "Calibration-Value: ")
print (MatrixValue)

# Set Value of Double Calibration
if DoubleValue < 240:
    DoubleValue = DoubleValue + 10
else:
    DoubleValue = 60
reT = oCV_Double.SetDoublePhysValue(DoubleValue)
print ("Set Calibration: ", reT )

# Set Value of Map Calibration
XMatrixValue = ()
for IndexX in range(len(MatrixValue)):
    YMatrixValue = ()
    for IndexY in range(len(MatrixValue[0])):
        if (IndexX + IndexY) % 2 == 0:
            Value = MatrixValue[IndexX][IndexY] + 1
        else:
            Value = MatrixValue[IndexX][IndexY]
        Tupel = Value,
        YMatrixValue = YMatrixValue[:] + Tupel
    Tupel =  YMatrixValue,
    XMatrixValue = XMatrixValue + Tupel
reT = oCE.SetDoublePhysValue(XMatrixValue)
print ("Set Calibration: " , reT )

# Get Value of Map Calibration
MatrixValue = oCE.GetDoublePhysValue()
print("Calibration-Element: " + oCE_Map.GetName() + "; " +
      "Changed Calibration-Values: ")
print (MatrixValue)

# Stop Recording
#reT = oExp.StopMeasurement()
reT = oExp.StopAndDiscardRecording()
print ("Recording stopped: " , reT )

# Close INCA
reT = oINCA.CloseTool()
# Clean up
reT = oINCA.DisconnectFromTool()
del oINCA

print ("----- End -----")
