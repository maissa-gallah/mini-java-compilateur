%{
	

#include <stdio.h>
#include <string.h>
#include <stdbool.h>	
#include "semantic.c"
 			
int yyerror(char const *msg);	
int yylex(void);
extern int line;

int nbr_args = 0;
int nbr_param = 0;

%}

%token PSVM
%token CLASS 
%token PUBLIC
%token STATIC
%token VOID
%token MAIN
%token EXTENDS
%token RETURN
%token IF
%token ELSE
%token WHILE
%token PRINT
%token LENGTH
%token THIS
%token NEW
%token POINT
%token POINT_VIRGULE
%token VIRGULE
%token BOOLEAN
%token INT
%token STRING

%token PAR_OUVRANTE
%token PAR_FERMANTE
%token ACO_OUVRANTE
%token ACO_FERMANTE
%token TAB_FERMANTE
%token TAB_OUVRANTE
										
%token AFFECTATION

%token OPERATOR  

%token ID 
%token NUMBER 
%token BOOL



%token NOT 




 

%start program

%%
                                                           
program			:  MainClass ClassDeclarationG;

ClassDeclarationG       :ClassDeclaration ClassDeclarationG                      
                        |epsilon;


ClassDeclaration    :CLASS ID EXTENDSIDG ACO_OUVRANTE VarDeclarationG MethodDeclarationG ACO_FERMANTE 
                        {verif_var_dec_bien_init_use()}
                        |error ID EXTENDSIDG ACO_OUVRANTE VarDeclarationG MethodDeclarationG ACO_FERMANTE          {yyerror (" erreur mot cle class errone dans la line : "); YYABORT}
                        |CLASS error  EXTENDSIDG ACO_OUVRANTE VarDeclarationG MethodDeclarationG ACO_FERMANTE          {yyerror (" erreur identifier errone dans la line : "); YYABORT}
                        |CLASS ID  EXTENDSIDG error VarDeclarationG MethodDeclarationG ACO_FERMANTE              {yyerror (" erreur acolade ouvarnte  manquant dans la line : "); YYABORT}
                        |CLASS ID  EXTENDSIDG ACO_OUVRANTE VarDeclarationG MethodDeclarationG error          {yyerror ("  erreur acolade FERMANT  manquant dans la line : "); YYABORT};
  
EXTENDSIDG		:EXTENDS ID
                        |epsilon
                        |error ID  {yyerror (" mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT}
                        |CLASS error  {yyerror ("erreur identifier errone dans la line :"); YYABORT}; 


VarDeclarationG		:VarDeclaration VarDeclarationG	
                        |epsilon;

MethodDeclarationG	:MethodDeclaration MethodDeclarationG	
                        |epsilon;

STATEMENTG		:STATEMENT STATEMENTG 
                        |epsilon;

VarDeclaration        :Type ID  POINT_VIRGULE
                        {
                                insert_declaration($2, "global", $1, 0, 0 , 0);
                        }
                        |Type error POINT_VIRGULE {yyerror ("erreur identifier errone dans la line :"); YYABORT} 
                        |Type ID  error  {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT};

VTIG                    :VTI VTIG
                        |epsilon;

VTI                     :VIRGULE Type ID
                        {
                                insert_declaration($3,"args","variable",0,0,0);
                                nbr_args++;
                        }
                        |error Type ID                  {yyerror ("VIRGULE manquant dans la line :"); YYABORT}     
                        |VIRGULE Type error                  {yyerror ("identifier errone dans la line :"); YYABORT}     ;

TIVTIG                  :Type ID VTIG
                        {
                                insert_declaration($2,"args","variable",0,0,0);
                                nbr_args++;
                        }
                        |epsilon;

MethodDeclaration	:PUBLIC Type ID PAR_OUVRANTE TIVTIG PAR_FERMANTE ACO_OUVRANTE VarDeclarationG STATEMENTG RETURN EXPRESSION POINT_VIRGULE ACO_FERMANTE   
                        {
                                insert_declaration($3,"global","methode",0,0,nbr_args);
                                nbr_args = 0;

                        }
                        |error Type ID PAR_OUVRANTE TIVTIG PAR_FERMANTE ACO_OUVRANTE VarDeclarationG STATEMENTG RETURN EXPRESSION POINT_VIRGULE ACO_FERMANTE    {yyerror ("mot clee class manquant ou errone dans la line :"); YYABORT}
                        |PUBLIC Type error PAR_OUVRANTE TIVTIG PAR_FERMANTE ACO_OUVRANTE VarDeclarationG STATEMENTG RETURN EXPRESSION POINT_VIRGULE ACO_FERMANTE      {yyerror ("erreur identifier errone dans la line :"); YYABORT} 
                        |PUBLIC Type ID error TIVTIG PAR_FERMANTE ACO_OUVRANTE VarDeclarationG STATEMENTG RETURN EXPRESSION POINT_VIRGULE ACO_FERMANTE      {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT} 
                        |PUBLIC Type ID PAR_OUVRANTE TIVTIG error ACO_OUVRANTE VarDeclarationG STATEMENTG RETURN EXPRESSION POINT_VIRGULE ACO_FERMANTE     {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT}
                        |PUBLIC Type ID PAR_OUVRANTE TIVTIG PAR_FERMANTE  error VarDeclarationG STATEMENTG RETURN EXPRESSION POINT_VIRGULE ACO_FERMANTE     {yyerror ("acolade ouvrant  manquant dans la line :"); YYABORT}
                        |PUBLIC Type ID PAR_OUVRANTE TIVTIG PAR_FERMANTE  ACO_OUVRANTE VarDeclarationG STATEMENTG error EXPRESSION POINT_VIRGULE ACO_FERMANTE     {yyerror ("mot clee return manquant ou errone dans la line :"); YYABORT}
                        |PUBLIC Type ID PAR_OUVRANTE TIVTIG PAR_FERMANTE  ACO_OUVRANTE VarDeclarationG STATEMENTG RETURN EXPRESSION error ACO_FERMANTE     {yyerror ("POINT_VIRGULE manquant  dans la line :"); YYABORT}
                        |PUBLIC Type ID PAR_OUVRANTE TIVTIG PAR_FERMANTE  ACO_OUVRANTE VarDeclarationG STATEMENTG RETURN EXPRESSION POINT_VIRGULE error     {yyerror ("acolade fermant  manquante dans la line :"); YYABORT};
                        



Type			:INT TAB_OUVRANTE TAB_FERMANTE	
			|INT error TAB_FERMANTE                 {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT} 
			|INT TAB_OUVRANTE error                 {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT} 
			|BOOLEAN		
			|INT
			|ID
                        |error                                  {yyerror ("erreur de type dans la line :"); YYABORT} 

               
MainClass		: CLASS ID ACO_OUVRANTE PSVM ARG ACO_OUVRANTE STATEMENT ACO_FERMANTE ACO_FERMANTE
                        |error ID ACO_OUVRANTE PSVM ARG ACO_OUVRANTE STATEMENT ACO_FERMANTE ACO_FERMANTE          {yyerror ("mot cle CLASS errone ou bien manquant on line : "); YYABORT}
			|CLASS error ACO_OUVRANTE PSVM ARG ACO_OUVRANTE STATEMENT ACO_FERMANTE ACO_FERMANTE       {yyerror (" erreur identifier errone dans la line : "); YYABORT} 
			|CLASS ID error PSVM ARG ACO_OUVRANTE STATEMENT ACO_FERMANTE ACO_FERMANTE         {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT} 
                        |CLASS ID ACO_OUVRANTE PSVM ARG error STATEMENT ACO_FERMANTE ACO_FERMANTE          {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT}
                        |CLASS ID ACO_OUVRANTE PSVM ARG ACO_OUVRANTE STATEMENT error ACO_FERMANTE          {yyerror ("acolade fermant  manquant dans la line:"); YYABORT}
                        |CLASS ID ACO_OUVRANTE PSVM ARG ACO_OUVRANTE STATEMENT ACO_FERMANTE error          {yyerror ("acolade fermant  manquant dans la line: "); YYABORT};


ARG			: PAR_OUVRANTE STRING TAB_OUVRANTE TAB_FERMANTE ID PAR_FERMANTE
                        |error STRING TAB_OUVRANTE TAB_FERMANTE ID PAR_FERMANTE          {yyerror (" parenthese ouvrante manquante dans la line: "); YYABORT}
                        |PAR_OUVRANTE error TAB_OUVRANTE TAB_FERMANTE ID PAR_FERMANTE          {yyerror (" erreur mot cle String errone dans la line:  "); YYABORT}
                        |PAR_OUVRANTE STRING error TAB_FERMANTE ID PAR_FERMANTE          {yyerror (" tabulation ouvrante manquante dans la line: "); YYABORT}
                        |PAR_OUVRANTE STRING TAB_OUVRANTE error ID PAR_FERMANTE          {yyerror (" tabulation fermante manquante dans la line: "); YYABORT}
                        |PAR_OUVRANTE STRING TAB_OUVRANTE TAB_FERMANTE error PAR_FERMANTE          {yyerror (" erreur identifier errone dans la line : "); YYABORT}
                        |PAR_OUVRANTE STRING TAB_OUVRANTE TAB_FERMANTE ID error          {yyerror (" parenthese  fermant manquant dans la line: "); YYABORT};




STATEMENT		:STATEMENTG              
                        |IF PAR_OUVRANTE EXPRESSION PAR_FERMANTE  ACO_OUVRANTE STATEMENT ACO_FERMANTE  ELSE ACO_OUVRANTE STATEMENT ACO_FERMANTE
                        |IF PAR_OUVRANTE EXPRESSION PAR_FERMANTE  ACO_OUVRANTE STATEMENT ACO_FERMANTE  ELSE  STATEMENT 
                        |IF PAR_OUVRANTE EXPRESSION PAR_FERMANTE   STATEMENT ELSE ACO_OUVRANTE STATEMENT ACO_FERMANTE
                        |error PAR_OUVRANTE EXPRESSION PAR_FERMANTE ACO_OUVRANTE STATEMENT ACO_FERMANTE ELSE ACO_OUVRANTE STATEMENT ACO_FERMANTE            {yyerror ("mot cle IF errone ou bien manquant on line : "); YYABORT}
                        |IF error EXPRESSION PAR_FERMANTE ACO_OUVRANTE STATEMENT ACO_FERMANTE ELSE ACO_OUVRANTE STATEMENT ACO_FERMANTE                       {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT}
                        |IF PAR_OUVRANTE EXPRESSION error ACO_OUVRANTE STATEMENT ACO_FERMANTE  ELSE ACO_OUVRANTE STATEMENT ACO_FERMANTE                       {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT}
                        |IF PAR_OUVRANTE EXPRESSION PAR_FERMANTE ACO_OUVRANTE STATEMENT ACO_FERMANTE error ACO_OUVRANTE STATEMENT ACO_FERMANTE                {yyerror ("mot cle ELSE errone ou bien manquant on line : "); YYABORT}

                        |WHILE PAR_OUVRANTE EXPRESSION PAR_FERMANTE ACO_OUVRANTE STATEMENT ACO_FERMANTE 
                        |WHILE PAR_OUVRANTE EXPRESSION PAR_FERMANTE  STATEMENT 
                        |error PAR_OUVRANTE EXPRESSION PAR_FERMANTE ACO_OUVRANTE STATEMENT ACO_FERMANTE                          {yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT}
                        |WHILE error EXPRESSION PAR_FERMANTE ACO_OUVRANTE STATEMENT ACO_FERMANTE                                  {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT}
                        |WHILE PAR_OUVRANTE EXPRESSION error ACO_OUVRANTE STATEMENT ACO_FERMANTE                                  {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT}

                        |PRINT PAR_OUVRANTE EXPRESSION PAR_FERMANTE  POINT_VIRGULE
                        |error PAR_OUVRANTE EXPRESSION PAR_FERMANTE  POINT_VIRGULE             {yyerror ("system.out.println errone ou bien manquant on line : "); YYABORT}
                        |PRINT error EXPRESSION PAR_FERMANTE  POINT_VIRGULE                    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT}
                        |PRINT PAR_OUVRANTE EXPRESSION error  POINT_VIRGULE                    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT}
                        |PRINT PAR_OUVRANTE EXPRESSION PAR_FERMANTE  error                     {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT}

                        |ID AFFECTATION EXPRESSION POINT_VIRGULE                                {printf("hiii");init_var($1)}
                        |error AFFECTATION EXPRESSION POINT_VIRGULE                                     {yyerror ("erreur identifier errone dans la line :"); YYABORT};
                        |ID error EXPRESSION POINT_VIRGULE                                              {yyerror ("AFFECTATION errone dans la line :"); YYABORT};
                        |ID AFFECTATION EXPRESSION error                                                {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT}

                        |ID TAB_OUVRANTE EXPRESSION TAB_FERMANTE AFFECTATION EXPRESSION POINT_VIRGULE
                        |error TAB_OUVRANTE EXPRESSION TAB_FERMANTE AFFECTATION EXPRESSION POINT_VIRGULE         {yyerror ("erreur identifier errone dans la line :"); YYABORT}
                        |ID error EXPRESSION TAB_FERMANTE AFFECTATION EXPRESSION POINT_VIRGULE                   {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT}
                        |ID TAB_OUVRANTE EXPRESSION error AFFECTATION EXPRESSION POINT_VIRGULE                    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT}
                        |ID TAB_OUVRANTE EXPRESSION TAB_FERMANTE error EXPRESSION POINT_VIRGULE                  {yyerror ("AFFECTATION errone dans la line :"); YYABORT}
                        |ID TAB_OUVRANTE EXPRESSION TAB_FERMANTE AFFECTATION EXPRESSION error                     {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT};


EXPRESSION               :EXPRESSION OPERATOR EXPRESSION                                                           
                        {       printf("erreur de calcul les val ne sont pas initalise");
                                use_var($1); 
                                use_var($3);
                        }
                        |EXPRESSION error EXPRESSION                                                              {yyerror ("operateur manquant dans la line :"); YYABORT}

                        |EXPRESSION TAB_OUVRANTE EXPRESSION TAB_FERMANTE
                        |EXPRESSION error EXPRESSION TAB_FERMANTE                                               {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT}
                        |EXPRESSION TAB_OUVRANTE EXPRESSION error                                               {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT}

                        |EXPRESSION POINT LENGTH 
                        |EXPRESSION error LENGTH                                                                {yyerror ("POINT manquant dans la line :"); YYABORT}
                        |EXPRESSION POINT error                                                                 {yyerror ("mot cle LENGTH manquant dans la line :"); YYABORT}

                        |EXPRESSION POINT ID PAR_OUVRANTE EVEXPRESSION PAR_FERMANTE
                        {
                                printf("verif args %d", nbr_param);
                                verif_args($3,nbr_param);
                                nbr_param = 0;
                        }
                
                        |EXPRESSION error ID PAR_OUVRANTE EVEXPRESSION PAR_FERMANTE                             {yyerror ("POINT manquant dans la line :"); YYABORT}
                        |EXPRESSION POINT error PAR_OUVRANTE EVEXPRESSION PAR_FERMANTE                          {yyerror ("erreur identifier errone dans la line :"); YYABORT}
                        |EXPRESSION POINT ID error EVEXPRESSION PAR_FERMANTE                                    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT}
                        |EXPRESSION POINT ID PAR_OUVRANTE EVEXPRESSION error                                    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT}


                        |NUMBER
                        |BOOL
                        |ID
                        |THIS
                        |error                                                                                  {yyerror ("erreur dans la line :"); YYABORT}
                        
                        |NEW INT ACO_OUVRANTE EXPRESSION ACO_FERMANTE
                        |error INT ACO_OUVRANTE EXPRESSION ACO_FERMANTE                                         {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT}
                        |NEW error ACO_OUVRANTE EXPRESSION ACO_FERMANTE                                         {yyerror (" mot cle int manquant ou bien errone dans la line : "); YYABORT}
                        |NEW INT error EXPRESSION ACO_FERMANTE                                                  {yyerror (" erreur acolade ouvarnte  manquante dans la line : "); YYABORT}
                        |NEW INT ACO_OUVRANTE EXPRESSION error                                                  {yyerror (" erreur acolade fermante  manquante dans la line : "); YYABORT}

                        |NEW ID PAR_OUVRANTE PAR_FERMANTE
                        |error ID PAR_OUVRANTE PAR_FERMANTE                                                     {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT}
                        |NEW error PAR_OUVRANTE PAR_FERMANTE                                                    {yyerror (" erreur identifier errone dans la line : "); YYABORT}
                        |NEW ID error PAR_FERMANTE                                                              {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT} 
                        |NEW ID PAR_OUVRANTE error                                                              {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT} 

                        |NOT EXPRESSION
                        |error EXPRESSION                                                                       {yyerror ("erreur dans la line :"); YYABORT} 

                        |PAR_OUVRANTE EXPRESSION PAR_FERMANTE
                        |error EXPRESSION PAR_FERMANTE                                                          {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT}  
                        |PAR_OUVRANTE EXPRESSION error                                                          {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT} ;


EVEXPRESSION		:EXPRESSION VEXPRESSION
                        {
                                nbr_param++;
                        }
			|epsilon;

VEXPRESSION		:VIRGULE EXPRESSION VEXPRESSION
                        {
                                nbr_param++;
                        }
                      
                        |error EXPRESSION VEXPRESSION                                                                      {yyerror ("erreur VIRGULE manquante dans la line :"); YYABORT}
			|epsilon;


epsilon			:







%% 

int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

main()
{
 yyparse();
 
}