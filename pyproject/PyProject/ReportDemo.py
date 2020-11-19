from DocReport import *

InitReport('PVE故障注入测试')#初始化报表，如文档、标题、字体、大小等

#添加报表描述，如报表第一段添加测试说明等
AddReportDescrible('PVE故障注入测试，当前测试平台为UD8，测试参数包含故障类型、故障说明、驾驶循环、'
                   '故障码、注入结果等')

#将需要生成到报表的测试信息添加到表格
CreateFaultTable('P00001测试', ['故障','故障说明', '故障类型', '注入结果'])#创建故障表格
AddFaultRow(['P0000', '添加电阻', '普通电阻', '注入成功'])

AddReportDescrible('PVE故障注入测试，当前测试平台为UD8，测试参数包含故障类型、故障说明、驾驶循环、'
                   '故障码、注入结果等')

CreateFaultTable('P00002测试', ['故障','故障说明', '故障类型', '注入结果', '备注'])
AddFaultRow(['驾驶循环', '30', '普通电阻', '注入失败', ' '])
AddFaultRow(['故障码', 'P010908', '普通电阻', '注入失败', ' '])

#测试完成后保存报表
#设置保存绝对路径，只设置文件名则保存到当前程序路径
SaveReport(u'F:\work\Python\pythonWork\pyproject\PVE测试报表-测试版.docx')