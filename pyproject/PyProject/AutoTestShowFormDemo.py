import AutoTestShowForm as tsForm
import  threading
import time

#调用
def OpenForm():
    tsForm.AutoTestFormBox('15','故障注入测试1','当前测试完成,五秒钟后进入下一项测试', '速度1：', '300', '发动机转速1：', '49', '汽车速度1：', '45', '负荷值1：', '6333', '发动机水温1：', '100')

# tsForm.AutoTestFormBox('6','故障注入测试2','当前测试完成', '速度2：', '300', '发动机转速2：', '49', '汽车速度2：', '45', '负荷值2：', '6333', '发动机水温2：', '100')
def Process():
    for i in range(5):
        time.sleep(1)
        print('count:', i)
    tsForm.ShowMessageBox().CloseForm()

# OpenForm()
# Process()
t1 = threading.Thread(target=OpenForm)
t1.daemon = True
t1.start()
#
t2 = threading.Thread(target=Process)
t2.daemon = True
t2.start()


