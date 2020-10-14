import  sys
import  clr
import  os
clr.FindAssembly("OBDAutoTestAPI.dll")
clr.AddReference('OBDAutoTestAPI')
from OBDAutoTestAPI import  *
from OBDAutoTestAPI.Mode import  *
test = AutoTestObject()
print("启动INCA...")
test.StartInca()
test.EnterIncaWorkSpace()
test.StartReadIncaMeasure()
# measureElement = ''
measureElement = 'B_RED'
print('添加测量变量：' + measureElement)
measureVal = test.GetMeasureElementValue("B_RED")
print('读取测量变量的值：'+measureVal)
# measureList = ['m1','m2','m3']
# test.AddIncaMeasureElement()
# test.ReadIncaAllCalibrationElement()
# test.ReadIncaAllMeasureElement()
#
calibrationElement = 'DEMO_CONSTANT_1'
calibVal = test.GetCalibrationElementValue(calibrationElement)
print('读取标定变量' + calibrationElement +'的值：'+calibVal)
setCaliVal = '83'
test.SetCalibrationElement(calibrationElement, setCaliVal)
print('设置标定变量' + calibrationElement + "设置的值为："+setCaliVal)
calibVal = test.GetCalibrationElementValue(calibrationElement)
print('读取标定变量' + calibrationElement + '的值：'+calibVal)
# test.CloseIncaTool()

