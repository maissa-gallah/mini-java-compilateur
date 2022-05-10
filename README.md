# mini Java compiler 

This projects contain a Java compiler built with C language, as well as a text editor.

### Run the application
```
python .\main.py
```
![execution](https://github.com/maissa-gallah/mini-java-compilateur/blob/main/execution2.PNG)

### Execute the compiler

```
flex exemple.lex
```

```
bison -d exemple.y
```

```
gcc -o exemple exemple.tab.c lex.yy.c
```

```
exemple.exe < maissa.txt
```
