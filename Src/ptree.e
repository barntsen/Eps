# Parse tree managment

# Each node in the parse tree has the
# structure shown below
# 
#  parent -- sister 
#    |
#  child
#
# This is the same as a traditional tree
# where each node has two subnodes.
# However drawing the tree as above
# has the advantage that it can be easily mapped to a list
# where the indentation gives the structure.
#
# parent sister
#   child
#
# The sister node is considered to be
# at the same level as the parent node,
# while the child node is one level down
# as shown by the indentation in the notation above.
# An example an expression 
# 
# a = b+c
# 
# maps to the tree
#
#  = 
#  | 
#  b -- c
#
# with list representation
#
#  =
#   b
#   c
#
# The list representation is useful for
# printing the tree.

import libe   # Library interface  
import err    # Error interface    

# Parse tree node datastructure
#
struct tree :        # Basic node             
  char [*] name      # Node name              
  char [*] defn      # Definition             
  char [*] type      # Basic type             
  char [*] structure # Struct  flag           
  int      line      # Line no                
  char [*] file      # Input file name        
  char [*] tempr     # Temp real value        
  char [*] tempi     # Temp imaginary value     
  char [*] lval      # Lval field             
  char [*] array     # Array field            
  char [*] paral     # Parallel field         
  char [*] global    # global field         
  char [*] forw      # forw field         
  char [*] ref       # Ref  field             
  int rank           # Array rank field        
  int simple         # Simple field           
  int topexpr        # Top level expr field   
  char [*] descr     # Descriptor field       
  struct tree child  # Child node            
  struct tree sister  # Sister node           
    
  
def int PtreeInit() :
   
  # PtreeInit initialize the tree module.
  #
  # Parameters: None
  #
  # Returns: OK
  #

  return(OK) 

    
 
def int PtreeRmnode(struct tree p) : 

  # PtreeRmnode removes a node.                            
  #
  # Parameters: 
  #   p : Ptree tree node
  #
  # Returns: OK
  #
  # PtreeRmnode removes a single node.
  #

  if(p == NULL):
    return (OK) 
     
  delete(p.name) 
  delete(p.defn) 
  delete(p.type) 
  delete(p.structure) 
  delete(p.tempr) 
  delete(p.tempi) 
  delete(p.lval) 
  delete(p.array) 
  delete(p.ref) 
  delete(p.descr) 
  delete(p) 
  return(OK) 
     
                      
def int PtreeRmtree(struct tree p) : 
  
  # PtreeRmtree removes a tree.                            
  #
  # Parameters: 
  #   p : Ptree tree node
  #
  # Returns: OK
  #
  # PtreeRmtree recursively removes
  # all nodes in a tree starting at node p.
  #

  if(p != NULL):
    PtreeRmtree(p.child) 
    PtreeRmtree(p.sister) 
    PtreeRmnode(p) 

  return(OK) 
                      
def struct tree PtreeMknode( char [*] name, char [*] defn ) :  

  # PtreeMknodes make a new parse tree node.  
  #
  # Parameters: 
  #   name : Name of node (name field)
  #   defn  : Definition of node (defn field)
  #
  # Returns: 
  #   parse tree node
  #
  # PtreeMknode creates a new node
  # and sets the name and defn fields.
  #

  struct tree p  

  p = new(struct tree) 
  p.defn = LibeStrsave(defn) 
  p.name = LibeStrsave(name) 
  p.type =  LibeStrsave("void")     
  p.structure = LibeStrsave("void")  
  p.line =  0 
  p.file =  LibeStrsave("void") 
  p.tempr = LibeStrsave("void")          
  p.tempi = LibeStrsave("void")       
  p.lval =  LibeStrsave("void")        
  p.array = LibeStrsave("void")       
  p.paral = LibeStrsave("void")       
  p.ref =   LibeStrsave("void")         
  p.descr = LibeStrsave("void")   
  p.global = LibeStrsave("void")   
  p.forw = LibeStrsave("void")   
  p.rank = 0 
  p.simple = EMPTY 
  p.child = NULL 
  p.sister = NULL 
  return (p) 
 
def int PtreeAddchild(struct tree parent, struct tree child): 

  # PtreeAddchild adds a child node to a parent node.  
  #
  # Parameters: 
  #   parent: The parent node
  #   child : The child node
  #
  # Returns: OK 
  #
  # PtreeMknode creates a new node
  # and sets the name and defn fields.
  #

  struct tree p, prev  

  if((p = parent.child) == NULL):
    parent.child = child 
    return (OK) 

  prev = parent.child 
  while ((p = p.sister) != NULL):
    prev = p            
 
  prev.sister = child 
  return(OK) 
    
 
def int PtreeAddsister(struct tree sister, struct tree newnode) :

  # PtreeAddsister adds a sister node
  #
  # Parameters: 
  #   sister   : sister node
  #   newnode  : node to be added 
  #
  # Returns: OK
  #   
  # If the sister node already exists PtreeAddsister
  # moves until the last sister node
  # is found and the new node is added.

  struct tree p, prev  
       
  p = sister 
  prev = p 
  while ((p = p.sister) != NULL):
    prev = p            
      
 
  prev.sister = newnode 
  return(OK) 
    
 
def struct tree PtreeMvsister(struct tree p) :
   
  # PtreeMvsister moves to the sister node.                            
  #
  # Parameters: 
  #   p   : tree node
  #
  # Returns: 
  #  A sister node 
  #   

  return(p.sister) 

    
                      
def struct tree PtreeMvchild(struct tree p):  
   
  # PtreeMvchild moves to the child node.                            
  #
  # Parameters: 
  #   p   : tree node
  #
  # Returns: 
  #  A child node 
  #   

  return(p.child) 

    

def char [*] PtreeSetfield(char [*] field, char [*] value) :    

  #PtreeSetfield sets a field.
  #
  # Parameters: 
  #   field     : field
  #   value     : contents of the field
  #
  # Returns: 
  #   contents of field
  #

  char [*] t 

  t=field 
  field=LibeStrsave(value) 
  delete(t) 
  return(field) 

    
                      
def int PtreeSetname(struct tree p, char [*] name) :

  # PtreeSetname sets the "name" field.
  #
  # Parameters: 
  #   p    : tree node
  #   name : node name
  #
  # Returns: OK 
  #   

  if((name != NULL) && (p != NULL)):
    delete(p.name) 
    p.name=LibeStrsave(name) 
     
  return(OK) 

    
   
def char  [*] PtreeGetname(struct tree p): 

  # PtreeGetname gets the name of the node.
  # Parameters: 
  #   p    : tree node
  #
  # Returns: 
  #   node name
  #   

  return(p.name) 

    
   
def int PtreeSetdef(struct tree p, char [*] defn) :
   
  # PtreeSetdef sets the definition of the node.
  #
  # Parameters: 
  #   p    : tree node
  #   defn  : defn field
  #
  # Returns: OK 
  #   
 
  if((defn != NULL) && (p != NULL)):
    delete(p.defn) 
    p.defn=LibeStrsave(defn) 
     
  return(OK) 
    
   
def char [*] PtreeGetdef(struct tree p) : 

  # PtreeGetdef gets the definition of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: 
  #  definition field
  #   

  return(p.defn) 

    
   
def int PtreeSetype(struct tree p, char [*] type) :
   
  # PtreeSetype sets the type of the node.
  #
  # Parameters: 
  #   p    : tree node
  #   type : type field
  #
  # Returns: OK 
  #   
 
  if((type != NULL) && (p != NULL)):
    delete(p.type) 
    p.type=LibeStrsave(type) 
     
  return(OK) 
    
   
def char [*] PtreeGetype(struct tree p) :
   
  # PtreeGetype gets the type of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: 
  #  type field
  #   

  return(p.type) 

    
   
def int PtreeSetstruct(struct tree p, char [*] structure) :

  # PtreeSetstructure sets the structure field of the node.  
  #
  # Parameters: 
  #   p         : tree node
  #   structure : structure field
  #
  # Returns: OK 
  #

  if((structure != NULL) && (p != NULL)):
    delete(p.structure) 
    p.structure=LibeStrsave(structure) 
     
  return(OK) 

    
   
def char [*] PtreeGetstruct(struct tree p) :    

  #
  #PtreeGetstruct gets the structure field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: 
  #  structure field
  #   

  return(p.structure) 

    
   
def int PtreeSetempr(struct tree p, char [*] tempr) :

  # PtreeSetempr sets the real temporary of the node
  #
  # Parameters: 
  #   p     : tree node
  #   tempr : tempr field
  #
  # Returns: OK 
  #
 
  if((tempr != NULL) && (p != NULL)):
    delete(p.tempr) 
    p.tempr=LibeStrsave(tempr) 
     
  return(OK) 

    
   
def char  [*] PtreeGetempr(struct tree p) : 

  # PtreeGetempr gets the real temporary of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: tempr field
  #

  return(p.tempr) 
    
   
def int PtreeSetempi(struct tree p, char [*] tempi) :

  # PtreeSetempi  sets the imaginary temporary of the node
  #
  # Parameters: 
  #   p     : tree node
  #   tempi : tempi field 
  #
  # Returns: OK 
  #

  if((tempi != NULL) && (p != NULL)):
    delete(p.tempi) 
    p.tempi=LibeStrsave(tempi) 
     
  return(OK) 
    
   
def char  [*] PtreeGetempi(struct tree p) :  

  # PtreeGetempi gets the imaginary temporary of the node
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: tempi field
  #

   return(p.tempi) 

    
   
def int PtreeGetline(struct tree p):    

  # PtreeGetline gets the line no of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: line field
  #

  return(p.line) 

    
   
def int PtreeSetline(struct tree p, int line):    

  #PtreeSetline sets the line no of the node.
  #
  # Parameters: 
  #   p    : tree node
  #   line : line field
  #
  # Returns: OK 
  #
 
  p.line=line 
  return(OK)  
    
   
def char [*] PtreeGetfile(struct tree p) :    

  # PtreeGetfile gets the input file name of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: file field.
  #
  
  return(p.file) 
    

def int PtreeSetfile(struct tree p, char [*] file) :   
  
  # PtreeSetfile sets the input file name of the node.
  # 
  # Parameters :
  #   p    : Tree node
  #   file : File name 
  #
  # Returns : OK

  if((file != NULL) && (p != NULL)): 
    delete(p.file) 
    p.file=LibeStrsave(file) 
     
  return(OK) 

    
   
def int PtreeSetrank(struct tree p, int rank) :   

  # PtreeSetrank  sets the rank field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #   rank : rank field
  #
  # Returns: OK 
  #
 
  p.rank = rank 
  return(OK) 

    
   
def int PtreeGetrank(struct tree p) :    

  # PtreeGetrank gets the rank field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: rank field.
  #

  return(p.rank) 

    
   
def int PtreeSetlval(struct tree p, char [*] lval) :
  
  # PtreeSetlval sets the left value field
  #
  # Parameters: 
  #   p    : tree node
  #   lval : lval field
  #
  # Returns: OK 
  #

  if((lval != NULL) && (p != NULL)):
    delete(p.lval) 
    p.lval=LibeStrsave(lval) 
     
  return(OK) 

    
 
def char  [*] PtreeGetlval(struct tree p) :

  # PtreeGetlval gets the lval field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: lval field.
  #

  return(p.lval) 

    
   
def int PtreeSetarray(struct tree p, char [*] array) :   

  # PtreeSetarray sets the array field.
  #
  # Parameters: 
  #   p     : tree node
  #   array : array field
  #
  # Returns: OK 
  #

  if((array != NULL) && (p != NULL)):
    delete(p.array) 
    p.array=LibeStrsave(array) 
     
  return(OK) 
    
   
def char [*] PtreeGetarray(struct tree p) :   

  # PtreeGetarray gets the array field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: array field.
  #

  return(p.array) 

    
   
def int PtreeSetparallel(struct tree p, char [*] paral) :    

  # PtreeSetparallel sets the parallel field.
  #
  # Parameters: 
  #   p     : tree node
  #   array : paral field
  #
  # Returns: OK 
  #
 
  if((paral != NULL) && (p != NULL)):
    delete(p.paral) 
    p.paral=LibeStrsave(paral) 
     
  return(OK) 

    
   
def char [*] PtreeGetparallel(struct tree p) :    

  #PtreeGetparallel gets the parallel field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: paral field.
  #

  return(p.paral) 

    
   
def int PtreeSetref(struct tree p, char [*] ref) :   

  # PtreeSetref sets the ref field.
  #
  # Parameters: 
  #   p     : tree node
  #   ref   : ref field
  #
  # Returns: OK 
  #

  if((ref != NULL) && (p != NULL)):
    delete(p.ref) 
    p.ref=LibeStrsave(ref) 
     
  return(OK) 
    
   
def char [*] PtreeGetref(struct tree p) :    

  # PtreeGetref gets the ref field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: ref field.
  #
 
  return(p.ref) 

    
   
def int PtreeSetdescr(struct tree p, char [*] descr) :    

  # PtreeSetdescr sets the descriptor field.
  #
  # Parameters: 
  #   p     : tree node
  #   ref   : descr field
  #
  # Returns: OK 
  #
 
  if((descr != NULL) && (p != NULL)):
    delete(p.descr) 
    p.descr=LibeStrsave(descr) 
     
  return(OK) 
    
   
def char [*] PtreeGetdescr(struct tree p) :    

  # PtreeGetdescr gets the descriptor field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: descr field.
  #
 
  return(p.descr) 

    
   
def int PtreeSetglobal(struct tree p, char [*] global) :    

  # PtreeSetglobal sets the global field.
  #
  # Parameters: 
  #   p     : tree node
  #   ref   : global field
  #
  # Returns: OK 
  #
 
  if((global != NULL) && (p != NULL)):
    delete(p.global) 
    p.global=LibeStrsave(global) 
     
  return(OK) 
    
   
def char [*] PtreeGetglobal(struct tree p) :   

  # PtreeGetglobal  -- Get the global field. 
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: global field.
  #
 
  return(p.global) 

    
   
def int PtreeSetopexpr(struct tree p, int topexpr) :    

  # PtreeSetopexr  sest the topexpr field of the node.
  #
  # Parameters: 
  #   p         : tree node
  #   topexpr   : topexpr field
  #
  # Returns: OK 
  #
 
  p.topexpr = OK 

  return(OK) 

    
   
def int PtreeGetopexpr(struct tree p) :    

  # PtreeGetopexpr  gets the simple field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: topexpr field.
  #

    return(p.topexpr) 

    
   
def int PtreeSetsimple(struct tree p, int simple) :    

  # PtreeSetsimple sets the simple field of the node.
  #
  # Parameters: 
  #   p         : tree node
  #   topexpr   : simple field
  #
  # Returns: OK 
  #
 
  p.simple = simple 
  return(OK) 

    
   
def int PtreeGetsimple(struct tree p) :   

  # PtreeGetsimple gets the simple field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: simple field.
  #
 
  return(p.simple) 

    

def int PtreeSetforw(struct tree p, char [*] forw) :

  # PtreeSetforw sets the forward field.

  if((forw != NULL) && (p != NULL)):
    delete(p.forw) 
    p.forw=LibeStrsave(forw) 
     
  return(OK) 
   

def char [*] PtreeGetforw(struct tree p) :

  #PtreeGetforw  -- Get the forward field


  return(p.forw) 
   

   
def int PtreePrtree(struct tree p, int level) :

  # PtreePrtree -- print the tree.
  #
  # Parameters: 
  #   p         : tree node
  #   level     : tree level
  #
  # Returns   : OK 
  #   
  # PtreePrtree recursively prints the
  # tree starting at p.
  # Level controls at what level the printing starts.
  # If level is set to zero, the tree is
  # printed as if p was the root node.
  # If level is set to one, all nodes
  # at one level below the root node is printed.
  # For level > 1 the corresponding levels of the
  # tree are printed.
 
  int i 
  int fp 
       
  fp = stdout 

  if (p != NULL):
    i = 0 
    while( i < level):
      LibePuts(fp, " ") 
      i = i + 1 
 
    LibePuts(fp, p.name); LibePuts(fp," ") 
    LibePuts(fp, p.defn) ; LibePuts(fp," ") 
    LibePuts(fp, p.type); LibePuts(fp," ") 
    LibePuts(fp, p.structure); LibePuts(fp," ") 
    LibePuts(fp, p.array);     LibePuts(fp," ") 
    LibePuts(fp, p.paral);     LibePuts(fp," ") 
    LibePuts(fp, p.global);    LibePuts(fp," ") 
    LibePuti(fp, p.rank);      LibePuts(fp," ") 
    LibePuts(fp, p.forw);      LibePuts(fp," ") 
    if(p.simple==OK):
      LibePuts(fp, "simple");    LibePuts(fp," ") 
    else if(p.simple==EMPTY):
      LibePuts(fp, "empty");     LibePuts(fp," ") 
    else:
      LibePuts(fp, "nonsimple"); LibePuts(fp," ") 
    if(p.topexpr==OK):
      LibePuts(fp, "topexpr");   LibePuts(fp," ") 
    else if(p.topexpr==ERR):
      LibePuts(fp, "void");      LibePuts(fp," ") 
    else:
      LibePuts(fp, "nonsimple"); LibePuts(fp," ") 
 
    LibePuti(fp, p.line);  LibePuts(fp," ") 
    LibePuts(fp, p.tempr); LibePuts(fp," ") 
    LibePuts(fp, p.tempi); LibePuts(fp," ") 
    LibePuts(fp, p.lval);  LibePuts(fp," ") 
    LibePuts(fp, p.ref);   LibePuts(fp," ") 
    LibePuts(fp, p.descr); LibePuts(fp," ") 
    LibePuts(fp, "\n") 

    level = level + 1 
    PtreePrtree(p.child, level) 
    level = level - 1 
    PtreePrtree(p.sister,level) 
      
  LibeFlush(fp) 
  return(OK) 
 
