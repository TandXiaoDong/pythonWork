"""
1、安装库 pip install pymupdf
2、直接运行
"""

import shutil
import time
import fitz
import os
import configparser


def getTimeStamp():
    return int(time.time())


# 读取配置路径
def readPath():
    filepath = os.path.realpath(__file__)
    index = filepath.rfind('\\')
    path = filepath[0:index + 1] + "db.ini"
    config = configparser.ConfigParser()
    config.read(path)
    dir_path = config.get('database', 'dir_path')
    copy_path = config.get('database', 'copy_path')
    save_path = config.get('database', 'save_path')
    return dir_path, copy_path, save_path


# 遍历文件夹
def walkFilePdf(file):
    file_list = []
    for root, dirs, files in os.walk(file):
        # 遍历文件
        for f in files:
            pathtem = os.path.join(root, f)
            # 只需要后缀为.doc的文件
            if ".pdf" in str(pathtem):
                print(pathtem)
                file_list.append(pathtem)
    return file_list


def filesCopy(path1, backPath):
    # 判断保存文件夹是否存在，不存在则创建
    if not os.path.isdir(backPath):
        os.makedirs(backPath)
    # 遍历文件
    for root, dirs, files in os.walk(path1):
        # root 表示当前正在访问的文件夹路径
        # dirs 表示该文件夹下的子目录名list
        # files 表示该文件夹下的文件list
        # 遍历文件
        for f in files:
            pathtem = os.path.join(root, f)
            # 只需要后缀为.doc的文件
            if ".pdf" in str(pathtem):
                shutil.copy(pathtem, backPath)
                # shutil.copy(os.path.join(xmlpath, xmlname), newpath)


# 删除指定路径下的所有文件
def removeFilesByPath(file):
    file_list = []
    for root, dirs, files in os.walk(file):
        # 遍历文件
        for f in files:
            pathtem = os.path.join(root, f)
            # 删除文件
            os.remove(pathtem)


def getPathhz(name):
    start = name.rindex('\\')
    h_name = name[start + 1:]
    q_name = name[0:start + 1]
    return q_name, h_name


def conver_img(pdfFiles, savePath):
    for pdf in pdfFiles:
        if str(pdf).__contains__("$"):
            continue
        print("pdf===", pdf)
        doc = fitz.open(pdf)
        pdf_name = os.path.splitext(pdf)[0]
        q_name, h_name = getPathhz(pdf_name)
        houzui_time_name = h_name + str(getTimeStamp())
        # 创建时间戳存储文件
        time_save_path = savePath + houzui_time_name
        os.makedirs(time_save_path)

        index = 1
        for pg in range(doc.pageCount):
            temp_pdf_name = time_save_path + "\\" + houzui_time_name + "_" + str(index) + ".png"
            print(pdf, "转换为=", temp_pdf_name)
            index = index + 1
            page = doc[pg]
            rotate = int(0)
            # 每个尺寸的缩放系数为2，这将为我们生成分辨率提高四倍的图像。
            zoom_x = 2.0
            zoom_y = 2.0
            trans = fitz.Matrix(zoom_x, zoom_y).preRotate(rotate)
            pm = page.getPixmap(matrix=trans, alpha=False)
            pm.writePNG('%s' % temp_pdf_name)


if __name__ == '__main__':
    while True:
        # 读取配置文件路径 临时文件夹：dir_path 备份文件夹：copy_path 存储文件夹：save_path
        dir_path, copy_path, save_path = readPath()
        # 获取所有的pdf文件
        pdfFiles = walkFilePdf(dir_path)
        if len(pdfFiles) > 0:
            # 复制文件
            filesCopy(dir_path, copy_path)
            pdfFiles = walkFilePdf(dir_path)
            # 把pdf文件转换为图片，保存
            conver_img(pdfFiles, save_path)
            # 删除文件
            removeFilesByPath(dir_path)
        else:
            print("暂无新pdf文件可以转换，请等待")
            time.sleep(20)