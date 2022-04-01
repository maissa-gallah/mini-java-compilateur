%{	
 /* We usually need these... */	
 #include <stdio.h>	
 #include <stdlib.h>	
 		
 #include "exemple.tab.h"	                                                                         	
 /* Local stuff we need here... */	
#include <math.h>	

int line =1;
 			
%}


%option yylineno


delim     [ \t]
bl        {delim}+
id        ([A-Za-z_][A-Za-z0-9_]*)
nb        (-?[1-9][0-9]*)
bool	  (true|false)
iderrone  [0-9][A-Za-z0-9_]*
comment_ouvrant "/*"
comment_fermant "*/"


paraouvrante  (\()
parafermante  (\))
acououvrante  (\{)
acoufermante  (\})
tabouvrante  (\[)
tabfermante  (\])

COMMENT_LINE        "//"+([^\n])+"\n"

COMMENT_LONG {comment_ouvrant}([^*]|"\n")*+{comment_fermant}
COMMENT_BLOC_ouvrant 	   {comment_ouvrant}([^*]|\*+[^*/])*\*+




%%


{bl}                                                                                 /* pas d'actions */



"\n" 			                                 line++;
"class"										     return CLASS;
"public static void main"						 return PSVM;
"public"							   		     return PUBLIC;
"static"									     return STATIC;
"void"										     return VOID;
"main"										     return MAIN;
"extends"									     return EXTENDS;
"return"									     return RETURN;
"if"										     return IF;
"else"										     return ELSE;
"while"										     return WHILE;
"System.out.println"								     return PRINT;
"length"								             return LENGTH;
"this"										     return THIS;
"new"										     return NEW;
"."										     return POINT;
";"										     return POINT_VIRGULE;
","											return VIRGULE;


"boolean"									     return BOOLEAN;
"int"										     return INT;
"String" 									     return STRING;




{paraouvrante}                                                                       return PAR_OUVRANTE;
{parafermante}                                                                       return PAR_FERMANTE;
{acououvrante}                                                                       return ACO_OUVRANTE;
{acoufermante}                                                                       return ACO_FERMANTE;
{tabouvrante}                                                                        return TAB_OUVRANTE;
{tabfermante}                                                                        return TAB_FERMANTE;

										
"="	                                                                             return AFFECTATION;

"&&"                                                                                 return OPERATOR;  
"<"                                                                                  return OPERATOR; 
">"                                                                                  return OPERATOR; 
"+"                                                                                  return OPERATOR; 
"-"                                                                                  return OPERATOR;   
"*"                                                                                  return OPERATOR;  
"!"										    										 return NOT;


{id}                                                                                 return ID;  
{nb}                                                                                 return NUMBER;  
{bool}                                                                               return BOOL; 



{COMMENT_LINE}         								     printf("commentaire line");  
{COMMENT_LONG}        								     printf("commentaire long");   




{iderrone}                    {fprintf(stderr," illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
{COMMENT_BLOC_ouvrant}          {fprintf(stderr," comment ouvert \'%s\' on line :%d\n",yytext,yylineno);}
{comment_fermant}		{fprintf(stderr," comment fermant \'%s\' on line :%d\n",yytext,yylineno);}	



%%


yywrap()
{
	return(1);
}
