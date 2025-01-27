# The Sym imodule manages the symbol table.
#
#
#    Table 1                Table 2
#   -------------------     ----------------
#   |                 |     |              |
#   |   ----------    |     | ----------   |
#   |   |        |    |     | |        |   |
#   |   | node   |--------->| | node   |   |
#   |   |        |    |     | |        |   |
#   |   ----------    |     | ----------   |
#   |       |         |     ----------------
#   |       |         |
#   |       |         |     Table 3
#   |       v         |     ----------------
#   |   ----------    |     |
#   |   |        |    |     |
#   |   |  node  |    |     |
#   |   |        |    |     |
#   |   ----------    |     |
#   -------------------     ----------------

import libe

# Symbol table data structures

struct symbol : # basic table entry  
      char [*] name                # Name                         
      char [*] type                # Basic type                   
      char [*] func                # Flag for function            
      char [*] array               # Flag for array               
      int  rank                    # Rank of array                
      char [*] structure           # Flag for structure           
      char [*] ident               # Flag for identifier          
      char [*] lval                # Flag for left value          
      char [*] descr               # Descr field                  
      char [*] global              # Global field  
      char [*] ref                 # Flag for  reference          
      char [*] module              # Module name
      char [*] forw                # forw field
      int  emit                    # The emit flag                
      struct symbol tbl             # next table                   
      struct symbol next            # next entry in chain          
      struct symbol last            # last entry in chain          
    
  
const NTBL=400 

# SymEtp is the external Symbol Table
struct symbol SymEtp        

# SymLtp is the local symbol table
struct symbol SymLtp        

# SymStp is the string table (not used)
struct symbol SymStp       

struct symbol SymGetetp() :

  # SymGetetp gets the symbol table.                 

  return(SymEtp) 

int SymIstemp(char [*] name):

  # SymIstemp checks if the name starts with "nctemp"
  #
  # Arguments :
  #  name : Variable name
  #
  # Return OK if the name starts with "nctemp"
  #        ERR if not

  char [*] t 
  int lnc 
  int i 

  lnc=len("nctemp",0)-1 
  if(len(name,0) < lnc):
    return(ERR) 
     
  t = LibeStrsave("nctemp") 
  for (i=0; i<lnc;  i=i+1):
    if(name[i] != t[i]):
      return(ERR) 
     
  delete(t) 
  return(OK) 

struct symbol SymSetetp( struct symbol etp) :

  # SymSetetp sets the symbol table                    

  SymEtp = etp 
  return(SymEtp) 

struct symbol SymGetltp() :

  # SymGetltp gets the local symbol table.                 
 
  return(SymLtp) 

struct symbol SymSetltp( struct symbol ltp) :

  # SymSetltp sets the local symbol table.                 
 
  SymLtp = ltp 
  return(SymLtp) 

struct symbol SymGetstp() :

 # SymGetstp gets the string table.                 
 
  return(SymStp) 
 
struct symbol SymSetstp( struct symbol stp) :

  # SymSetstp -- sets the string table.                 

  SymStp = stp 
  return(SymStp) 

struct symbol SymLookup(char [*] s, struct symbol tp) :

  # SymLookup looks for name s                 
 
  struct symbol np 
      
  np = tp 
  while(np != NULL): 
    if (LibeStrcmp(s, np.name) == OK) :
      return(np)        # found it  
    np = np.next 
     
  return(np=NULL)        # not found  
    
struct symbol SymMkname(char [*] name, struct symbol tp) :

  struct symbol np
  struct symbol lp

  if((np = SymLookup(name, tp)) == NULL) :  # not found  
    np = new(struct symbol) 
    if (np == NULL):
      return(np) 
       
    if((np.name = LibeStrsave(name)) == NULL):
      return(np=NULL) 
       
    lp = tp.last 
    lp.next = np 
    tp.last = np 
    np.next = NULL 
    np.type = LibeStrsave("void") 
    np.func = LibeStrsave("void") 
    np.array = LibeStrsave("void") 
    np.structure = LibeStrsave("void") 
    np.tbl = NULL 
    np.ident = LibeStrsave("void") 
    np.rank = 0 
    np.lval = LibeStrsave("void") 
    np.ref = LibeStrsave("void") 
    np.descr = LibeStrsave("void") 
    np.global = LibeStrsave("void") 
    np.module = LibeStrsave("void") 
    np.forw = LibeStrsave("void") 
    np.emit = OK 
  else :
    np = NULL 
  return(np)           # Return pointer to node  

struct symbol SymGetable(struct symbol np) :

  # SymGetable gets a table.

  return(np.tbl) 

struct symbol SymRmname(char [*] name, struct symbol tp) :

  # SymRmname removes a name.     
 
  struct symbol np, sp, prev 
  np = tp 
  sp = NULL 
  prev = np 
  while(np != NULL): 
    if (LibeStrcmp(name, np.name) == OK):
      sp = np 
      np = NULL 
    else:
      prev = np 
      np = np.next 
  np = sp 
  if(np == NULL): 
    return(np) 
  if(np.next == NULL):
    prev.last = prev 
  prev.next = np.next 
  delete(np.name) 
  delete(np.type) 
  delete(np.func)  
  delete(np.array) 
  delete(np.structure) 
  delete(np.tbl) 
  delete(np.ident) 
  delete(np.lval) 
  delete(np.ref) 
  delete(np.descr) 
  return(prev) 
        
char [*] SymGetname(struct symbol np) :

  # SymGetname gets a name.

  return(np.name) 
 
struct symbol SymMktable() :

  # SymMktable  makes a new symbol table.     

  struct symbol tp    # Table pointer  

  tp = new(struct symbol) 
  if (tp == NULL):
    return(tp) 
     
  tp.name =  LibeStrsave("#first") 
  tp.type =  LibeStrsave("void") 
  tp.tbl =   NULL 
  tp.func =  LibeStrsave("void") 
  tp.ref =   LibeStrsave("void") 
  tp.descr =  LibeStrsave("void") 
  tp.array = LibeStrsave("void") 
  tp.structure =  LibeStrsave("void") 
  tp.ident =  LibeStrsave("void") 
  tp.lval =  LibeStrsave("void") 
  tp.global = LibeStrsave("void") 
  tp.module = LibeStrsave("void") 
  tp.forw = LibeStrsave("void") 
  tp.emit = OK 
  tp.next =  NULL 
  tp.last = tp 
  return(tp)            # Return pointer to first node  

struct symbol  SymMvnext(struct symbol np) :

 # SymMvnext moves to next node.     

  if(np == NULL):
    return(np)  
  else :
    return (np.next) 
 
struct symbol SymSetable(struct symbol np, struct symbol tp) :

  # SymSetable sets a table.     

  np.tbl = tp 
  return(np) 
 
int SymSetname(struct symbol p, char [*] name) :

  # SymSetname sets the node field.

  if((name != NULL) && (p != NULL)):
    delete(p.name) 
    p.name = LibeStrsave(name) 
  return(OK) 
   
int SymSetype(struct symbol p, char [*] type) :

  # SymSetype sets type.     

  if((type != NULL) && (p != NULL)):
    delete(p.type) 
    p.type = LibeStrsave(type) 
  return(OK) 
 
char [*] SymGetype(struct symbol np) :

  # SymGetype gets type.

  return(np.type) 
 
int SymSetfunc(struct symbol p, char [*] func) :

  # SymSetfunc sets the function field.     

  if((func != NULL) && (p != NULL)):
    delete(p.func) 
    p.func = LibeStrsave(func) 
  return(OK) 
 
char [*] SymGetfunc(struct symbol np) :

  # SymGetfunc gets the function field.

  return(np.func) 
 
int SymSetarray(struct symbol p, char [*] array) :

  # SymSetarray sets the array field.     

  if((array != NULL) && (p != NULL)):
    delete(p.array) 
    p.array = LibeStrsave(array) 
  return(OK) 
 
char [*] SymGetarray(struct symbol np) :

  # SymGetarray gets the array field.

  return(np.array) 

int SymSetstruct(struct symbol p, char [*] structure) :

 # SymSetstruct sets the structure field.     

  if((structure != NULL) && (p != NULL)):
    delete(p.structure) 
    p.structure = LibeStrsave(structure) 
  return(OK) 
 
char [*] SymGetstruct(struct symbol np) :

 # SymGetstruct gets the structure field.

 return(np.structure) 
 
int SymSetident(struct symbol p, char [*] ident) :

  # SymSetident sets the identifier field.     

  if((ident != NULL) && (p != NULL)):
    delete(p.ident) 
    p.ident = LibeStrsave(ident) 
  return(OK) 

char [*] SymGetident(struct symbol np) :

  # SymGetident gets the identifier field.
 
  return(np.ident) 
 
int SymSetlval(struct symbol p, char [*] lval) :

  # SymSetlval sets the lval field.     

  if((lval != NULL) && (p != NULL)):
    delete(p.lval) 
    p.lval = LibeStrsave(lval) 
  return(OK) 
 
char [*] SymGetlval(struct symbol np) :

  #SymGetlval -- get the lval field.

  return(np.lval) 

int SymSetrank(struct symbol np, int rank) :

  #SymSetrank sets the rank field.     

  np.rank = rank 
  return(OK) 

int SymGetrank(struct symbol np) :

  # SymGetrank gets the rank field.
 
     return(np.rank) 
 
int SymSetemit(struct symbol np, int emit) :

  # SymSetemit sets the emit field.     

   np.emit = emit 
   return(OK) 
 
int SymGetemit(struct symbol np) :

  # SymGetrank gets the rank field.

  return(np.emit) 
 
int SymSetref(struct symbol p, char  [*] ref) :

  # SymSetref sets the ref field.     

  if((ref != NULL) && (p != NULL)):
    delete(p.ref) 
    p.ref = LibeStrsave(ref) 
     
  return(OK) 
 
char [*] SymGetref(struct symbol np) :

  # SymGetref  gets the ref field.

  return(np.ref) 

int SymSetmodule(struct symbol p, char  [*] module) :

  # SymSetmodule sets the module field.     

  if((module != NULL) && (p != NULL)):
    delete(p.module) 
    p.module = LibeStrsave(module) 
     
  return(OK) 

char [*] SymGetmodule(struct symbol np) :

  # SymGetmodule  gets the module field.

  return(np.module) 

int SymSetforw(struct symbol p, char  [*] forw) :

  # SymSetmodule sets the forw field.

  if((forw != NULL) && (p != NULL)):
    delete(p.forw) 
    p.forw = LibeStrsave(forw) 
  return(OK) 

char [*] SymGetforw(struct symbol np) :

  # SymGetmodule  gets the forw field.

  return(np.forw) 
 
int SymSetdescr(struct symbol p, char [*] descr) :

  # SymSetdescr sets the descr field.     

  if((descr != NULL) && (p != NULL)):
    delete(p.descr) 
    p.descr = LibeStrsave(descr) 
  return(OK) 
 
char [*] SymGetdescr(struct symbol np) :

  # SymGetdescr gets the descr field.

  return(np.descr) 

int SymSetglobal(struct symbol p, char [*] global) :

  # SymSetglobal sets the global field.     

  if((global != NULL) && (p != NULL)):
    delete(p.global) 
    p.global = LibeStrsave(global) 
  return(OK) 
 
char [*] SymGetglobal(struct symbol np) :

  # SymGetgloabl gets the global field.

  return(np.global) 
 
int SymRmtable(struct symbol p) :

  # SymRmtable removes the symbol table.

  struct symbol next, prev 

  if(p==NULL)return(ERR) 
  prev=NULL 
  while(p != NULL):
    next=p.next 
    if(LibeStrcmp("#arglist", p.name)==ERR):    
      if(LibeStrcmp("#self", p.name) == ERR):
        if(LibeStrcmp("#first", p.name) == ERR):
          if(p.tbl != NULL):
            SymRmtable(p.tbl) 
            p.tbl=NULL 
          if(prev != NULL):
            prev.next = next 
          delete(p.name) 
          delete(p.type) 
          delete(p.func)  
          delete(p.array) 
          delete(p.structure) 
          delete(p.tbl) 
          delete(p.ident) 
          delete(p.lval) 
          delete(p.ref) 
          delete(p.descr) 
          delete(p) 
    else:
      prev=p 
    p=next 
  return(OK) 

struct symbol SymLook(char [*] name) :

  # SymLook finds identifier.
 
  struct symbol tp, ap 

  if((tp = SymLookup(name, SymEtp)) == NULL):
    if((tp = SymLookup(name, SymLtp)) == NULL):
      tp = SymLookup("#arglist", SymLtp) 
      if(tp==0) return(tp) 
      ap = SymGetable(tp) 
      if(ap==0) return(ap) 
      if((tp = SymLookup(name,ap)) == NULL): 
        tp = SymLookup(name, SymEtp) 
  return(tp) 

int SymCpytble(struct symbol tp, struct symbol up) :

 # SymCpytble copies table.
 
  struct symbol wp 

  tp = SymMvnext(tp) 
  while(tp != NULL):
    wp = SymMkname(SymGetname(tp),up)  
    SymSetype(wp,SymGetype(tp)) 
    SymSetfunc(wp,SymGetfunc(tp)) 
    SymSetarray(wp,SymGetarray(tp)) 
    SymSetrank(wp,SymGetrank(tp)) 
    SymSetstruct(wp,SymGetstruct(tp)) 
    SymSetident(wp,SymGetident(tp)) 
    SymSetlval(wp,SymGetlval(tp)) 
    SymSetref(wp,SymGetref(tp)) 
    SymSetdescr(wp,SymGetdescr(tp)) 
    SymSetemit(wp,SymGetemit(tp)) 
    SymSetmodule(wp,SymGetmodule(tp)) 
    tp = SymMvnext(tp) 
  return(OK) 

struct symbol SymAddtble(struct symbol tp, struct symbol sp) :

 # SymAddtble concatenates two tables 
 #
 # Parameters:
 #   tp :         Input table no 1
 #   sp :         Input table no 2
 # 
 # Returns:
 #   Table no 2 is added to table no 1 forming
 #   a new table containing all symbols in table 1 and table 2.
 #   The new table is returned.

  struct symbol start 
  struct symbol prev 

  start = tp 
  
  if(sp == NULL):
    return(start) 
     

  if(tp == NULL):
    return(start) 
     

  # If the module table is empty, do nothing
  if(SymMvnext(sp) == NULL):
    return(start) 
     

  #Update the table last pointer 
  tp.last = sp.last 

  tp = SymMvnext(tp)  #Move to first entry
  
  # If the external table is empty, add the module
  # table to the external table and return.
  if(tp == NULL) :
    start.next = SymMvnext(sp) 
    return(start) 
      

  # Move to the     of the external table and
  # add the module table
  while(tp != NULL) :
    prev = tp 
    tp = SymMvnext(tp) 
     
  tp = prev 
  tp.next = SymMvnext(sp) 

  return(start) 

int SymPrsym(int fp,struct symbol p, int level) : 

  # SymPrsym prints the symbol table.

  int i 
  struct symbol tp 
       
  if(p == NULL):
    return(ERR) 
     
  while(p != NULL):
    i = 0 
    while(i <= level):
      LibePuts(fp, " ") 
      i = i + 1 

    LibePuts(fp, p.name);  LibePuts(fp, " ")     
    LibePuts(fp, p.type);  LibePuts(fp, " ")     
    LibePuts(fp, p.func);  LibePuts(fp, " ")     
    LibePuts(fp, p.array); LibePuts(fp, " ")     
    LibePuti(fp, p.rank);  LibePuts(fp, " ")     
    LibePuti(fp, p.emit);  LibePuts(fp, " ")     
    LibePuts(fp, p.structure); LibePuts(fp, " ")     
    LibePuts(fp, p.ident);     LibePuts(fp, " ")     
    LibePuts(fp, p.lval);      LibePuts(fp, " ")     
    LibePuts(fp, p.ref);       LibePuts(fp, " ")     
    LibePuts(fp, p.descr);     LibePuts(fp, " ")     
    LibePuts(fp, p.global);    LibePuts(fp, " ")     
    LibePuts(fp, p.module);    LibePuts(fp, " ")     
    LibePuts(fp, p.forw);      LibePuts(fp, " ")     
    LibePuts(fp,"\n") 
    LibeFlush(fp) 
 
    if(p.tbl != NULL):
      tp = p.tbl 
      level = level + 1 
      SymPrsym(fp,tp, level) 
      level = level - 1 
    p = p.next 
    LibeFlush(fp) 
  return(OK) 

int SymExport(int fp,struct symbol p, int level) :

  # SymExport prints the symbol table.

  struct symbol tq 
       
  if(p == NULL):
    return(ERR) 

  # Remove temporaries from the exported table
  #SymRmtemp(p) 

  # Make a dummy table to print the "first" entry
  tq = SymMktable() 
  SymPrsym(fp,tq,0) 

  p = p.next   
  while(p != NULL):
    if(SymIstemp(p.name) == ERR):
      if(LibeStrcmp(p.module,"void") == OK):
        LibePuts(fp," ") 
        LibePuts(fp, p.name);  LibePuts(fp, " ") 
        LibePuts(fp, p.type);  LibePuts(fp, " ") 
        LibePuts(fp, p.func);  LibePuts(fp, " ") 
        LibePuts(fp, p.array); LibePuts(fp, " ") 
        LibePuti(fp, p.rank);  LibePuts(fp, " ") 
        LibePuti(fp, p.emit);  LibePuts(fp, " ") 
        LibePuts(fp, p.structure); LibePuts(fp, " ") 
        LibePuts(fp, p.ident);     LibePuts(fp, " ") 
        LibePuts(fp, p.lval);      LibePuts(fp, " ") 
        LibePuts(fp, p.ref);       LibePuts(fp, " ") 
        LibePuts(fp, p.descr);     LibePuts(fp, " ") 
        LibePuts(fp, p.global);    LibePuts(fp, " ") 
        LibePuts(fp, p.module);    LibePuts(fp, " ") 
        LibePuts(fp,"\n") 
        LibeFlush(fp) 
        SymPrsym(fp,SymGetable(p),1) 
    p = p.next 
  LibeFlush(fp) 
  return(OK) 

int Symgetline(int fp, struct symbol np, char [*] module):
  
# Symgetline reads an single line (record) from a symbol 
# table stored in a file.

  int indent 
  int ch 
  int tmp
  char [*] field 

  field = new(char [NTBL]) 

  indent =0 

  # Read the current line
  ch=OK 
  if((ch=LibeGetc(fp)) == EOF):
    return(-1) 
     
  else: 
    # Back up one character
    LibeUngetc(fp) 
     

  #Get the number of whitespace characters at the beginning of the line
  while((ch=LibeGetc(fp)) == SPACE): 
    indent = indent+1 
     
  # Back up one character
  LibeUngetc(fp) 

  # Get the fields in the current line and set into fields
  # in the node pointed to by np

  LibeGetw(fp,field) 
  SymSetname(np,field)  

  LibeGetw(fp,field) 
  SymSetype(np,field) 

  LibeGetw(fp,field) 
  SymSetfunc(np,field) 

  LibeGetw(fp,field) 
  SymSetarray(np,field) 
    
  LibeGetw(fp,field) 
  SymSetrank(np,LibeAtoi(field)) 

  LibeGetw(fp,field) 
  SymSetemit(np,LibeAtoi(field)) 

  LibeGetw(fp,field) 
  SymSetstruct(np,field) 

  LibeGetw(fp,field) 
  SymSetident(np,field) 

  LibeGetw(fp,field) 
  SymSetlval(np,field) 

  LibeGetw(fp,field) 
  SymSetref(np,field) 

  LibeGetw(fp,field) 
  SymSetdescr(np,field) 

  LibeGetw(fp,field) 
  SymSetglobal(np,field) 

  LibeGetw(fp,field) 
  SymSetmodule(np,module) 
    
  #Read the rest of the line including the new line character.
  while((ch=LibeGetc(fp)) != NL): 
    tmp=1 
  return(indent) 

int SymReadsym(int fp, struct symbol rtbl, char [*] module) :

  # SymReadsym reads the symbol table from a file.
  #
  # Parameters:
  #   fp   (int)           : File pointer
  #   rtbl (struct symbol) : Symbol table reference
  #                          Empty table on entry
  #                          Tree of tables on return
  #   module               : Module name
  #
  # Returns
  #   OK  (int): if no errors
  #   ERR (int): if an error occured            
  #
  # The symbol table (as printed with SymPrsym) is read
  # and reconstructed in memory. 
  # The layout of the input text file can be described as:
  #   1. Each table entry consist of a single line (with several fields).
  #   2. The first entry of a table is a line where the first field 
  #      contains the string "#first".
  #   3. Each table entry can contain a sub table. Each
  #      subtable is indented with a single space relative to
  #      the table entry.
  #   4. The first line in the file is indented with a single space.
  #      See example below which contain a symbol table with
  #      entries for a function (LibeArrayex) definition.
  # 
  #  #first void void void 0 1 void void void void void void 
  #  LibeArrayex int fdef void 0 1 void void void void void void 
  #   #first void void void 0 1 void void void void void void 
  #    #arglist void void void 0 1 void void void void void void 
  #    #first void void void 0 1 void void void void void void 
  #     line int void void 0 1 void identifier lval void void void 
  #     name char void array 1 1 void identifier lval void void void 
  #     ival int void void 0 1 void identifier lval void void void 
  #     index int void void 0 1 void identifier lval void void void 
  #     bound int void void 0 1 void identifier lval void void void 
  #     #self void LibeArrayex void 0 0 void void void void void void 
  #
  #     The algorith for reading and reconstructing the table in memory
  #     is quite straightforward:
  #
  #       1. Read a line of the table.
  #       2. If the ident does not change relative to
  #          the previous line, enter the table entry into the current table.
  #       3. If the indentation increases, make a new table and put the
  #          entry into the new table. The new table is marked as
  #          a subtable of the last entry in the current table.
  #       4. If the indentation decreases move from the subtable up to
  #          the entry containing the subtable.
  #

  int indent          # Indentation of current table line
  int oldindent       # Indentation of previpus table line
  struct symbol tbl   # Current table pointer
  struct symbol ntbl  # Pointer to new subtable 
  struct symbol np    # Pointer to table entry
  struct symbol mp    # Pointer to table entry
  struct symbol ttbl  # Dummy table
  int i               # Iteration index

  # Save the root node of the symbol table
  tbl=rtbl 

  # Make a dummy table and create a dummy name
  ttbl=SymMktable() 
  SymSetmodule(ttbl,module) 
  mp = SymMkname("dummy",ttbl) 

  # Skip the first line of the table
  indent=Symgetline(fp,mp,module) 
       
  # Initialize the old and current indents
  oldindent = 1 
  indent=1 

  while(OK):
    # Get a table line and exit if the
    # indent is negative.
    indent=Symgetline(fp,mp,module) 
    if(indent <0):
      return(OK) 
       
    # If this is the first line of a subtable, skip
    # the first record.
    if(LibeStrcmp(mp.name,"#first")==OK):
      indent=Symgetline(fp,mp,module) 
       

    # The entry is in the current table
    if(indent == oldindent):
      SymCpytble(ttbl,tbl) 
      oldindent=indent 
       
 
    # The entry is in a subtable, 
    # create a new table
    if(indent > oldindent):
      # Make new table
      ntbl=SymMktable() 
      SymSetmodule(ntbl,module) 
      # Get the last record in the current table 
      np=tbl.last 
      # Store the new table in the last
      # record of the current table using the
      # "tbl" field.
      SymSetable(np,ntbl) 
      # Update current table to new table
      tbl=ntbl 
      # Copy content to new table
      SymCpytble(ttbl,tbl) 
      oldindent = indent 
       

    # The entry is in the enclosing table,
    # move to the entry by starting from the
    # root table and counting indents using
    # the "last" field.
    if(indent < oldindent):
      tbl=rtbl 
      if(indent == 1):
        tbl=rtbl 
      else:
        for(i=0; i<indent; i=i+1):
          tbl=SymGetable(tbl.last) 
      SymCpytble(ttbl,tbl) 
      oldindent=indent 
  LibeClose(fp) 
  return(OK) 
