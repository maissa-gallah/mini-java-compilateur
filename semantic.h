#ifndef HEADER_FILE
#define HEADER_FILE

const int MAX = 100; 	// Size Max of Symbol table

extern int line;

  
typedef struct node {
    char * identifier;
	char * scope; 
	char * type;
	int test_init;
	int test_use;
	int nbr_args;
    struct node* next;
   
} Node;
  
int search_index(); 

int insert( char * id,  char * scope,  char * type, int test_init , int test_use, int nbr_args);
  
Node * find( char * id);
  
int deleteRecord( char * id);
  
int modify( char * id,  char * scope,  char * type, int test_init , int test_use, int nbr_args);

void insert_declaration( char * id,  char * scope,  char * type, int test_init , int test_use, int nbr_args);
    
void verif_var_dec_bien_init_use();
    
void init_var( char * id);
    
void use_var( char * id);

void print(Node * node);


#endif
