import tkinter as tk
import tkinter.ttk as ttk
from glob import glob
import os

root = tk.Tk()
root.title("Today's Dinner")

class Button:

    row = 0
    column = 0
    def __init__(self, text, func, arg, image=""):
        if image != "":
            image = tk.PhotoImage(file=image)
        root.rowconfigure(Button.row, weight = 1, minsize=40)
        root.rowconfigure(Button.column, weight=1, minsize=40)
        self.button = tk.Button(
            root,
            text = text,
            image = image,
            compound=tk.LEFT,
            command=lambda: func(arg))

        self.button.grid(row=Button.row, column=Button.column, sticky="news", padx=0)
        self.button.image = image
        if Button.column < 5:
            Button.column += 1
        else:
            Button.column = 0
            Button.row += 1

sites = glob("*.site")    
print(sites)
if sites != []:
    with open(sites[0]) as file:
        file = file.readlines()
    for line in file:
        x = line.strip()
        x = [f for f in x.split("#")]
        title, address, image = x
        Button(title, os.startfile, address, image="icons/" + image)
root.mainloop()
