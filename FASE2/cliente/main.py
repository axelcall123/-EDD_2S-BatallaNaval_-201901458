import requests
import json
import tkinter as tk
import tkinter.font as tkFont

base_url = "http://localhost:3200"


class App_Main:
    def __init__(self, root):
        print()

    def GButton_221_command(self):
        print("command")

class App:
    def __init__(self, root):
        #setting title
        root.title("undefined")
        #setting window size
        width = 370
        height = 253
        screenwidth = root.winfo_screenwidth()
        screenheight = root.winfo_screenheight()
        alignstr = '%dx%d+%d+%d' % (width, height,
                                    (screenwidth - width) / 2, (screenheight - height) / 2)
        root.geometry(alignstr)
        root.resizable(width=False, height=False)

        #OTROS
        GListBox_user = tk.Listbox(root)
        GListBox_user["borderwidth"] = "1px"
        ft = tkFont.Font(family='Times', size=10)
        GListBox_user["font"] = ft
        GListBox_user["fg"] = "#333333"
        GListBox_user["justify"] = "center"
        GListBox_user.place(x=230, y=80, width=80, height=25)
        GListBox_user["exportselection"] = "1"
        GListBox_user["selectmode"] = "browse"
        GListBox_user["setgrid"] = "False"
        
        GLabel_Titulo = tk.Label(root)
        ft = tkFont.Font(family='Times', size=23)
        GLabel_Titulo["font"] = ft
        GLabel_Titulo["fg"] = "#333333"
        GLabel_Titulo["justify"] = "center"
        GLabel_Titulo["text"] = "Login"
        GLabel_Titulo.place(x=160, y=40, width=70, height=25)

        GLabel_user = tk.Label(root)
        ft = tkFont.Font(family='Times', size=10)
        GLabel_user["font"] = ft
        GLabel_user["fg"] = "#333333"
        GLabel_user["justify"] = "center"
        GLabel_user["text"] = "ingrese usuario"
        GLabel_user.place(x=70, y=80, width=95, height=30)

        GLabel_contra = tk.Label(root)
        ft = tkFont.Font(family='Times', size=10)
        GLabel_contra["font"] = ft
        GLabel_contra["fg"] = "#333333"
        GLabel_contra["justify"] = "center"
        GLabel_contra["text"] = "ingrse contraseña"
        GLabel_contra.place(x=70, y=120, width=109, height=30)

        GListBox_contra = tk.Listbox(root)
        GListBox_contra["borderwidth"] = "1px"
        ft = tkFont.Font(family='Times', size=10)
        GListBox_contra["font"] = ft
        GListBox_contra["fg"] = "#333333"
        GListBox_contra["text"] = "hlis"
        GListBox_contra["justify"] = "center"
        GListBox_contra.place(x=230, y=120, width=80, height=25)

        GButton_loggin = tk.Button(root)
        GButton_loggin["bg"] = "#f0f0f0"
        ft = tkFont.Font(family='Times', size=10)
        GButton_loggin["font"] = ft
        GButton_loggin["fg"] = "#000000"
        GButton_loggin["justify"] = "center"
        GButton_loggin["text"] = "iniciar sesion"
        GButton_loggin.place(x=200, y=180, width=86, height=30)
        GButton_loggin["command"] = self.GButton_loggin_command(GListBox_contra)
        
        #rootM = tk.Tk()
        #app = App_Main(rootM)

    def GButton_loggin_command(self, GListBox_contra):
        all_items = GListBox_contra.get(0, tk.END)
        print(all_items)


if __name__ == '__main__':
    ##o btener usuarios
    #res = requests.get(f'{base_url}/get_usuario') 
    #data = res.json() #convertimos la respuesta en dict
    #print(data)
    #graficos

    root = tk.Tk()
    app = App(root)
    root.mainloop()