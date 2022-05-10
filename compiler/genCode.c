
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genCode.h"

ENTRE_CODE * tab[100];   

extern int line;


//------------------------------------------------------- Function to insert an identifier
int insert_code(  char * code_op,int operande, char * nomFct)
{
    int index = search_index_code();
    ENTRE_CODE * p = (ENTRE_CODE *) malloc (sizeof (ENTRE_CODE));
    p->operande=operande;
    p->nomFct=nomFct;
    p->code_op=code_op;
    if (strcmp(code_op,"+")==0)
        p->code_op="ADD";
    if (strcmp(code_op,"-")==0)
        p->code_op="SUB";
    if (strcmp(code_op,"/")==0)
       p->code_op="DIV";
    
    if (strcmp(code_op,"*")==0)
       p->code_op="MUL";
    if (strcmp(code_op,"<")==0)
     p->code_op="INF";
    if (strcmp(code_op,">")==0)
        p->code_op="SUP";
    if (strcmp(code_op,"<=")==0)
     p->code_op="INFE";
    if (strcmp(code_op,">=")==0)
        p->code_op="SUPE";
    if (strcmp(code_op,"==")==0)
    p->code_op="EGAL";
    if (strcmp(code_op,"!=")==0)
       p->code_op="DIF";
    if (strcmp(code_op,"=")==0)
       p->code_op="STORE";
    if (strcmp(code_op,"}")==0)
    p->code_op="SORTIE";
    if (strcmp(code_op,"while")==0)
    p->code_op="WHILE";
    
   


    if (tab[index] == NULL) {
        tab[index] = p;
        return 1;
    }
    
  
    return 0;
}

//------------------------------------------------------- Function to see all table
int affiche()

{

    ENTRE_CODE * p ;
	int i;
    for (i = 0; i< 100; i++){
        if (tab[i] == NULL ){
            return -1;
        }
        else
        { 
            p=tab[i];
            if (p->operande == -1)
            printf("  %s   \n", p->code_op);
            else
            printf(" %s : %d  \n", p->code_op,p->operande);
        }
    }
  
    return 0;
}
  
//------------------------------------------------------- Function to  an identifier

int search_index_code(){
    int i;
    for (i = 0; i< 100; i++){
        if (tab[i] == NULL ){
            return i;
        }
    }
    printf("table overflow");
    return -1 ;
}

//------------------------------------------------------- Function to  an identifier

void fin_while(){
printf("end while");
}


