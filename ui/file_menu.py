import subprocess
from tkinter import *
from tkinter.filedialog import *
from tkinter.messagebox import *

filename = ''


class File():

    def __init__(self, text, root):
        self.filename = None
        self.text = text
        self.root = root 

    def newFile(self):
        self.filename = "Untitled"
        global filename 
        filename = "Untitled"
        self.root.title(filename)
        self.text.delete(0.0, END)

    def saveFile(self):
        try:
            t = self.text.get(0.0, END)
            f = open(self.filename, 'w')
            f.write(t)
            f.close()
        except:
            self.saveAs()

    def saveAs(self):
        f = asksaveasfile(mode='w', defaultextension='.java')
        t = self.text.get(0.0, END)
        global filename 
        filename = f.name
        self.root.title(filename)
        try:
            f.write(t.rstrip())
        except:
            showerror(title="Oops!", message="Unable to save file...")

    def openFile(self):
        f = askopenfile(mode='r')
        self.filename = f.name
        global filename 
        filename = f.name
        self.root.title(filename)
        t = f.read()
        self.text.delete(0.0, END)
        self.text.insert(0.0, t)

    def quit(self):
        entry = askyesno(title="Quit", message="Are you sure you want to quit?")
        if entry == True:
            self.root.destroy()

class Executer():

    def __init__(self, text, compiled, objFile):
        self.compiled = compiled  
        self.text = text  
        self.objFile = objFile
    
    def save(self):
        if (filename == 'Untitled' or filename == '' ):
            self.objFile.saveAs()
        else:
            self.objFile.saveFile()

    def compileFile(self):
        self.save()
        cmd = 'cd compiler'
        batcmd = 'exemple.exe < ' + filename
        output = subprocess.getoutput(cmd+ " && "+ batcmd)
        self.compiled.delete("1.0", END)
        if output == '' :
            output = "File compiled successfully"
        self.compiled.insert(1.0,chars=output)



def main(root, text, menubar, compiled):
    filemenu = Menu(menubar)
    objFile = File(text, root)
    filemenu.add_command(label="New", command=objFile.newFile)
    filemenu.add_command(label="Open", command=objFile.openFile)
    filemenu.add_command(label="Save", command=objFile.saveFile)
    filemenu.add_command(label="Save As...", command=objFile.saveAs)
    filemenu.add_separator()
    filemenu.add_command(label="Quit", command=objFile.quit)
    menubar.add_cascade(label="File", menu=filemenu)
    root.config(menu=menubar)

    executer = Executer(text, compiled, objFile)

    executeMenu = Menu(menubar)
    executeMenu.add_command(label="Compile", command=executer.compileFile)
    menubar.add_cascade(label="Execute", menu=executeMenu)

    root.config(menu=menubar)


if __name__ == "__main__":
    print("Please run 'main.py'")
