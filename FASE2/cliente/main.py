import requests
import json
import tkinter as tk
import tkinter.font as tkFont
from tkinter import filedialog
from tkinter import *


base_url = "http://localhost:2500"


class App_Main:
    def __init__(self, root):
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
        GButton_loggin["command"] = self.GButton_loggin_command(
            GListBox_contra)

    def GButton_221_command(self):
        print("command")

    def GButton_loggin_command(self, GListBox_contra):
        all_items = GListBox_contra.get(0, tk.END)
        print(all_items)

class Main:
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

        GLabel_carM = tk.Label(root)
        ft = tkFont.Font(family='Times', size=10)
        GLabel_carM["font"] = ft
        GLabel_carM["fg"] = "#333333"
        GLabel_carM["justify"] = "center"
        GLabel_carM["text"] = "Carga Masiva"
        GLabel_carM.place(x=20, y=60, width=86, height=30)

        GLabel_register = tk.Label(root)
        ft = tkFont.Font(family='Times', size=10)
        GLabel_register["font"] = ft
        GLabel_register["fg"] = "#333333"
        GLabel_register["justify"] = "center"
        GLabel_register["text"] = "Registrar Usuario"
        GLabel_register.place(x=20, y=100, width=98, height=30)

        GLabel_reportes = tk.Label(root)
        ft = tkFont.Font(family='Times', size=10)
        GLabel_reportes["font"] = ft
        GLabel_reportes["fg"] = "#333333"
        GLabel_reportes["justify"] = "center"
        GLabel_reportes["text"] = "reportes"
        GLabel_reportes.place(x=20, y=140, width=70, height=25)

        GButton_carM = tk.Button(root)
        GButton_carM["bg"] = "#f0f0f0"
        ft = tkFont.Font(family='Times', size=10)
        GButton_carM["font"] = ft
        GButton_carM["fg"] = "#000000"
        GButton_carM["justify"] = "center"
        GButton_carM["text"] = "click"
        GButton_carM.place(x=130, y=60, width=70, height=25)
        GButton_carM["command"] = self.GButton_carM_command

        GButton_register = tk.Button(root)
        GButton_register["bg"] = "#f0f0f0"
        ft = tkFont.Font(family='Times', size=10)
        GButton_register["font"] = ft
        GButton_register["fg"] = "#000000"
        GButton_register["justify"] = "center"
        GButton_register["text"] = "clik"
        GButton_register.place(x=130, y=100, width=70, height=25)
        GButton_register["command"] = self.GButton_register_command

        GButton_reportes = tk.Button(root)
        GButton_reportes["bg"] = "#f0f0f0"
        ft = tkFont.Font(family='Times', size=10)
        GButton_reportes["font"] = ft
        GButton_reportes["fg"] = "#000000"
        GButton_reportes["justify"] = "center"
        GButton_reportes["text"] = "click"
        GButton_reportes.place(x=130, y=140, width=70, height=25)
        GButton_reportes["command"] = self.GButton_reportes_command

        GButton_exit = tk.Button(root)
        GButton_exit["bg"] = "#f0f0f0"
        ft = tkFont.Font(family='Times', size=10)
        GButton_exit["font"] = ft
        GButton_exit["fg"] = "#000000"
        GButton_exit["justify"] = "center"
        GButton_exit["text"] = "salir"
        GButton_exit.place(x=180, y=220, width=70, height=25)
        GButton_exit["command"] = self.GButton_exit_command
        
        #rootM = tk.Tk()
        #app = App_Main(rootM)

    def GButton_carM_command(self):
        root = Tk()
        root = filedialog.askopenfilename(initialdir="D:",
        title="Select file", filetypes=(("lfp files", "*.json"), ("all files", "*.*")))
        archivo = open(root, 'r', encoding="utf-8")
        unir = ''
        for linea in archivo.readlines():  # LEE LINEA POR LINEA
            unir = unir+linea
        carga = {'jsonCarga': unir}
        x = requests.post(f'{base_url}/PostCargaMasiva', json=carga)
        archivo.close()
        
        print(x.status_code)

    def GButton_register_command(self):
        print("registrar")

    def GButton_reportes_command(self):
        print("reportes")

    def GButton_exit_command(self):
        print("salida")

    


if __name__ == '__main__':   
    # # obtener dato
    # data = "un saludo desde python"
    # res = requests.get(f'{base_url}/Tget')
    # data = res.json()  # convertimos la respuesta en dict
    # print(data)

    # # enviar dato
    # data = {'post': 'post desde python'}
    # res = requests.post(f'{base_url}/Tpost', json=data)
    # print(res.status_code)

    # # actualizar dato
    # data = {'put': 'put desde python'}
    # res = requests.put(f'{base_url}/Tput', json=data)
    # print(res.status_code)

    # # eliminar dato
    # data ={'delete': 'delete desde python'}
    # requests.delete(f'{base_url}/Tdelete', json=data)

    root = tk.Tk()
    app = Main(root)
    root.mainloop()