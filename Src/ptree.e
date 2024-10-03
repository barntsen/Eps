# Parse tree managment

#  node - sister 
#    |
#  child

include "libe.i"   # Library interface  
include "ptree.i"  # Ptree interface    
include "err.i"    # Error interface    

# Internal functions  
char [*] PtreeSetfield(char [*] field, char [*] value):end 

int PtreeInit() :
  # PtreeInit initialize the tree module.

  return(OK);
end 
 
int PtreeRmtree(struct tree p)  
:
  # PtreeRmtree removes a tree.                            

  if(p != NULL):
    PtreeRmtree(p.child);
    PtreeRmtree(p.sister);
    PtreeRmnode(p);
  end 
 
  return(OK);
end 
                      
int PtreeRmnode(struct tree p)  
:
  # PtreeRmnode removes a node.                            

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
                      
struct tree PtreeMknode( char [*] name, char [*] def )  
:

  # PtreeMknodes make a new parse tree node.  

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
  p.forw =   LibeStrsave("void");  
  p.rank = 0;
  p.simple = EMPTY;
  p.child = NULL;
  p.sister = NULL;
  return (p);
end 
 
int PtreeAddchild(struct tree parent, struct tree child)  
:

  # PtreeAddchild adds a child node  

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
 
int PtreeAddsister(struct tree sister, struct tree newnode)
:

 # PtreeAddsister adds a sister node.

  struct tree p, prev; 
       
  p = sister;
  prev = p;
  while ((p = p.sister) != NULL):
    prev = p;           
  end 
 
  prev.sister = newnode;
  return(OK);
end 
 
struct tree PtreeMvsister(struct tree p)
:
  # PtreeMvsister moves to the sister node.                            

  return(p.sister);
end 
                      
struct tree PtreeMvchild(struct tree p)  
:
  return(p.child);
end 
                      
int PtreeSetname(struct tree p, char [*] name)
:

  # Mvchild moves to child  node 

  p.name=PtreeSetfield(p.name, name);
  return(OK);
end 
   
char  [*] PtreeGetname(struct tree p) 
:
  # PtreeGetname gets the name of the node.

  return(p.name);
end 
   
int PtreeSetdef(struct tree p, char [*] def)
:
  # PtreeSetdef sets the definition of the node.
 
  p.def=PtreeSetfield(p.def, def);
  return(OK);
end 
   
char [*] PtreeGetdef(struct tree p)  
:

  # PtreeGetdef gets the definition of the node.

  return(p.def);
end 
   
int PtreeSetype(struct tree p, char [*] type)
:
  # PtreeSetype sets the type of the node.
 
  p.type=PtreeSetfield(p.type, type);
  return(OK);
end 
   
char [*] PtreeGetype(struct tree p) 
:
  # PtreeGetype gets the type of the node.

  return(p.type);
end 
   
int PtreeSetstruct(struct tree p, char [*] structure)
:

  # PtreeSetstruct sets the structure flag

  p.structure=PtreeSetfield(p.structure, structure);
  return(OK);
end 
   
char [*] PtreeGetstruct(struct tree p)    
:

  #PtreeGetstruct gets the structure flagr.end 
 

  return(p.structure);
end 
   
int PtreeSetempr(struct tree p, char [*] tempr)
:

  # PtreeSetempr sets the real temporary of the node
 
  p.tempr=PtreeSetfield(p.tempr, tempr);
  return(OK);
end 
   
char  [*] PtreeGetempr(struct tree p) 
:

  # PtreeGetempr gets the real temporary of the node.

  return(p.tempr);
end 
   
int PtreeSetempi(struct tree p, char [*] tempi)
:

  # PtreeSetempi  sets the imaginary temporary of the node

  p.tempi=PtreeSetfield(p.tempi, tempi);
  return(OK);
end 
   
char  [*] PtreeGetempi(struct tree p)  
:

 # PtreeGetempi gets the imaginary temporary of the node

   return(p.tempi);
end 
   
int PtreeGetline(struct tree p)    
:

  # PtreeGetline gets the line no of the node.

  return(p.line);
end 
   
int PtreeSetline(struct tree p, int line)    
:

  #PtreeSetline sets the line no of the node.
 
  p.line=line;
  return(OK); 
end 
   
char [*] PtreeGetfile(struct tree p)    
:

  # PtreeGetfile gets the input file name of the node.
  
  return(p.file);
end 

int PtreeSetfile(struct tree p, char [*] file) :   

  
  # PtreeGetfile sets the input file name of the node.
  # 
  # Parameters :
  #   p    : Tree node
  #   file : File name 

  PtreeSetfield(p.file,file);
  return(OK);
end 
   
int PtreeSetrank(struct tree p, int rank)    
:

  #PtreeSetrank  sets the rank field of the node.
 
  p.rank = rank;
  return(OK);
end 
   
int PtreeGetrank(struct tree p)    
:
  # PtreeGetrank gets the rank field of the node.

  return(p.rank);
end 
   
int PtreeSetlval(struct tree p, char [*] lval)
:

  #PtreeSetlval sets the lval field of the node.

  p.lval=PtreeSetfield(p.lval, lval);
  return(OK);
end 
   
 
char  [*] PtreeGetlval(struct tree p) 
:

 # PtreeGetlval gets the lval field of the node.

  return(p.lval);
end 
   
int PtreeSetarray(struct tree p, char [*] array)    
:

  # PtreeSetarray sets the array field.

  p.array=PtreeSetfield(p.array, array);
  return(OK);
end 
   
char [*] PtreeGetarray(struct tree p)    
:

  # PtreeGetarray gets the array field.
 
  return(p.array);
end 
   
int PtreeSetparallel(struct tree p, char [*] paral)    
:

  # PtreeSetparallel sets the parallel field.
 
  p.paral=PtreeSetfield(p.paral, paral);
  return(OK);
end 
   
char [*] PtreeGetparallel(struct tree p)    
:

  #PtreeGetparallel gets the parallel field.

  return(p.paral);
end 
   
int PtreeSetref(struct tree p, char [*] ref)    
:

  # PtreeSetref sets the ref field.

  p.ref=PtreeSetfield(p.ref, ref);
  return(OK);
end 
   
char [*] PtreeGetref(struct tree p)    
:

  # PtreeGetref gets the ref field.
 
  return(p.ref);
end 
   
int PtreeSetdescr(struct tree p, char [*] descr)    
:

  # PtreeSetdescr sets the descriptor field.
 
  p.descr=PtreeSetfield(p.descr, descr);
  return(OK);
end 
   
char [*] PtreeGetdescr(struct tree p)    
:

  # PtreeGetdescr gets the descriptor field.
 
  return(p.descr);
end 
   
int PtreeSetglobal(struct tree p, char [*] global)    
:

  # PtreeSetglobal sets the global field.
 
  p.global=PtreeSetfield(p.global, global);
  return(OK);
end 
   
char [*] PtreeGetglobal(struct tree p)    
:

  #PtreeGetdescr  -- Get the descriptor fieldend 
 
 
  return(p.global);
end 
   
int PtreeSetopexpr(struct tree p, int topexpr)    
:

  # PtreeSetopexr  sest the topexpr field of the node.
 
  p.topexpr = OK;

  return(OK);
end 
   
int PtreeGetopexpr(struct tree p)    
:

  # PtreeGetopexpr  gets the simple field of the node.

    return(p.topexpr);
end 
   
int PtreeSetsimple(struct tree p, int simple)    
:

  # PtreeSetsimple sets the simple field of the node.
 
  p.simple = simple;
  return(OK);
end 
   
int PtreeGetsimple(struct tree p)    
:

  # PtreeGetsimple gets the simple field of the node.
 
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
   
char [*] PtreeSetfield(char [*] field, char [*] value)    
:

  #PtreeSetfield sets a field.
 
  if(field != NULL)
    delete(field);
  if(value == NULL)
    field = NULL;
  else:
    field = LibeStrsave(value);
  end 
 
    return(field);
end 
   
int PtreePrtree(struct tree p, int level)
: 

  # PtreePrtree -- print the tree.
 
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
 
