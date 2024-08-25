# The Sym imodule manages the symbol table.
#
#   
#    Table level 1
#   -------------------     
#   |                 |
#   |   ----------    |         Table level 2
#   |   |        |    |       ----------------
#   |   |        |----------> | 
#   |   |        |    |       | -----------
#   |   ----------    |       |
#   |       |         |       |
#   |       v         |       |
#   |                 |       |
#   |                 |       |
#   -------------------       ---------------- 

include "libe.i"
include "ptree.i"
include "err.i"
include "sym.i"

char [*] SymSetfield(char [*] field, char[*] value):end

# SymEtp is the external Symbol Table
struct symbol SymEtp;       

# SymLtp is the local symbol table
struct symbol SymLtp;       

# SymStp is the string table (not used)
struct symbol SymStp;      
 
struct symbol SymGetetp() :

  # SymGetetp gets the symbol table.                 

  return(SymEtp);
end
 
struct symbol SymSetetp( struct symbol etp) :

  # SymSetetp sets the symbol tableend                 

  SymEtp = etp;
  return(SymEtp);
end

struct symbol SymGetltp() :

  # SymGetltp gets the local symbol table.                 
 
  return(SymLtp);
end

struct symbol SymSetltp( struct symbol ltp) :

  # SymSetltp sets the local symbol table.                 
 
  SymLtp = ltp;
  return(SymLtp);
end

struct symbol SymGetstp() :

 # SymGetstp gets the string table.                 
 
  return(SymStp);
end
 
struct symbol SymSetstp( struct symbol stp) :

  # SymSetstp -- sets the string table.                 

  SymStp = stp;
  return(SymStp);
end

struct symbol SymLookup(char [*] s, struct symbol tp) :

  # SymLookup looks for name s                 
 
  struct symbol np;
      
  np = tp;
  while(np != NULL): 
    if (LibeStrcmp(s, np.name) == OK)
      return(np);       # found it  
    np = np.next;
  end
  return(np=NULL);       # not found  
 end
 
struct symbol SymMkname(char [*] name, struct symbol tp) :

  # SymMkname makes a name.     

  struct symbol np, lp;

  if((np = SymLookup(name, tp)) == NULL) :  # not found  
    np = new(struct symbol);
    if (np == NULL):
      ErrPanic("Out of memory");
      return(np);
    end
    if((np.name = LibeStrsave(name)) == NULL):
      ErrPanic("Out of memory");    
      return(np=NULL);
    end
    lp = tp.last;
    lp.next = np;
    tp.last = np;
    np.next = NULL;
    np.type = LibeStrsave("void");
    np.func = LibeStrsave("void");
    np.array = LibeStrsave("void");
    np.structure = LibeStrsave("void");
    np.tbl = NULL;
    np.ident = LibeStrsave("void");
    np.rank = 0;
    np.lval = LibeStrsave("void");
    np.ref = LibeStrsave("void");
    np.descr = LibeStrsave("void");
    np.global = LibeStrsave("void");
    np.emit = OK;
  end 
  else
    np = NULL;

  return(np);          # Return pointer to node  
end     

struct symbol SymRmname(char [*] name, struct symbol tp) :

  # SymRmname removes a name.     
 
  struct symbol np, sp, prev;
  np = tp;
  sp = NULL;
  prev = np;
  while(np != NULL): 
    if (LibeStrcmp(name, np.name) == OK):
      sp = np;
      np = NULL;
    end
    else:
      prev = np;
      np = np.next;
    end
  end 
 np = sp;
 if(np == NULL) 
   return(np);

 if(np.next == NULL)
   prev.last = prev;
   prev.next = np.next;
   delete(np.name);
   delete(np.type);
   delete(np.func); 
   delete(np.array);
   delete(np.structure);
   delete(np.tbl);
   delete(np.ident);
   delete(np.lval);
   delete(np.ref);
   delete(np.descr);
  return(prev);
end     
 
char [*] SymGetname(struct symbol np) :

  # SymGetname gets a name.

  return(np.name);
end
 
struct symbol SymMktable() :

  # SymMktable  makes a new symbol table.     

  struct symbol tp;   # Table pointer  

  tp = new(struct symbol);
  if (tp == NULL):
    ErrPanic("Out of memory");
    return(tp);
  end
  tp.name =  LibeStrsave("#first");
  tp.type =  LibeStrsave("void");
  tp.tbl =   NULL;
  tp.func =  LibeStrsave("void");
  tp.ref =   LibeStrsave("void");
  tp.descr =  LibeStrsave("void");
  tp.array = LibeStrsave("void");
  tp.structure =  LibeStrsave("void");
  tp.ident =  LibeStrsave("void");
  tp.lval =  LibeStrsave("void");
  tp.global = LibeStrsave("void");
  tp.emit = OK;
  tp.next =  NULL;
  tp.last = tp;

  return(tp);           # Return pointer to first node  
end     
 
struct symbol  SymMvnext(struct symbol np) :

 # SymMvnext moves to next node.     

  if(np == NULL)
    return(np) ;
  else
    return (np.next);
end
 
struct symbol SymSetable(struct symbol np, struct symbol tp) :

  # SymSetable sets a table.     

  np.tbl = tp;
  return(np);
end
 
struct symbol SymGetable(struct symbol np) :

  # SymGetable gets a table.

  return(np.tbl);
end
 
int SymSetype(struct symbol np, char [*] type) :

  # SymSetype sets type.     

  np.type = SymSetfield(np.type, type);
  return(OK);
end
 
char [*] SymGetype(struct symbol np) :

  # SymGetype gets type.

  return(np.type);
end
 
int SymSetfunc(struct symbol np, char [*] func) :

  # SymSetfunc sets the function field.     

  np.func = SymSetfield(np.func, func);
  return(OK);
end
 
char [*] SymGetfunc(struct symbol np) :

  # SymGetfunc gets the function field.

  return(np.func);
end
 
int SymSetarray(struct symbol np, char [*] array) :

  # SymSetarray sets the array field.     

  np.array = SymSetfield(np.array, array);
  return(OK);
end
 
char [*] SymGetarray(struct symbol np) :

  # SymGetarray gets the array field.

  return(np.array);
end

int SymSetstruct(struct symbol np, char [*] structure) :

 # SymSetstruct sets the structure field.     
 
  np.structure = SymSetfield(np.structure, structure);
  return(OK);
end
 
char [*] SymGetstruct(struct symbol np) :

 # SymGetstruct gets the structure field.

 return(np.structure);

end
 
int SymSetident(struct symbol np, char [*] ident) :

  # SymSetident sets the identifier field.     

  np.ident = SymSetfield(np.ident, ident);
  return(OK);
end

char [*] SymGetident(struct symbol np) :

  # SymGetident gets the identifier field.
 
  return(np.ident);
end
 
int SymSetlval(struct symbol np, char [*] lval) :

  # SymSetlval sets the lval field.     

  np.lval = SymSetfield(np.lval, lval);
  return(OK);
end
 
char [*] SymGetlval(struct symbol np) :

  #SymGetlval -- get the lval field.

  return(np.lval);
end
 
int SymSetrank(struct symbol np, int rank) :

  #SymSetrank sets the rank field.     

  np.rank = rank;
  return(OK);
end

int SymGetrank(struct symbol np) :

  # SymGetrank gets the rank field.
 
     return(np.rank);
end
 
int SymSetemit(struct symbol np, int emit) :

  # SymSetemit sets the emit field.     

   np.emit = emit;
   return(OK);
end
 
int SymGetemit(struct symbol np) :

  # SymGetrank gets the rank field.

  return(np.emit);
end
 
int SymSetref(struct symbol np, char  [*] ref) :

  # SymSetref sets the ref field.     

  np.ref = SymSetfield(np.ref, ref);
  return(OK);
end
 
char [*] SymGetref(struct symbol np) :

  # SymGetref  gets the ref field.

  return(np.ref);
end
 
int SymSetdescr(struct symbol np, char [*] descr) :

  # SymSetdescr sets the descr field.     

  np.descr = SymSetfield(np.descr, descr);
  return(OK);
end
 
char [*] SymGetdescr(struct symbol np) :

  # SymGetdescr gets the descr field.

  return(np.descr);
end

int SymSetglobal(struct symbol np, char [*] global) :

  # SymSetglobal sets the global field.     
 
  np.global = SymSetfield(np.global, global);
  return(OK);
end
 
char [*] SymGetglobal(struct symbol np) :

  # SymGetdescr gets the global field.

  return(np.global);
end
 
int SymRmtable(struct symbol p) :

  # SymRmtable removes the symbol table.

  struct symbol next, prev;

  if(p==NULL)return(ERR);
  prev=NULL;
  while(p != NULL):
    next=p.next;
    if(LibeStrcmp("#arglist", p.name)==ERR):    
      if(LibeStrcmp("#self", p.name) == ERR):
      if(LibeStrcmp("#first", p.name) == ERR):
      if(p.tbl != NULL):
        SymRmtable(p.tbl);
        p.tbl=NULL;
      end
      if(prev != NULL)
        prev.next = next;
      delete(p.name);
      delete(p.type);
      delete(p.func); 
      delete(p.array);
      delete(p.structure);
      delete(p.tbl);
      delete(p.ident);
      delete(p.lval);
      delete(p.ref);
      delete(p.descr);
      delete(p);
    end
    end
    end
    else
      prev=p;
    p=next;
  end
  return(OK);
end

struct symbol SymLook(char [*] name) :

  # SymLook finds identifier.
 
  struct symbol tp, ap;

  if((tp = SymLookup(name, SymEtp)) == NULL):
    if((tp = SymLookup(name, SymLtp)) == NULL):
      tp = SymLookup("#arglist", SymLtp);
      if(tp==0) return(tp);
      ap = SymGetable(tp);
      if(ap==0) return(ap);
      if((tp = SymLookup(name,ap)) == NULL): 
        tp = SymLookup(name, SymEtp);
      end
    end
  end
  return(tp);
end 
 
char [*] SymSetfield(char [*] field, char [*] value) :

  # SymField sets a character field.     

  if(field != NULL)
    delete(field);
  if(value == NULL)
    field = NULL;
  else if((field = LibeStrsave(value)) == NULL):
    ErrPanic("Out of memory");
    return(field);
  end
  return (field);
end

int SymCpytble(struct symbol tp, struct symbol up) :

 # SymCpytble copies table.
 
  struct symbol wp;

  tp = SymMvnext(tp);
  while(tp != NULL):
    wp = SymMkname(SymGetname(tp),up); 
    SymSetype(wp,SymGetype(tp));
    SymSetfunc(wp,SymGetfunc(tp));
    SymSetarray(wp,SymGetarray(tp));
    SymSetrank(wp,SymGetrank(tp));
    SymSetstruct(wp,SymGetstruct(tp));
    SymSetident(wp,SymGetident(tp));
    SymSetlval(wp,SymGetlval(tp));
    SymSetref(wp,SymGetref(tp));
    SymSetdescr(wp,SymGetdescr(tp));
    SymSetemit(wp,SymGetemit(tp));
    tp = SymMvnext(tp);
  end
  return(OK);
end 
 
int SymPrsym(struct symbol p, int level) :

  # SymPrsym prints the symbol table.

  int i;
  int fp;
  struct symbol tp;
       
  fp = stdout;
  if(p == NULL)
    return(ERR);
  while(p != NULL):
    i = 0;
    while(i <= level):
      LibePuts(fp, " ");
      i = i + 1;
    end
    LibePuts(fp, p.name); LibePuts(fp, " ");    
    LibePuts(fp, p.type); LibePuts(fp, " ");    
    LibePuts(fp, p.func); LibePuts(fp, " ");    
    LibePuts(fp, p.array); LibePuts(fp, " ");    
    LibePuti(fp, p.rank); LibePuts(fp, " ");    
    LibePuti(fp, p.emit); LibePuts(fp, " ");    
    LibePuts(fp, p.structure); LibePuts(fp, " ");    
    LibePuts(fp, p.ident); LibePuts(fp, " ");    
    LibePuts(fp, p.lval); LibePuts(fp, " ");    
    LibePuts(fp, p.ref); LibePuts(fp, " ");    
    LibePuts(fp, p.descr); LibePuts(fp, " ");    
    LibePuts(fp, p.global); LibePuts(fp, " ");    
    LibePuts(fp,"\n");
    LibeFlush(fp);

    if(p.tbl != NULL):
       tp = p.tbl;
       level = level + 1;
       SymPrsym(tp, level);
       level = level - 1;
    end
    p = p.next;
 end
    LibeFlush(fp);
    return(OK);
end
