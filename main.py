from tkinter import *
from tkinter.filedialog import *
from tkinter.messagebox import *
from tkinter.scrolledtext import *
from ui.file_menu import main as file_menu
from ui.help_menu import main as help_menu

root = Tk()
root.title("Java Compiler")
root.geometry("1000x700")
root.minsize(width=400, height=400)

m = PanedWindow(root,orient=VERTICAL)
m.pack(fill=BOTH, expand=1)

# TOP : Text Editor
text = ScrolledText(state='normal', height=30, width=100, wrap='word', undo=True)
text.pack(fill=Y, expand=1)
m.add(text)
#text.focus_set()

# BOTTOM : Compile Log
compiled = ScrolledText(state='normal', height=10, width=100, wrap='none', undo=True)
compiled.pack(fill=Y, expand=1)
compiled.configure(bg="black",fg="white")
m.add(compiled)


menubar = Menu(root)

file_menu(root, text, menubar, compiled)
help_menu(root, text, menubar)
root.mainloop()
