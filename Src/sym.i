#
 
struct symbol : # basic table entry  
      char [*] name;               # Name                         
      char [*] type;               # Basic type                   
      char [*] func;               # Flag for function            
      char [*] array;              # Flag for array               
      int  rank;                   # Rank of array                
      char [*] structure;          # Flag for structure           
      char [*] ident;              # Flag for identifier          
      char [*] lval;               # Flag for left value          
      char [*] descr;              # Descr field                  
      char [*] global;             # Global field  
      char [*] ref;                # Flag for  reference          
      char [*] module;             # Module name
      int  emit;                   # The emit flag                
      struct symbol tbl;            # next table                   
      struct symbol next;           # next entry in chain          
      struct symbol last;           # last entry in chain          
end 
  
const NTBL=400;

#
 
struct symbol SymGetetp():end 
 
#
 
struct symbol SymSetetp( struct symbol etp):end 
 
#
 
struct symbol SymGetltp():end 
 
#
 
struct symbol SymSetltp( struct symbol etp):end 
 
#
 
struct symbol SymGetstp():end 
 
 
struct symbol SymSetstp( struct symbol etp):end 
 
#
 
struct symbol SymMktable():end 
 
#
 
struct symbol SymSetable(struct symbol np, struct symbol tp):end 
    
#
 
struct symbol SymGetable(struct symbol np):end 
  
#
 
struct symbol SymMkname(char [*] name, struct symbol tp):end 
 
#
 
struct symbol SymRmname(char [*] name, struct symbol tp):end 
     
#
 
int SymRmtable(struct symbol p):end 
 
#
 
int SymRmsubtables(struct symbol p):end 
 
#
 
char [*] SymGetname(struct symbol np):end 
    
#
 
struct symbol SymLookup(char [*] s, struct symbol tp):end 
    
#
 
int  SymSetype(struct symbol np, char [*] type):end 
   
#
 
char [*] SymGetype(struct symbol np):end 
 
#
 
int SymSetident(struct symbol np, char [*] ident):end 
  
#
 
char [*] SymGetident(struct symbol np):end 
 
#
 
int SymSetlval(struct symbol np, char [*] lval):end 
 
#
 
char [*] SymGetlval(struct symbol np):end 
 
#
 
int  SymSetref(struct symbol np, char [*] ref):end 
 
#
 
char [*] SymGetref(struct symbol np):end 
 
#
 
int SymSetfunc(struct symbol np, char [*] func):end 
 
#
 
char [*] SymGetfunc(struct symbol np):end 
 
#
 
int SymSetarray(struct symbol np, char [*] array):end 
    
#
 
char [*] SymGetarray(struct symbol np):end 
 
#
 
int SymSetrank(struct symbol np, int rank):end 
 
#
 
int SymGetrank(struct symbol np):end 
  
#
 
int SymSetemit(struct symbol np, int emit):end 
     
#
 
int SymGetemit(struct symbol np):end 
  
#
 
int SymSetstruct(struct symbol np, char [*] structure):end 
 
#
 
char [*] SymGetstruct(struct symbol np):end 
 
#
 
int SymSetdescr(struct symbol np, char [*] descr):end 
 
#
 
char [*] SymGetdescr(struct symbol np):end 
 
#
 
int SymSetglobal(struct symbol np, char [*] descr):end 
 
int SymSetmodule(struct symbol np, char [*] descr):end 
#
char [*] SymGetmodule(struct symbol np):end 
 
char [*] SymGetglobal(struct symbol np):end 
 
#
 
struct symbol SymMvnext(struct symbol np):end 
 
#
 
struct symbol SymLook(char [*] name):end 
  
#
 
int SymPrsym(int fp, struct symbol p, int level):end 
int SymExport(int fp, struct symbol p, int level):end 
 
#
 
int SymCpytble(struct symbol tp, struct symbol up):end 
int SymCpytbler(struct symbol tp, struct symbol up):end 
struct symbol SymAddtble(struct symbol tp, struct symbol sp) : end
 
#

int SymReadsym(int fp, struct symbol rtbl, char[*] module):end 
