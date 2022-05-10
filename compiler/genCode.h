


extern int line;

  
typedef struct  {
    char * code_op;
	int operande; 
	char * nomFct;  
} ENTRE_CODE;
  
int search_index_code(); 

int insert_code(  char * code_op,int operande, char * nomFct);
int affiche();
void fin_while();
  



