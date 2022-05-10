"# mini-java-compilateur" 
flex exemple.lex
bison -d exemple.y
gcc -o exemple exemple.tab.c lex.yy.c
exemple.exe < maissa.txt