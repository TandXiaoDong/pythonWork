from tkinter import *
import time
import threading

def vp_start_gui():
    global root
    root = Tk()
    main()

def closeWin():
    sys.exit(0)

def main():
    b = Button(root, text='退出', command=refresh)
    b.pack()

def autoClose():
    for i in range(3):
        time.sleep(1)
    root.destroy()

def refresh():
    try:
        root.destroy()
        vp_start_gui()
    except Exception as ex:
        vp_start_gui()

def startUIThread():
    refresh()
    t = threading.Thread(target=autoClose)
    t.setDaemon(False)
    t.start()
    root.mainloop()
# startUIThread()
