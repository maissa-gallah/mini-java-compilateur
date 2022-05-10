%{	
 /* We usually need these... */	
 #include <stdio.h>	
 #include <stdlib.h>	
 		
 #include "exemple.tab.h"	                                                                         	
 /* Local stuff we need here... */	
#include <math.h>

#define YYSTYPE char*
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
"class"										     { yylval = (int)strdup(yytext); return CLASS; }
"public static void main"						 { yylval = (int)strdup(yytext); return PSVM; }
"public"							   		     { yylval = (int)strdup(yytext); return PUBLIC; }
"static"									     { yylval = (int)strdup(yytext); return STATIC; }
"void"										     { yylval = (int)strdup(yytext); return VOID;}
"main"										     { yylval = (int)strdup(yytext); return MAIN;}
"extends"									     { yylval = (int)strdup(yytext); return EXTENDS;}
"return"									     { yylval = (int)strdup(yytext); return RETURN;}
"if"										     { yylval = (int)strdup(yytext); return IF;}
"else"										     { yylval = (int)strdup(yytext); return ELSE;}
"while"										     { yylval = (int)strdup(yytext); return WHILE;}
"System.out.println"							{ yylval = (int)strdup(yytext);	     return PRINT;}
"length"								         { yylval = (int)strdup(yytext);    return LENGTH;}
"this"										     { yylval = (int)strdup(yytext);return THIS;}
"new"										     { yylval = (int)strdup(yytext);return NEW;}
"."										     { yylval = (int)strdup(yytext);return POINT;}
";"										     { yylval = (int)strdup(yytext);return POINT_VIRGULE;}
","											{ yylval = (int)strdup(yytext);return VIRGULE;}


"boolean"									     { yylval = (int)strdup(yytext);return BOOLEAN;}
"int"										     { yylval = (int)strdup(yytext); return INT;}
"String" 									     { yylval = (int)strdup(yytext); return STRING;}




{paraouvrante}                               { yylval = (int)strdup(yytext);return PAR_OUVRANTE;}
{parafermante}                               { yylval = (int)strdup(yytext);return PAR_FERMANTE;}
{acououvrante}                               { yylval = (int)strdup(yytext);return ACO_OUVRANTE;}
{acoufermante}                               { yylval = (int)strdup(yytext);return ACO_FERMANTE;}
{tabouvrante}                                { yylval = (int)strdup(yytext);return TAB_OUVRANTE;}
{tabfermante}                                { yylval = (int)strdup(yytext);return TAB_FERMANTE;}

										
"="	                                         { yylval = (int)strdup(yytext);return AFFECTATION;}

"&&"                                         { yylval = (int)strdup(yytext);return OPERATOR;  }
"<"                                          { yylval = (int)strdup(yytext);return OPERATOR; }
">"                                           { yylval = (int)strdup(yytext);return OPERATOR; }
"<="                                          { yylval = (int)strdup(yytext);return OPERATOR; }
">="                                           { yylval = (int)strdup(yytext);return OPERATOR; }
"+"                                          { yylval = (int)strdup(yytext);return OPERATOR; }
"-"                                          { yylval = (int)strdup(yytext);return OPERATOR;   }
"*"                                           { yylval = (int)strdup(yytext);return OPERATOR;  }
"!="										  { yylval = (int)strdup(yytext);return OPERATOR;}
"=="										   { yylval = (int)strdup(yytext);return OPERATOR;}
"/"										   { yylval = (int)strdup(yytext);return OPERATOR;}
"!"										    	 { yylval = (int)strdup(yytext);return NOT;}



{id}                                           { yylval = (int)strdup(yytext);return ID;  }
{nb}                                           { yylval = (int)strdup(yytext);return NUMBER;  }
{bool}                                         { yylval = (int)strdup(yytext);return BOOL; }



{COMMENT_LINE}         						{ yylval = (int)strdup(yytext);printf("commentaire line");  }
{COMMENT_LONG}        						 { yylval = (int)strdup(yytext);printf("commentaire long"); }  




{iderrone}                    {yylval = (int)strdup(yytext); fprintf(stderr," illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
{COMMENT_BLOC_ouvrant}          {yylval = (int)strdup(yytext); fprintf(stderr," comment ouvert \'%s\' on line :%d\n",yytext,yylineno);}
{comment_fermant}		{yylval = (int)strdup(yytext); fprintf(stderr," comment fermant \'%s\' on line :%d\n",yytext,yylineno);}	



%%


yywrap()
{
	return(1);
}
