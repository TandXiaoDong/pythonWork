import AutoTestShowForm as tsForm
import  threading
import time

'''
测试流程中显示界面的操作DEMO：
1）创建两个并行任务：测试流程任务、窗体显示任务
2）可在测试任务中控制窗体的显示与关闭
    窗体显示：如以下示例传入参数，显示并更新界面
    窗体关闭：调用CloseForm函数关闭窗体
'''
def AutoTestTask():
    try:
        tsForm.CloseForm()
        for i in range(3):
            time.sleep(1)
            print('print', i)
        print('界面显示：')
        tsForm.UpdateShowParams('4','故障注入测试1','当前测试完成1', '速度：', '300', '发动机转速：', '49', '汽车速度：', '45', '负荷值：', '6333', '发动机水温：', '100')
        for i in range(3):
            time.sleep(1)
            print('print', i)
        tsForm.CloseForm()
        print('界面关闭')
        for i in range(3):
            time.sleep(1)
            print('print', i)
        print('界面显示：')
        tsForm.UpdateShowParams('4', '故障注入测试2', '当前测试完成2', '速度：', '34300', '发动机转速：', '449', '汽车速度：', '455', '负荷值：', '633',
                                '发动机水温：', '10450')
        for i in range(3):
            time.sleep(1)
            print('print', i)
        tsForm.CloseForm()
        print('界面关闭')
        print('所有测试结束...')
    except Exception as ex:
        print('err:', ex)

def ShowWindowTask():
    while True:
        if tsForm.winEnty.IsStop != True:
            tsForm.ShowTestFormBox()

def MainAutoTestTask():#创建两个并行任务，处理测试流程任务、窗体显示任务
    task1 = threading.Thread(target=AutoTestTask)
    task1.start()
    task2 = threading.Thread(target=ShowWindowTask)
    task2.start()

MainAutoTestTask()




