#include <iostream>

using namespace std;
  
const int MAX = 100; 	// Size Max of Symbol table
  
class Node {

public:
	string identifier;
	string scope; 
	string type;
	int test_init;
	int test_use;
    int lineNo;
    Node* next;
    
    Node()
    {
        next = NULL;
    }
  
    Node(string key, string value, string type, int lineNo, int test_init , int test_use)
    {
        this->identifier = key;
        this->scope = value;
        this->type = type;
        this->lineNo = lineNo;
        this->test_init = test_init;
        this->test_use = test_use;
        next = NULL;
    }
  
    void print()
    {
        cout << identifier << "     " << type << "      " << scope << "     " << lineNo << "        " << test_init << "     "<< test_use << endl;
    }
    friend class SymbolTable;
};
  
class SymbolTable {
  
public:
	
	Node* head[MAX];
	
    SymbolTable()
    {
        for (int i = 0; i < MAX; i++)
            head[i] = NULL;
    }
  
    int hashf(string id); // hash function
    bool insert(string id, string scope, string Type, int lineno, int test_init , int test_use);
  
    Node * find(string id);
  
    bool deleteRecord(string id);
  
    bool modify(string id, string scope, string Type, int lineno, int test_init , int test_use);

    void insert_declaration(string id, string scope, string Type, int lineno, int test_init , int test_use);
    
    void verif_var_dec_bien_init_use();
    
    void init_var(string id);
    
    void use_var(string id);

    
};



//------------------------------------------------------- Function to insert an identifier
bool SymbolTable::insert(string id, string scope,
                         string Type, int lineno, int test_init , int test_use)
{
    int index = hashf(id);
    Node* p = new Node(id, scope, Type, lineno, test_init , test_use);
  
    if (head[index] == NULL) {
        head[index] = p;
        cout << "\n" << id << " inserted" <<endl;
  
        return true;
    }
  
    else {
        Node* start = head[index];
        while (start->next != NULL)
            start = start->next;
  
        start->next = p;
        cout << "\n"  << id << " inserted" <<endl;
  
        return true;
    }
  
    return false;
}

  
//------------------------------------------------------- Function to modify an identifier
bool SymbolTable::modify(string id, string scope, string type, int lineNo, int test_init ,int test_use)
{
    int index = hashf(id);
    Node* start = head[index];
  
    if (start == NULL)
        return "-1";
  
    while (start != NULL) {
        if (start->identifier == id) {
            start->scope = scope;
            start->type = type;
            start->lineNo = lineNo;
            start->test_init = test_init;
            start->test_use = test_use;
            return true;
        }
        start = start->next;
    }
  
    return false; // id not found
}
  
//------------------------------------------------------- Function to delete an identifier
bool SymbolTable::deleteRecord(string id)
{
    int index = hashf(id);
    Node* tmp = head[index];
    Node* par = head[index];
  
    // no identifier is present at that index
    if (tmp == NULL) {
        return false;
    }
    // only one identifier is present
    if (tmp->identifier == id && tmp->next == NULL) {
        tmp->next = NULL;
        delete tmp;
        return true;
    }
  
    while (tmp->identifier != id && tmp->next != NULL) {
        par = tmp;
        tmp = tmp->next;
    }
    if (tmp->identifier == id && tmp->next != NULL) {
        par->next = tmp->next;
        tmp->next = NULL;
        delete tmp;
        return true;
    }
  
    // delete at the end
    else {
        par->next = NULL;
        tmp->next = NULL;
        delete tmp;
        return true;
    }
    return false;
}
  
//------------------------------------------------------- Function to find an identifier
Node * SymbolTable::find(string id)
{
    int index = hashf(id);
    Node* start = head[index];
  
    if (start == NULL)
        return NULL;
  
    while (start != NULL) {
  
        if (start->identifier == id) {
            return start;
        }
  
        start = start->next;
    }
  
    return NULL; // not found
}
  

  
int SymbolTable::hashf(string id)
{
    int asciiSum = 0;
  
    for (int i = 0; i < id.length(); i++) {
        asciiSum = asciiSum + id[i];
    }
  
    return (asciiSum % 100);
} 

//------------------------------------------------------- V?rifier la red?finition des variables d?j? d?clar?es 

void SymbolTable::insert_declaration(string id, string scope, string type, int lineno, int test_init , int test_use){
    Node * x = find(id);
    if (x != NULL){
    	cout << "ERROR: Variable " << x->identifier<<" deja declaree a la ligne #" << x->lineNo <<" ." <<endl;
	}
    insert(id, scope, type, lineno, test_init , test_use);

}

//------------------------------------------------------- V?rifier qu?une variable d?clar?e est bien utilis?e => parcours table

void SymbolTable::verif_var_dec_bien_init_use(){
    for (int i = 0; i < MAX; i++){
    	Node * current = head[i] ; 
    	if (current != NULL ){ 		// case non vide
			if(current->test_init == 0 ) // car non initialis? 
				cout << "WARNING: ? La Variable "<< current->identifier <<" declaree mais non initialisee ? la ligne #" << current->lineNo <<" ." <<endl;
				
			else if(current->test_use == 0) // car non utilis?e 
				cout << "WARNING: ? La Variable "<< current->identifier <<" declaree mais non utilisee ? la ligne #" << current->lineNo <<" ." <<endl;
		}
	}  
}
//------------------------------------------------------- Function to  use 

void  SymbolTable:: use_var(string id)
{

    Node* x=find(id);
    if (x!=NULL )
     if ( x->test_init!=0)
           {
               modify(x->identifier , x->scope, x->type, x->lineNo, x->test_init ,1);
            x->print() ;
                }
        else 
            {
            cout << "\nvariable utilise mais pas initialiser .\n";

        }
    else
        {
        cout << "\nvariable non decalree .\n";
       }


}
//------------------------------------------------------- Function to  init var


void  SymbolTable:: init_var(string id)
{

    Node* x=find(id);
    if (x!=NULL )
        { 
        modify(x->identifier , x->scope, x->type, x->lineNo, 1 ,x->test_use);
        }
    else
        {
        cout << "\nvariable non decalree .\n";
       }


}
  
// Driver code
int main()
{
    SymbolTable st;
    
  	st.insert_declaration("x", "local", "string",4,0,0);
  	st.insert_declaration("y", "local", "int",5,0,0);
  	st.insert_declaration("z", "global", "bool",4,0,0);
  	
  	st.insert_declaration("x", "local", "string",3,0,0);
  	
  	st.verif_var_dec_bien_init_use();
  	
  	st.init_var("x");
  	st.use_var("x");
  	
  	cout << "**** SYMBOL_TABLE ****\n";
  	cout << "id     scope       type        lineNo    test_init    test_use" << endl;
  	
  	for (int i = 0; i < MAX; i++){
    	Node * current = st.head[i] ; 
    	if (current != NULL ){ 		// case non vide
			current->print();
		}
	}  
    return 0;
}
