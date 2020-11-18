import DocHelper

def InitReport(reportTitle):#初始化报表，如文档、标题、字体、大小等
    DocHelper.InitReportDocument()
    DocHelper.AddDocumentTitle(reportTitle)

def AddReportDescrible(paraDescrible):#添加报表描述，如报表第一段添加测试说明等
    DocHelper.AddDocumentDesc(paraDescrible)

'''
每个故障创建一个表格
1）先创建表格，传入该表格的标题名称和列list，list为动态创建表格的列，
每次创建的表格是独立的，可自定义列长度
2）添加行，每次添加的行都是在上一次创建的表格基础上添加
注：添加行数据的列应与创建表格的列保持一致
'''
def CreateFaultTable(testItemTitle, cellNameList):#创建故障表格
    DocHelper.CreateTable(testItemTitle, cellNameList)

def AddFaultRow(cellValueList):
    DocHelper.AddTableRow(cellValueList)

def SaveReport(reportFile):
    DocHelper.SaveReport(reportFile)

