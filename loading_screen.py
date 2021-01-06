import tkinter
import tkinter.messagebox as tp

top = tkinter.Tk()

def helloCallBack():
    tp.showinfo("hello za warudo")
B = tkinter.Button(top, text ="Hello", command = helloCallBack)

B.pack()
top.mainloop()