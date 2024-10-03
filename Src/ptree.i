#
# ptree.i -- interface for the ptree module
#

struct tree :        # Basic node             
  char [*] name;     # Node name              
  char [*] def;      # Definition             
  char [*] type;     # Basic type             
  char [*] structure;# Struct  flag           
  int      line;     # Line no                
  char [*] file;     # Input file name        
  char [*] tempr;    # Temp real value        
  char [*] tempi;    # Temp imaginary value     
  char [*] lval;     # Lval field             
  char [*] array;    # Array field            
  char [*] paral;    # Parallel field         
  char [*] global;   # global field         
  char [*] forw;     # forward field         
  char [*] ref;      # Ref  field             
  int rank;          # Array rank field        
  int simple;        # Simple field           
  int topexpr;       # Top level expr field   
  char [*] descr;    # Descriptor field       
  struct tree child; # Child node            
  struct tree sister; # Sister node           
end 
  
#
# PtreeInit
int PtreeInit():end 
 
#
# PtreeRmtree -- remove a tree                            
#
int PtreeRmtree(struct tree p):end 
   
 
int PtreeRmnode(struct tree p):end 
   
#
 
struct tree PtreeMknode( char [*] name, char [*] def ):end 
   
#
 
int PtreeAddchild(struct tree parent, struct tree child):end 
   
#
 
int PtreeAddsister(struct tree sister, struct tree newnode):end 
 
#
 
struct tree PtreeMvsister(struct tree p):end 
 
#
 
struct tree PtreeMvchild(struct tree p):end 
   
#
 
int PtreeSetname(struct tree p, char [*] name):end 
 
#
 
char  [*] PtreeGetname(struct tree p):end 
  
#
 
int PtreeSetdef(struct tree p, char [*] def):end 
 
#
 
char [*] PtreeGetdef(struct tree p):end 
   
#
 
int PtreeSetype(struct tree p, char [*] type):end 
 
#
  
char [*] PtreeGetype(struct tree p):end 
  
#
 
int PtreeSetstruct(struct tree p, char [*] structure):end 
 
#
 
char [*] PtreeGetstruct(struct tree p):end 
     
#
 
int PtreeSetempr(struct tree p, char [*] tempr):end 
 
#
 
char  [*] PtreeGetempr(struct tree p):end 
  
#
 
int PtreeSetempi(struct tree p, char [*] tempi):end 
 
#
 
char  [*] PtreeGetempi(struct tree p):end 
   
#
 
int PtreeGetline(struct tree p):end 
     
#
 
int PtreeSetline(struct tree p, int line ):end 
     
#
 
char [*] PtreeGetfile(struct tree p):end 

int PtreeSetfile(struct tree p, char [*] file):end 
     
#
 
int PtreeSetrank(struct tree p, int rank):end 
     
#
 
int PtreeGetrank(struct tree p):end 
     
#
 
int PtreeSetlval(struct tree p, char [*] lval):end 
 
#
 
char  [*] PtreeGetlval(struct tree p):end 
  
#
#
 
int PtreeSetarray(struct tree p, char [*] array):end 
     
#
 
char [*] PtreeGetarray(struct tree p):end 
     
#
 
int PtreeSetparallel(struct tree p, char [*] paral):end 
     
#
 
char [*] PtreeGetparallel(struct tree p):end 
     
#
 
int PtreeSetref(struct tree p, char [*] ref):end 
     
#
 
char [*] PtreeGetref(struct tree p):end 
     
#
 
int PtreeSetdescr(struct tree p, char [*] descr):end 
     
#
 
char [*] PtreeGetdescr(struct tree p):end 
     
#
 
int PtreeSetglobal(struct tree p, char [*] descr):end 
     
#
 
char [*] PtreeGetglobal(struct tree p):end 
     
#
 
int PtreeSetopexpr(struct tree p, int topexpr):end 
     
#
 
int PtreeGetopexpr(struct tree p):end 
     
#
 
int PtreeSetsimple(struct tree p, int simple):end 
     
#
 
int PtreeGetsimple(struct tree p):end 
     
#
int PtreeSetforw(struct tree p, char [*] forw ):end 
     
#
 
char [*] PtreeGetforw(struct tree p):end 
     
 
int PtreePrtree(struct tree p, int level):end 
 
#
 
