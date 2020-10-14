import time
from IncaApi import IncaCtl
from ExcelApi import excel

IncaExCel = excel('A76_1.5GDI_2020715_1.xlsx')
INCA = IncaCtl()
MaxRow,MaxClu=IncaExCel.getRowsClosNum()
t = time.time()
print ("TIME START",int(round(t * 1000)))    #毫秒级时间戳
for IndexN in range(MaxRow):#根据变量表 添加不同测量频率的变量
    if(IncaExCel.getCellValue(IndexN+1,3)=='X'):
        print(IncaExCel.getCellValue(IndexN+1,1),IncaExCel.getCellValue(1,3))
        INCA.CreateMeasureVal(IncaExCel.getCellValue(IndexN+1,1),IncaExCel.getCellValue(1,3))
    elif(IncaExCel.getCellValue(IndexN+1,4)=='X'):
        print(IncaExCel.getCellValue(IndexN + 1, 1), IncaExCel.getCellValue(1, 4))
        INCA.CreateMeasureVal(IncaExCel.getCellValue(IndexN + 1, 1), IncaExCel.getCellValue(1, 4))
    elif (IncaExCel.getCellValue(IndexN + 1, 5) == 'X'):
        print(IncaExCel.getCellValue(IndexN + 1, 1), IncaExCel.getCellValue(1, 5))
        INCA.CreateMeasureVal(IncaExCel.getCellValue(IndexN + 1, 1), IncaExCel.getCellValue(1, 5))
    else:
        print("None")
t = time.time()
print ("TIME END",int(round(t * 1000)))    #毫秒级时间戳
#添加标定变量
INCA.CreateCalibVal("DSMAUX_xClearTrg_C")
# print("RefPage")
# time.sleep(2)
# #转换到工作区
# INCA.SwitchToWorkingPage("DSMAUX_xClearTrg_C")
# print("WorkPage")
# time.sleep(2)
# #转换到RP区
# INCA.SwitchToReferencePage("DSMAUX_xClearTrg_C")
# print("RefPage")
