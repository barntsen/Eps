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
import err     # Error interface    

# Parse tree node datastructure
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
  char [*] forw;     # forw field         
  char [*] ref;      # Ref  field             
  int rank;          # Array rank field        
  int simple;        # Simple field           
  int topexpr;       # Top level expr field   
  char [*] descr;    # Descriptor field       
  struct tree child; # Child node            
  struct tree sister; # Sister node           
end 
  
int PtreeInit() :
   
  # PtreeInit initialize the tree module.
  #
  # Parameters: None
  #
  # Returns: OK
  #

  return(OK);

end 
 
int PtreeRmnode(struct tree p) : 

  # PtreeRmnode removes a node.                            
  #
  # Parameters: 
  #   p : Ptree tree node
  #
  # Returns: OK
  #
  # PtreeRmnode removes a single node.
  #

  if(p == NULL)
    return (OK);
  delete(p.name);
  delete(p.def);
  delete(p.type);
  delete(p.structure);
  delete(p.tempr);
  delete(p.tempi);
  delete(p.lval);
  delete(p.array);
  delete(p.ref);
  delete(p.descr);
  delete(p);
  return(OK);
 end 
                      
int PtreeRmtree(struct tree p) : 
  
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
    PtreeRmtree(p.child);
    PtreeRmtree(p.sister);
    PtreeRmnode(p);
  end 
 
  return(OK);

end 
                      
struct tree PtreeMknode( char [*] name, char [*] def ) :  

  # PtreeMknodes make a new parse tree node.  
  #
  # Parameters: 
  #   name : Name of node (name field)
  #   def  : Definition of node (def field)
  #
  # Returns: 
  #   parse tree node
  #
  # PtreeMknode creates a new node
  # and sets the name and def fields.
  #

  struct tree p; 

  p = new(struct tree);
  p.def = LibeStrsave(def);
  p.name = LibeStrsave(name);
  p.type =  LibeStrsave("void");    
  p.structure = LibeStrsave("void"); 
  p.line =  0;
  p.file =  LibeStrsave("void");
  p.tempr = LibeStrsave("void");         
  p.tempi = LibeStrsave("void");      
  p.lval =  LibeStrsave("void");       
  p.array = LibeStrsave("void");      
  p.paral = LibeStrsave("void");      
  p.ref =   LibeStrsave("void");        
  p.descr = LibeStrsave("void");  
  p.global = LibeStrsave("void");  
  p.forw = LibeStrsave("void");  
  p.rank = 0;
  p.simple = EMPTY;
  p.child = NULL;
  p.sister = NULL;
  return (p);

end 
 
int PtreeAddchild(struct tree parent, struct tree child): 

  # PtreeAddchild adds a child node to a parent node.  
  #
  # Parameters: 
  #   parent: The parent node
  #   child : The child node
  #
  # Returns: OK 
  #
  # PtreeMknode creates a new node
  # and sets the name and def fields.
  #

  struct tree p, prev; 

  if((p = parent.child) == NULL):
    parent.child = child;
    return (OK);
  end 
 
  prev = parent.child;
  while ((p = p.sister) != NULL):
    prev = p;           
  end 
 
  prev.sister = child;
  return(OK);
end 
 
int PtreeAddsister(struct tree sister, struct tree newnode) :

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

  struct tree p, prev; 
       
  p = sister;
  prev = p;
  while ((p = p.sister) != NULL):
    prev = p;           
  end 
 
  prev.sister = newnode;
  return(OK);
end 
 
struct tree PtreeMvsister(struct tree p) :
   
  # PtreeMvsister moves to the sister node.                            
  #
  # Parameters: 
  #   p   : tree node
  #
  # Returns: 
  #  A sister node 
  #   

  return(p.sister);

end 
                      
struct tree PtreeMvchild(struct tree p):  
   
  # PtreeMvchild moves to the child node.                            
  #
  # Parameters: 
  #   p   : tree node
  #
  # Returns: 
  #  A child node 
  #   

  return(p.child);

end 

char [*] PtreeSetfield(char [*] field, char [*] value) :    

  #PtreeSetfield sets a field.
  #
  # Parameters: 
  #   field     : field
  #   value     : contents of the field
  #
  # Returns: 
  #   contents of field
  #
 
  if(field != NULL)
    delete(field);
  if(value == NULL)
    field = NULL;
  else:
    field = LibeStrsave(value);
  end 
 
    return(field);

end 
                      
int PtreeSetname(struct tree p, char [*] name) :

  # PtreeSetname sets the "name" field.
  #
  # Parameters: 
  #   p    : tree node
  #   name : node name
  #
  # Returns: OK 
  #   

  p.name=PtreeSetfield(p.name, name);
  return(OK);

end 
   
char  [*] PtreeGetname(struct tree p): 

  # PtreeGetname gets the name of the node.
  # Parameters: 
  #   p    : tree node
  #
  # Returns: 
  #   node name
  #   

  return(p.name);

end 
   
int PtreeSetdef(struct tree p, char [*] def) :
   
  # PtreeSetdef sets the definition of the node.
  #
  # Parameters: 
  #   p    : tree node
  #   def  : def field
  #
  # Returns: OK 
  #   
 
  p.def=PtreeSetfield(p.def, def);
  return(OK);
end 
   
char [*] PtreeGetdef(struct tree p) : 

  # PtreeGetdef gets the definition of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: 
  #  definition field
  #   

  return(p.def);

end 
   
int PtreeSetype(struct tree p, char [*] type) :
   
  # PtreeSetype sets the type of the node.
  #
  # Parameters: 
  #   p    : tree node
  #   type : type field
  #
  # Returns: OK 
  #   
 
  p.type=PtreeSetfield(p.type, type);

  return(OK);

end 
   
char [*] PtreeGetype(struct tree p) :
   
  # PtreeGetype gets the type of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: 
  #  type field
  #   

  return(p.type);

end 
   
int PtreeSetstruct(struct tree p, char [*] structure) :

  # PtreeSetstructure sets the structure field of the node.  
  #
  # Parameters: 
  #   p         : tree node
  #   structure : structure field
  #
  # Returns: OK 
  #

  p.structure=PtreeSetfield(p.structure, structure);

  return(OK);

end 
   
char [*] PtreeGetstruct(struct tree p) :    

  #
  #PtreeGetstruct gets the structure field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: 
  #  structure field
  #   

  return(p.structure);

end 
   
int PtreeSetempr(struct tree p, char [*] tempr) :

  # PtreeSetempr sets the real temporary of the node
  #
  # Parameters: 
  #   p     : tree node
  #   tempr : tempr field
  #
  # Returns: OK 
  #
 
  p.tempr=PtreeSetfield(p.tempr, tempr);

  return(OK);

end 
   
char  [*] PtreeGetempr(struct tree p) : 

  # PtreeGetempr gets the real temporary of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: tempr field
  #

  return(p.tempr);
end 
   
int PtreeSetempi(struct tree p, char [*] tempi) :

  # PtreeSetempi  sets the imaginary temporary of the node
  #
  # Parameters: 
  #   p     : tree node
  #   tempi : tempi field 
  #
  # Returns: OK 
  #

  p.tempi=PtreeSetfield(p.tempi, tempi);
  return(OK);
end 
   
char  [*] PtreeGetempi(struct tree p) :  

  # PtreeGetempi gets the imaginary temporary of the node
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: tempi field
  #

   return(p.tempi);

end 
   
int PtreeGetline(struct tree p):    

  # PtreeGetline gets the line no of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: line field
  #

  return(p.line);

end 
   
int PtreeSetline(struct tree p, int line)    
:

  #PtreeSetline sets the line no of the node.
  #
  # Parameters: 
  #   p    : tree node
  #   line : line field
  #
  # Returns: OK 
  #
 
  p.line=line;
  return(OK); 
end 
   
char [*] PtreeGetfile(struct tree p) :    

  # PtreeGetfile gets the input file name of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: file field.
  #
  
  return(p.file);
end 

int PtreeSetfile(struct tree p, char [*] file) :   
  
  # PtreeSetfile sets the input file name of the node.
  # 
  # Parameters :
  #   p    : Tree node
  #   file : File name 
  #
  # Returns : OK

  PtreeSetfield(p.file,file);
  return(OK);

end 
   
int PtreeSetrank(struct tree p, int rank) :   

  # PtreeSetrank  sets the rank field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #   rank : rank field
  #
  # Returns: OK 
  #
 
  p.rank = rank;
  return(OK);

end 
   
int PtreeGetrank(struct tree p) :    

  # PtreeGetrank gets the rank field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: rank field.
  #

  return(p.rank);

end 
   
int PtreeSetlval(struct tree p, char [*] lval) :
  
  # PtreeSetlval sets the left value field
  #
  # Parameters: 
  #   p    : tree node
  #   lval : lval field
  #
  # Returns: OK 
  #

  p.lval=PtreeSetfield(p.lval, lval);
  return(OK);

end 
 
char  [*] PtreeGetlval(struct tree p) :

  # PtreeGetlval gets the lval field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: lval field.
  #

  return(p.lval);

end 
   
int PtreeSetarray(struct tree p, char [*] array) :   

  # PtreeSetarray sets the array field.
  #
  # Parameters: 
  #   p     : tree node
  #   array : array field
  #
  # Returns: OK 
  #

  p.array=PtreeSetfield(p.array, array);

  return(OK);

end 
   
char [*] PtreeGetarray(struct tree p) :   

  # PtreeGetarray gets the array field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: array field.
  #

  return(p.array);

end 
   
int PtreeSetparallel(struct tree p, char [*] paral) :    

  # PtreeSetparallel sets the parallel field.
  #
  # Parameters: 
  #   p     : tree node
  #   array : paral field
  #
  # Returns: OK 
  #
 
  p.paral=PtreeSetfield(p.paral, paral);
  return(OK);

end 
   
char [*] PtreeGetparallel(struct tree p) :    

  #PtreeGetparallel gets the parallel field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: paral field.
  #

  return(p.paral);

end 
   
int PtreeSetref(struct tree p, char [*] ref) :   

  # PtreeSetref sets the ref field.
  #
  # Parameters: 
  #   p     : tree node
  #   ref   : ref field
  #
  # Returns: OK 
  #

  p.ref=PtreeSetfield(p.ref, ref);

  return(OK);

end 
   
char [*] PtreeGetref(struct tree p) :    

  # PtreeGetref gets the ref field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: ref field.
  #
 
  return(p.ref);

end 
   
int PtreeSetdescr(struct tree p, char [*] descr) :    

  # PtreeSetdescr sets the descriptor field.
  #
  # Parameters: 
  #   p     : tree node
  #   ref   : descr field
  #
  # Returns: OK 
  #
 
  p.descr=PtreeSetfield(p.descr, descr);

  return(OK);

end 
   
char [*] PtreeGetdescr(struct tree p) :    

  # PtreeGetdescr gets the descriptor field.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: descr field.
  #
 
  return(p.descr);

end 
   
int PtreeSetglobal(struct tree p, char [*] global) :    

  # PtreeSetglobal sets the global field.
  #
  # Parameters: 
  #   p     : tree node
  #   ref   : global field
  #
  # Returns: OK 
  #
 
  p.global=PtreeSetfield(p.global, global);

  return(OK);

end 
   
char [*] PtreeGetglobal(struct tree p) :   

  # PtreeGetglobal  -- Get the global field. 
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: global field.
  #
 
  return(p.global);

end 
   
int PtreeSetopexpr(struct tree p, int topexpr) :    

  # PtreeSetopexr  sest the topexpr field of the node.
  #
  # Parameters: 
  #   p         : tree node
  #   topexpr   : topexpr field
  #
  # Returns: OK 
  #
 
  p.topexpr = OK;

  return(OK);

end 
   
int PtreeGetopexpr(struct tree p) :    

  # PtreeGetopexpr  gets the simple field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: topexpr field.
  #

    return(p.topexpr);

end 
   
int PtreeSetsimple(struct tree p, int simple) :    

  # PtreeSetsimple sets the simple field of the node.
  #
  # Parameters: 
  #   p         : tree node
  #   topexpr   : simple field
  #
  # Returns: OK 
  #
 
  p.simple = simple;
  return(OK);

end 
   
int PtreeGetsimple(struct tree p) :   

  # PtreeGetsimple gets the simple field of the node.
  #
  # Parameters: 
  #   p    : tree node
  #
  # Returns: simple field.
  #
 
  return(p.simple);

end 

int PtreeSetforw(struct tree p, char [*] forw)
:

  # PtreeSetforw sets the forward field.

  p.forw=PtreeSetfield(p.forw, forw);
  return(OK);
end

char [*] PtreeGetforw(struct tree p)
:

  #PtreeGetforw  -- Get the forward field


  return(p.forw);
end

   
int PtreePrtree(struct tree p, int level) :

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
 
  int i;
  int fp;
       
  fp = stdout;

  if (p != NULL):
    i = 0;
    while( i < level):
      LibePuts(fp, " ");
      i = i + 1;
    end 
 
    LibePuts(fp, p.name); LibePuts(fp," ");
    LibePuts(fp, p.def);  LibePuts(fp," ");
    LibePuts(fp, p.type); LibePuts(fp," ");
    LibePuts(fp, p.structure); LibePuts(fp," ");
    LibePuts(fp, p.array); LibePuts(fp," ");
    LibePuts(fp, p.paral); LibePuts(fp," ");
    LibePuts(fp, p.global); LibePuts(fp," ");
    LibePuti(fp, p.rank);  LibePuts(fp," ");
    LibePuts(fp, p.forw);  LibePuts(fp," ");
    if(p.simple==OK):
      LibePuts(fp, "simple"); LibePuts(fp," ");
    end 
 
    else if(p.simple==EMPTY):
      LibePuts(fp, "empty"); LibePuts(fp," ");
    end 
 
    else:
      LibePuts(fp, "nonsimple"); LibePuts(fp," ");
    end 
 
    if(p.topexpr==OK):
      LibePuts(fp, "topexpr"); LibePuts(fp," ");
    end 
 
    else if(p.topexpr==ERR):
      LibePuts(fp, "void"); LibePuts(fp," ");
    end 
 
    else:
      LibePuts(fp, "nonsimple"); LibePuts(fp," ");
    end 
 
    LibePuti(fp, p.line);  LibePuts(fp," ");
    LibePuts(fp, p.tempr); LibePuts(fp," ");
    LibePuts(fp, p.tempi); LibePuts(fp," ");
    LibePuts(fp, p.lval);  LibePuts(fp," ");
    LibePuts(fp, p.ref);   LibePuts(fp," ");
    LibePuts(fp, p.descr); LibePuts(fp," ");
    LibePuts(fp, "\n");

    level = level + 1;
    PtreePrtree(p.child, level);
    level = level - 1;
    PtreePrtree(p.sister,level);
  end 
 
  LibeFlush(fp);
  return(OK);
end 
 
