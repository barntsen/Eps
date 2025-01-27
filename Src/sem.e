# Sem performs semantic checking of the parse tree 

import libe   # Include library definitions      
import sym    # Include symbol table interface   
import ptree  # Include parse tree interface     
import err    # Include interface to error       
import scanpath


# Forward statements
int SemCompstmnt(struct tree p) : 
  pass

int SemStmnt(struct tree p)     : 
  pass

struct tree SemExpr(struct tree p): 
  pass

struct tree SemUnexpr(struct tree p): 
  pass

struct tree SemPrimexpr(struct tree p): 
  pass


int SemSerror(struct tree p, char [*] s1, char [*] s2) :
  
  # SemSError prints semantic errors

  ErrSerror(PtreeGetfile(p), PtreeGetdef(p), PtreeGetline(p), s1,s2);
  return(OK);

int SemImport(struct tree p, struct symbol etp) :
  
  # SemImport reads a module file
  # and installs imported symbols into the external symbol table

  char [*] module;
  char [*] file;
  char [*] path;
  char [*] sysfile;
  int fd;
  struct symbol stp;  # Module symbol table

  module=PtreeGetdef(p);
  file = LibeStradd(module,".m");

  fd = LibeOpen(file,"r");
  if(fd == ERR): 
    path = ScanPath();
    sysfile = LibeStradd(path,file);
    fd = LibeOpen(sysfile,"r");
    delete(sysfile);
    delete(path);
    if(fd == ERR):
      SemSerror(p,"Module file not found: ",file);
    

  

  
  stp = SymMktable();
  SymReadsym(fd,stp,module);
  LibeClose(fd);

  #tp = SymMvnext(stp) ; 
  #while(tp != NULL) :  
  #  if(SymLookup(name,etp) != NULL) :
  #    prev=tp;
  #    tp=SymMvnext(tp);
  #    SymRmname(name,stp);  
  #  
  #
  #  else :
  #    tp=SymMvnext(tp);
    
      
  

  etp=SymAddtble(etp,stp);
  return(OK);



int SemDeclaration(struct tree p, struct symbol tp) :

  # SemDeclaration checks single declaration.  
 
  struct tree np,sp; 
  struct symbol up;
  int rank;
  int l;
  char [*] s;
  char [*] global;

  PtreeSetype(p, PtreeGetdef(p));       # Set the type field  
  global = PtreeGetglobal(p);

  # Compute the rank if this was an array  

  rank = 0;
  if(LibeStrcmp(PtreeGetarray(p),"array")):
    np = PtreeMvchild(p);
    np = PtreeMvchild(np);
    rank=1;
    while((np=PtreeMvsister(np)) != NULL): 
      rank=rank+1;
    np = PtreeMvchild(p);   # Move to the list of identifiers  
    np = PtreeMvsister(np);
  
 
 
  else:
    np = PtreeMvchild(p);  # Move to the list of identifiers  
  
 
 

  # Process the list of identifiers  

  while(np != NULL) :
    PtreeSetype(np, PtreeGetype(p));    # Set the type field  
    if((up = SymMkname(PtreeGetdef(np), tp)) == NULL):
      SemSerror(np,"Multiple declaration", PtreeGetdef(np));
                
    else:

     # Record information in symbol table:    

      SymSetident(up, "identifier");
      SymSetype(up, PtreeGetype(p));  
      if(LibeStrcmp(global,"global")==OK):
        SymSetglobal(up,"global");
      
 
 
      if(LibeStrcmp(PtreeGetype(p),"const")==OK):
        sp = PtreeMvchild(np);
        sp = PtreeMvchild(sp);
        if(LibeStrcmp(PtreeGetname(sp),"unexpr")==OK):
          sp = PtreeMvchild(sp);
          l = LibeStrlen(PtreeGetdef(sp))+1+3;
          s = new(char[l]);
          LibeStrcpy("(-",s);
          LibeStrcat(PtreeGetdef(sp), s);
          LibeStrcat(")", s);
          PtreeSetdef(sp,s);
          delete(s);
        
 
 
        SymSetype(up, PtreeGetname(sp));
        SymSetdescr(up, PtreeGetdef(sp)); 
        SymSetemit(up,ERR);
      
 
 
      SymSetlval(up, "lval");
      if(LibeStrcmp(PtreeGetstruct(p),"struct")):
        if((SymLookup(PtreeGetype(p), SymGetetp())) == NULL):
          SemSerror(p,"Undefined structure", PtreeGetype(p));
        SymSetstruct(up, PtreeGetstruct(p));
      
 
 
      SymSetarray(up, PtreeGetarray(p));
      SymSetrank(up, rank);
      PtreeSetrank(np,rank);
    
 
 
    np = PtreeMvsister(np);
  
 
 
  return (OK);

 

int SemDeclarations(struct tree p, struct symbol tp) :

  # SemDeclarations checks declarations.  
 
  while(p != NULL) :
    SemDeclaration(p,tp);
    p = PtreeMvsister(p);
  
 
 
  return (OK);

 
  
int SemStructdecl(struct tree p, struct symbol tp) :

  # SemStructdecl checks structure declarations.  
  # If not defined before the
  # structure name is entered in the global
  # symbol table together with all components.
 
  struct symbol up, uup;
  char [*] structure;

  structure = PtreeGetdef(p);
  p = PtreeMvchild(p);
  p = PtreeMvchild(p);
  if(LibeStrcmp(PtreeGetname(p), "declarations")):
    up = SymMktable();
    if((uup = SymMkname(structure, tp)) == NULL):
      SemSerror(p,"Multiple declaration", structure);
    else :
      SymSetable(uup, up);
      SymSetstruct(uup, "structdef");
      SymSetype(uup, structure);
      SemDeclarations(PtreeMvchild(p), up);
    
 
 
  
 
  
  return (OK);

 
 
int SemArgtype(struct tree p, struct symbol tp) :
 
  # SemArgtype checks if argument types of parse tree matches symbol table.
  #
  # Parameters :
  #   p:   Parse tree function node
  #   tp : External symbol table entry for function
  #
  # Returns : OK or exits
  
  char[*] name;

  # Get the name of the variable
  name = PtreeGetdef(p);

  # First process the type
  if(LibeStrcmp(SymGetype(tp),PtreeGetype(p))== ERR):
    SemSerror(p,"Argument1 type does not match forward declaration",name);
  
 
  if(LibeStrcmp(SymGetref(tp),PtreeGetref(p))==ERR):
    SemSerror(p,"Argument2 type does not match forward declaration",name);
  

  if(LibeStrcmp(SymGetarray(tp),PtreeGetarray(p))==ERR):
    SemSerror(p,"Argument3 type does not match forward declaration",name);
  

  if((SymGetrank(tp)!= PtreeGetrank(p))):
    SemSerror(p,"Argument4 type does not match forward declaration", name);
  

  
  return(OK);



  
int SemArray(struct tree p, struct symbol tp) :

  # SemArray checks array references.
 
  struct tree np;
  int rank;

  if(LibeStrcmp(PtreeGetarray(p),"array") == ERR):
    SemSerror(p,"Not an array", PtreeGetdef(p));
    return(ERR);
  
 
 

  PtreeSetname(p,"identifier");
  np = PtreeMvchild(p);

  if(LibeStrcmp(PtreeGetname(np),"exprlist") == ERR):
     SemSerror(p, "Missing array indexes", PtreeGetdef(p)); 
     return(ERR);
  
 
  
  if((np = PtreeMvchild(np)) != NULL):
    rank = 0;
    while(np != NULL):
      SemExpr(np);
      np = PtreeMvsister(np);
      rank = rank + 1;
    
 
  
  
 
 
  if(rank != SymGetrank(tp)):
    SemSerror(p,"Illegal array dimension", PtreeGetdef(p)); 
    return(ERR);
  
 
 
  PtreeSetrank(p, rank);

  return(OK);

 

int SemStructure(struct tree p, struct symbol tp) :

  # SemStructure checks structure reference.
 
  char [*] temp;
  struct symbol up, uup;
  struct tree np;

  if(LibeStrcmp(PtreeGetstruct(p),"struct") == ERR):
    SemSerror(p,"Not a structure", PtreeGetdef(p));
    return(ERR);
  
 
 
  PtreeSetname(p,"identifier");

  temp = SymGetype(tp);
  if((up = SymLook(temp)) == NULL):
    if((up = SymLook(temp)) == NULL):
       SemSerror(p,"Undeclared structure type"," ");
       return(ERR);
    
 
  
  
 
 
  if(LibeStrcmp(SymGetstruct(tp), "structdef")):
    SemSerror(p,"Struct names can not be used as a variable", PtreeGetdef(p));
    return(ERR);
  
 
 
  np = PtreeMvchild(p);
  if(np == 0):
    SemSerror(p, "Missing structure selector", PtreeGetdef(p)); 
    return(ERR);
  
 
  

  if(LibeStrcmp(PtreeGetarray(p),"array")):
    np = PtreeMvsister(np);
  
 
 
  if(np == 0):
    SemSerror(p, "Missing array index", PtreeGetdef(p));
    return(ERR);
  
 
  
  uup = SymGetable(up);
  if((tp  = SymLookup(PtreeGetdef(np), uup)) == NULL):
    SemSerror(np, "Undeclared structure member", PtreeGetdef(np));
               
    return(ERR);
  
 
 

  if(LibeStrcmp(SymGetarray(tp),"array")):
    if(PtreeMvchild(np) != NULL):
      SemArray(np, tp);
      if(LibeStrcmp(SymGetstruct(tp),"struct")):
        PtreeSetref(np,"sref");
      
 
 
    
 
 
    else:
      PtreeSetref(np,"aref");
  
 
 
  else if(LibeStrcmp(SymGetstruct(tp),"struct")):
    PtreeSetref(np,"sref");
  
 
 
  PtreeSetype(np, SymGetype(tp));
  PtreeSetarray(np, SymGetarray(tp));
  PtreeSetrank(np, SymGetrank(tp));
  PtreeSetlval(np, SymGetlval(tp));
  PtreeSetype(p, SymGetype(tp));
  PtreeSetref(p,PtreeGetref(np));
  PtreeSetrank(p, SymGetrank(tp));

  return(OK);

 

int SemId(struct tree p) :

  # SemId checks identifier
 
  struct symbol  tp;
  struct tree np;

  if((tp = SymLook(PtreeGetdef(p))) == NULL):
    SemSerror(p,"Undeclared identifier", PtreeGetdef(p));
               
  
 
 
  if(LibeStrcmp(SymGetype(tp),"iconstant")==OK):
    PtreeSetname(p,SymGetype(tp));
    PtreeSetdef(p,SymGetdescr(tp));
    PtreeSetype(p,"int");
    return(OK);
  
 
 
  else if(LibeStrcmp(SymGetype(tp),"rconstant")==OK):
    PtreeSetname(p,SymGetype(tp));
    PtreeSetdef(p,SymGetdescr(tp));
    PtreeSetype(p,"float");
    return(OK);
  
 
 
  else if(LibeStrcmp(SymGetype(tp),"sconstant")==OK):
    PtreeSetname(p,SymGetype(tp));
    PtreeSetdef(p,SymGetdescr(tp));
    PtreeSetype(p,"char");
    PtreeSetarray(p,"array");
    PtreeSetref(p,"aref");
    PtreeSetrank(p,1);
    return(OK);
  
 
 
  if(LibeStrcmp(SymGetstruct(tp), "structdef")):
    SemSerror(p,"Struct names can not be used as a variable",PtreeGetdef(p)); 
                
  
 
 
  PtreeSetype(p, SymGetype(tp));
  PtreeSetarray(p, SymGetarray(tp));
  PtreeSetrank(p, SymGetrank(tp));
  PtreeSetstruct(p, SymGetstruct(tp));
  PtreeSetlval(p, SymGetlval(tp));

  np = PtreeMvchild(p);
  if(np != NULL):
    if(LibeStrcmp(PtreeGetname(np), "exprlist")):
      SemArray(p,tp);
      if(PtreeMvsister(np) != NULL):
        SemStructure(p,tp);
      else:
        if(LibeStrcmp(PtreeGetstruct(p),"struct")):
          PtreeSetref(p,"sref");
      
 
  
    
 
 
    else if(LibeStrcmp(PtreeGetname(np), "selector")):
      SemStructure(p,tp);
  
 
  else:
    if(LibeStrcmp(PtreeGetarray(p),"array")):
      PtreeSetref(p,"aref");
    else if(LibeStrcmp(PtreeGetstruct(p),"struct")):
      PtreeSetref(p,"sref");
  
 
 
  return(OK);

 

int SemFcall(struct tree p) :

  # Semfcall checks function call.
 
  struct tree np;
  struct symbol tp;
  char[*] type;
    
  if(LibeStrcmp(PtreeGetname(p),"fcall")):
    if((tp = SymLookup(PtreeGetdef(p), SymGetetp())) == NULL):
       SemSerror(p,"Undeclared function", PtreeGetdef(p));
                  
       return(ERR);
    
 
 
    if(LibeStrcmp(SymGetfunc(tp), "fdef") == ERR):
       SemSerror(p,"Not a function", PtreeGetdef(p));
       return(ERR);
    
 
 
    PtreeSetype(p, SymGetype(tp));
    PtreeSetstruct(p, SymGetstruct(tp));
    PtreeSetarray(p, SymGetarray(tp));
    PtreeSetrank(p, SymGetrank(tp));
    if(LibeStrcmp(PtreeGetarray(p),"array")):
      PtreeSetref(p,"aref");
    
 
 
    else if(LibeStrcmp(PtreeGetstruct(p),"struct")):
      PtreeSetref(p,"sref");
    
 
 

    # Get the symbol table for the function  

    tp = SymGetable(tp);         
    tp = SymLookup("#arglist", tp); 
    if(tp != NULL):
      tp = SymGetable(tp);

    if((np=PtreeMvchild(p))==0):
      if((tp=SymMvnext(tp))!= NULL):
        SemSerror(p,"Function call does not match declaration", PtreeGetdef(p));
          
        return(ERR);
      
 
 
      return(OK);  # No arguments to check  
    
 
 

    # Start processing of the argument list  

    np = PtreeMvchild(PtreeMvchild(p));
    while(np != NULL):
      tp = SymMvnext(tp); # Get the next table entry  
      if(tp == NULL):
        SemSerror(p,"Function call does not match declaration", PtreeGetdef(p));
          
        return(ERR);
      
 
  
      type = SymGetype(tp);
      SemExpr(np);
      if(LibeStrcmp(type, PtreeGetype(np)) == ERR):
        SemSerror(p,"Function call does not match declaration", PtreeGetdef(p));
          
        return(ERR);
      
 
  
      if(LibeStrcmp(SymGetarray(tp), "array")):
        if(LibeStrcmp(PtreeGetref(np),"aref") == ERR):
          SemSerror(p,"Function call does not match declaration", \
                    PtreeGetdef(p));
                 
        
 
 
        if(PtreeGetrank(np) != SymGetrank(tp)):
           SemSerror(p,"Illegal array rank in function call" \
                 , PtreeGetdef(p));
        
 
 
      
 
  
      np = PtreeMvsister(np);
    
 
 
    if(SymMvnext(tp) != NULL):
      SemSerror(p,"Function call does not match declaration", PtreeGetdef(p));
       
      return(ERR);
    
 
  
  
 
 
  return(OK);

 

struct tree SemExprlist(struct tree p) :

  # SemExprlist checks expression list.
 
  if(LibeStrcmp(PtreeGetname(p),"exprlist")):
    p = PtreeMvchild(p);
    while(p != NULL):
      SemExpr(p);
      p = PtreeMvsister(p);
    
 
 
  
 
 
  return(p);

 

int SemCopytype(struct tree p, struct tree np) :

  #SemCopytype copy type fields.
 
  PtreeSetype(np, PtreeGetype(p));
  PtreeSetstruct(np, PtreeGetstruct(p));
  PtreeSetarray(np, PtreeGetarray(p));
  PtreeSetref(np, PtreeGetref(p));
  PtreeSetlval(np, PtreeGetlval(p));
  PtreeSetrank(np, PtreeGetrank(p));
  return(OK);

 

int SemCast(struct tree p) :

  #SemCast checks cast expressions.
 
  struct tree sp, np;
  int resultrank;
  char [*] resultype, exptype;
  char [*] resultref, expref;

  resultref="void";
  expref = "void";
  if(LibeStrcmp(PtreeGetname(p),"cast")):
    np = PtreeMvchild(p);
    resultype = PtreeGetdef(np);    # The result basic type   
    PtreeSetype(np, resultype);

    resultrank = 0;
    if(LibeStrcmp(PtreeGetarray(np), "array")):
      sp = PtreeMvchild(np);
      sp = PtreeMvchild(sp);
      sp = PtreeMvchild(sp);
      SemExprlist(sp);
      sp = PtreeMvchild(sp);
      resultrank=1;
      while((sp=PtreeMvsister(sp)) != NULL):
        resultrank=resultrank+1;
      
 
 
      PtreeSetrank(np, resultrank);
      PtreeSetrank(p, resultrank);
      PtreeSetref(np,"aref");
      resultref = LibeStrsave("aref");
    
 
 
    else if(LibeStrcmp(PtreeGetstruct(np),"struct")):
      PtreeSetref(np,"sref");
      resultref = LibeStrsave("sref");
    
 
 
    else:
      resultref = LibeStrsave("void");

    SemCopytype(np,p);
    
  
    # Process the expression to convert from  

    np = PtreeMvsister(np);
    SemExpr(np);

    # Save type of expression in exprtype:       

    exptype = PtreeGetype(np);
    expref  = PtreeGetref(np);

    # Check that conversions are legal:   

    if(LibeStrcmp(resultref, expref) == ERR):
      SemSerror(p,"Illegal conversion"," ");
      return(ERR);
    
 
 

    if((LibeStrcmp(resultref,"aref") == ERR)|| \
       (LibeStrcmp(resultref,"sref") == ERR)):
      if(LibeStrcmp(resultype, "complex")):
        SemSerror(p,"Illegal conversion", " ");
      return(ERR);
                     
      if(LibeStrcmp(resultype,"int")):
        if(LibeStrcmp(exptype, "char") == ERR):
          if(LibeStrcmp(exptype, "float") == ERR):
            SemSerror(p,"Illegal conversion", " ");
        return(ERR);
      
 
 
      else if(LibeStrcmp(resultype,"char")):
        if(LibeStrcmp(exptype, "int") == ERR):
          SemSerror(p,"Illegal conversion", " ");
        return(ERR);
      
 
 
      else if(LibeStrcmp(resultype,"float")):
        if(LibeStrcmp(exptype, "int") == ERR):
          SemSerror(np,"Illegal conversion", " ");
        return(ERR);
      
 
 
    
 
 
  
 
 
  return(OK);

 

int SemNew(struct tree p) :

  # SemNew checks new operator.
 
  struct tree np, sp;
  int rank;


  if(LibeStrcmp(PtreeGetname(p),"new")):
    np = PtreeMvchild(p);
    PtreeGetdef(np);    
    PtreeSetype(np, PtreeGetdef(np));
    SemCopytype(np,p);
 
    if(LibeStrcmp(PtreeGetarray(np),"array") == ERR):
      if(LibeStrcmp(PtreeGetstruct(np),"struct") == ERR):
        SemSerror(np,"Argument limited to array or structure type","  ");
      
 
 
    
 
  
    if(LibeStrcmp(PtreeGetarray(np), "array")):
      sp = PtreeMvchild(np);
      sp = PtreeMvchild(sp);
      sp = PtreeMvchild(sp);
      sp = PtreeMvchild(sp);
      rank=1;
      if(sp==NULL):
        SemSerror(np,"Missing array size in new operator"  , " ");
             
      
 
 
      SemExpr(sp);
      while((sp=PtreeMvsister(sp)) != NULL):
        SemExpr(sp);
        rank=rank+1;
      
 
 
      PtreeSetrank(np, rank);
      PtreeSetrank(p, rank);
      PtreeSetref(p,"aref");
    
 
 
    else:
      PtreeSetref(p,"sref");
  
 
 
  return(OK);

 
 
int SemDelete(struct tree p) :

  # SemDelete checks delete operator.
 
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"delete")):
    np = PtreeMvchild(p);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetref(np),"aref") == ERR):
      if(LibeStrcmp(PtreeGetref(np),"sref") == ERR):
        SemSerror(p,"not a array or structure", PtreeGetdef(p));               
                  
      
 
 
    
 
 
    else:
      PtreeSetype(p, PtreeGetype(np));
      PtreeSetref(p, PtreeGetref(np));
    
 
 
  
 
 
  return(OK);

 
 
int SemCmplx(struct tree p) :

  # SemCmplx checks cmplx operator.
 
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"cmplx")):
    np = PtreeMvchild(p);
    np = PtreeMvchild(np);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetype(np), "float") == ERR):
      SemSerror(p,"Argument to cmplx is not a float", PtreeGetdef(p));
                
      return(ERR);
    
 
 
    if(LibeStrcmp(PtreeGetref(np), "aref") || \
       LibeStrcmp(PtreeGetref(np), "sref")):
      SemSerror(p,"Argument to cmplx is not a scalar",PtreeGetdef(p)); 
      
      return(ERR);
    
 
 
    np = PtreeMvsister(np);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetype(np), "float") == ERR):
      SemSerror(p,"Argument to cmplx is not a float", PtreeGetdef(p));
                
    
 
 
    if(LibeStrcmp(PtreeGetref(np), "aref") || \
       LibeStrcmp(PtreeGetref(np), "sref")):
      SemSerror(p,"Argument to cmplx is not a scalar", PtreeGetdef(p));
                
      return(ERR);
    
 
 
    PtreeSetype(p,"complex");
  
 
 
  return(OK);

 

int SemRe(struct tree p) :

  # SemRe checks Re operator.
 
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"re")):
    np = PtreeMvchild(p);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetype(np), "complex") == ERR):
      SemSerror(p,"Argument to re is not a of type complex", PtreeGetdef(p));
      
      return(ERR);
    
 
 
    if(LibeStrcmp(PtreeGetref(np), "aref") || \
       LibeStrcmp(PtreeGetref(np), "sref")):
      SemSerror(p,"Argument to re is not a scalar", PtreeGetdef(p));
      
      return(ERR);
    
 
 
    PtreeSetype(p,"float");
  
 
 
  return(OK);

 

int SemLen(struct tree p) :

  # SemLen checks Len operator.
 
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"len") == OK):
    PtreeSetype(p,"int");
    np = PtreeMvchild(p);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetref(np),"aref") == ERR):
      SemSerror(p,"not an array", PtreeGetdef(p));
    
 
 
    np = PtreeMvsister(np);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetref(np),"aref")):
      SemSerror(p, "not a scalar", PtreeGetdef(p));
    
 
 
    if(LibeStrcmp(PtreeGetype(np),"int") == ERR):
      SemSerror(p,"not an integer expression", PtreeGetdef(p));
      
    
 
 
    if((np=PtreeMvsister(np)) != NULL):
      SemSerror(p, "too many arguments", PtreeGetdef(p));
    
 
 
  
 
 
  return(OK);


 
 
int SemIm(struct tree p) :

  # SemIm checks Im operator.
 
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"im")):
    np = PtreeMvchild(p);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetype(np), "complex") == ERR):
      SemSerror(p,"Argument to re is not of type complex",PtreeGetdef(p)); 
      
      return(ERR);
    
 
 
    if(LibeStrcmp(PtreeGetref(np), "aref")|| \
       LibeStrcmp(PtreeGetref(np), "sref")):
       
      SemSerror(p,"Argument to re is not a scalar", PtreeGetdef(p));
                
      return(ERR);
    
 
 
    PtreeSetype(p,"float");
  
 
 
  return(OK);

 
 
int SemSizeof(struct tree p) :

  # SemSizeof checks sizeof operator.
 
  if(LibeStrcmp(PtreeGetname(p),"sizeof")):
    PtreeSetype(p, "int");
  
 
 
  return(OK);

 


int SemComparetype(struct tree p, struct tree np) :

  # SemComparetype compares type fields.
 
  int rval;

  rval = OK;
  if(LibeStrcmp(PtreeGetype(p), PtreeGetype(np)) == ERR):
    rval = ERR;
  if(LibeStrcmp(PtreeGetref(p), PtreeGetref(np)) == ERR):
    if(LibeStrcmp(PtreeGetname(np), "iconstant")):
      if(LibeStrcmp(PtreeGetdef(np),"0")):
        rval = OK;
      else:
        rval = ERR;
    
 
 
    else:
      rval = ERR;
  
 
 
  else if(LibeStrcmp(PtreeGetref(p),"aref") == OK):
    if(PtreeGetrank(p) != PtreeGetrank(np)):
      rval = ERR;
  
 
 
  return (rval);

 
  
struct tree SemAsgexpr(struct tree p) :
  
  # SemAsgexpr checks assignment expressions.
 
  struct tree np;

  np = PtreeMvchild(p);
  if(LibeStrcmp(PtreeGetlval(np), "lval") == ERR):
     SemSerror(np,"Not a left value", PtreeGetdef(np));
                
  
 
 
  else:
    PtreeSetlval(p, "lval");
  SemCopytype(np, p);
  return(p);

 

struct tree SemRelexpr(struct tree p) :

  # SemRelexpr checks relational expression.
 
  struct tree np, rp;

  np = PtreeMvchild(p);
  rp = PtreeMvsister(np);
  
  if(LibeStrcmp(PtreeGetdef(p),"==") == ERR):
    if(LibeStrcmp(PtreeGetdef(p),"!=") == ERR):
      if((LibeStrcmp(PtreeGetref(np),"aref"))|| \
         (LibeStrcmp(PtreeGetref(np),"sref"))):
        SemSerror(p,"Illegal operation", " ");
      
 
  
      else if((LibeStrcmp(PtreeGetref(rp),"aref"))|| \
        (LibeStrcmp(PtreeGetref(np),"sref"))):
         SemSerror(p,"Illegal operation", " ");
      
 
 
    
 
  
    else if((LibeStrcmp(PtreeGetype(np), "complex"))): 
      SemSerror(p,"Illegal operation", " ");
    
 
 
  
 
 
  PtreeSetype(p, "int");
  PtreeSetlval(p, "void");
  PtreeSetstruct(p, "void");
  return(p);

 
 
struct tree SemAddexpr(struct tree p) :

  # SemAddexpr checks add expression.
 
  struct tree np, rp;
  
  np = PtreeMvchild(p);
  rp = PtreeMvsister(np);
  if((LibeStrcmp(PtreeGetref(np),"sref"))):
    SemSerror(np,"Illegal operation", " ");
  
 
  
  else if((LibeStrcmp(PtreeGetref(rp),"sref"))):
     SemSerror(np,"Illegal operation", " ");
  
 
 
  else: 
    SemCopytype(np, p);
    PtreeSetlval(p, "void");
  
 
 
  return(p);

 

 
  
struct tree SemBinexpr(struct tree p) :

  # SemBinexpr checks binary expression
 
  struct tree leftp, rightp, np;

  np = p;
  if(LibeStrcmp(PtreeGetname(p), "binexpr")):
    p = PtreeMvchild(p);    
    leftp = SemUnexpr(p);
    p = PtreeMvsister(p);    
    rightp = SemUnexpr(p);
    if(SemComparetype(leftp, rightp) == ERR):
      SemSerror(p,"Type error", " ");
      return (p);
    
 
 
    else:
      if((LibeStrcmp(PtreeGetdef(np), "="))):
        SemAsgexpr(np); 
        
      else if((LibeStrcmp(PtreeGetdef(np), "!=")) || \
              (LibeStrcmp(PtreeGetdef(np), "==")) || \
              (LibeStrcmp(PtreeGetdef(np), "||")) || \
              (LibeStrcmp(PtreeGetdef(np), "<=")) || \
              (LibeStrcmp(PtreeGetdef(np), ">=")) || \
              (LibeStrcmp(PtreeGetdef(np), "<") ) || \
              (LibeStrcmp(PtreeGetdef(np), ">"))  || \
              (LibeStrcmp(PtreeGetdef(np), "&&"))):
              SemRelexpr(np);               
      
 
 
      else if((LibeStrcmp(PtreeGetdef(np), "+")) || \
             (LibeStrcmp(PtreeGetdef(np), "-")) ||  \
             (LibeStrcmp(PtreeGetdef(np), "*")) ||  \
             (LibeStrcmp(PtreeGetdef(np), "/"))):
              SemAddexpr(np);
      
 
 
      return (np);
    
 
 
  
 
 
  else:
    return (SemUnexpr(p));

 

struct tree SemExpr(struct tree p) :

  # SemExpr checks expressions.
 
  struct tree sp;    

  sp = PtreeMvchild(p);
  sp = SemBinexpr(sp);
  SemCopytype(sp, p);
  return p;

 


struct tree SemUnexpr(struct tree p) :

  # Unexpr checks unary expression.
 
  struct tree np;

  np = p;
  if(LibeStrcmp(PtreeGetname(p),"unexpr")):
    p = PtreeMvchild(p);
    p = SemPrimexpr(p);
    SemCopytype(p, np);
    return (np);
  
 
 
  else:
    return SemPrimexpr(p);

 
 
struct tree SemPrimexpr(struct tree p) :

   # SemPrimexpr checks primary expression.
 
     
  if(LibeStrcmp(PtreeGetname(p),"identifier")):
    SemId(p);
    return(p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "fcall")):
    SemFcall(p);
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "cast")):
    SemCast(p);
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "new")):
    SemNew(p);
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "delete")):
    SemDelete(p);
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "cmplx")):
    SemCmplx(p);
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "re")):
    SemRe(p);
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "len")):
    SemLen(p);
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "im")):
    SemIm(p);
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "sizeof")):
    SemSizeof(p);
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "iconstant")):
    PtreeSetype(p, "int");
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "rconstant")):
    PtreeSetype(p, "float");
    return (p);
  
 
 
  else if(LibeStrcmp(PtreeGetname(p), "sconstant")):
    PtreeSetype(p, "char");
    PtreeSetref(p, "aref");
    PtreeSetrank(p,1);
    return (p);
  
 
 
  else :
    return SemBinexpr(p);
  


 

int SemCopyparallel(struct tree p, struct tree np) :

  #SemCopyparallel  -- Copy parallelfield.
 
  PtreeSetparallel(p, PtreeGetparallel(np));
  return(OK);

 
  
int SemArgtypes(struct tree p, struct symbol tp) :
 
  # SemArgtypes checks if argument types of parse tree matches symbol table.
  #
  # Parameters :
  #   p:   Parse tree function node
  #   tp : External symbol table entry for function
  #
  # Returns : OK
  #
  char [*] name;

  #Get the function name
  name = SymGetname(tp);

  # First check that the function types match
  SemArgtype(p,tp);


  # Check that the function parse tree has an arglist
  p=PtreeMvchild(p);
  if(LibeStrcmp(PtreeGetname(p),"arglist")==ERR):
    if((tp=SymGetable(tp))!= NULL):
      SemSerror(p, \
                "Function arguments does not match forward declaration" \
                ,PtreeGetdef(p));
      return(ERR);
    
 
    return(OK);  # No arguments to check  
  
 
  
  # Argument list exists, start processing of the argument list  

  # Move to first entry in arglist
  p = PtreeMvchild(PtreeMvchild(p));

  # Move to arglist subtable
  tp = SymGetable(tp);
  tp = SymLookup("#arglist",tp);
  if(tp == NULL) :
    SemSerror(p,"Function Arguments does not match forward declaration",name);
  

  else :
    # Move to the argument sub table
    tp = SymGetable(tp); 
    


    # Move to first entry
  tp = SymMvnext(tp); 

    # Check all arguments

  while(p != NULL):
    SemArgtype(p,tp);
    p = PtreeMvsister(p);
    tp = SymMvnext(tp); 
     

 
  return(OK);


 
int SemFdef2(struct tree p, struct symbol tp) :

  #  SemFdef2 checks function declaration with forward defs.
  #
  # Parameters :
  #   p   : Parse tree node "fdecl"
  #   tp  : External symbol table
  #
  # Returns :
  #   Annotated "fdecl" subtree and entry in symbol table
 
  struct tree np, sp;
  struct symbol  up, ftp, ltp;

  # Set the name of the node
  PtreeSetname(p, "fdef");
  
  # Delete the forward flag
  
  SymSetforw(tp,"void");
  
  # Move to the arglist or function body
  np = PtreeMvchild(p);     

  # Create a local symbol table
  ltp = SymMktable();
  SymSetltp(ltp);

  # Create a #self entry in the local table
  up=SymMkname("#self",ltp);
  SymSetfunc(up,PtreeGetdef(p));

  # Find the function body node and save in sp
  if(LibeStrcmp(PtreeGetname(np),"arglist") == OK) :
    sp = PtreeMvsister(np);   
  

  else :
    sp = np;
  


  #Process the argument list
  if(LibeStrcmp(PtreeGetname(np),"arglist") == OK) :
    # Move to arglist declarations
    np = PtreeMvchild(np);  

    #Create an arglist entry in the local symbol table
    up = SymMkname("#arglist", ltp);

    # Make a table to hold the argument list
    # and set as subtable of the #arglist entry
    ftp = SymMktable();    
    SymSetable(up, ftp);
   
    # Do semantic check of the argument list
    SemDeclarations(np, ftp); 

    #Create a  subtable to the function node
    #in the external table
    #fsub = SymMktable();
    #SymSetable(fname,fsub);

    #Create an arglist entry in the subtable
    #arg = SymMkname("#arglist", fsub);
    #Create a  subtable to the arglist node
    #argsub = SymMktable();
    #SymSetable(arg,argsub);
    #Copy the list of arguments from the local table
    #SymCpytble(ftp,argsub);

  


  # Check that the argument list type matches
  # the forward declaration
  SemArgtypes(p,tp);

  # Reset the emit flag
  SymSetemit(tp,OK);
 
  # Do semantic check of the function body
  SemCompstmnt(sp); 
  SemCopyparallel(p,sp);
  return (OK);


 

int Semisnobody(struct tree p) :

  # Semisnobody checks for empty function body
  #
  # Parameters:
  #   p : parse tree fdef node
  #
  # Returns:
  #  OK if the function body is empty.
  #  ERR in all other cases.

  struct tree np;

  # Move to the arglist or function body
  np = PtreeMvchild(p);     

  # Arglist case
  if(LibeStrcmp(PtreeGetname(np),"arglist")==OK):
    np=PtreeMvsister(np);    #Move to compstmnt node
    np=PtreeMvchild(np);     #Move to the function body
    if(np==NULL):
      return(OK);
    else :
      return(ERR);
  else if(LibeStrcmp(PtreeGetname(np),"compstmnt")==OK):
    np=PtreeMvchild(np);     #Move to the function body
    if(np==NULL):
      return(OK);
    else:
      return(ERR);

  return(ERR);

int SemFdef(struct tree p, struct symbol tp) :

  #  SemFdef checks function declaration.  
  #
  # Parameters :
  #   p   : Parse tree node "fdecl"
  #   tp  : External symbol table
  #
  # Returns :
  #   Annotated "fdecl" subtree and entry in symbol table
 
  struct tree np, sp;
  struct symbol fname;     # Function name node
  struct symbol fsub;      # Subtable to fname
  struct symbol arg;       # Subtable to fsub for argument list
  struct symbol argsub;    # Subtable to arg for arguments
  struct symbol  up, ftp, ltp, qp;
  int rank;
  int nobody;

  # The  p node is a type node  
  # Set type and rank for this function 
  if(LibeStrcmp(PtreeGetarray(p), "array")):
    rank=1;
    np = PtreeMvchild(p);
    sp = PtreeMvchild(np);
    np = PtreeMvsister(np);
    while((sp = PtreeMvsister(sp))!= NULL):
      rank = rank+1;
  
 
  else:
    rank = 0;
    np = PtreeMvchild(p); 
  
 
 
  PtreeSetrank(p,rank);
  SemCopytype(p,np);
  PtreeSetype(np, PtreeGetdef(p));

  # Move to the function definition  

  p=np;

  nobody=ERR;
  # Find out whether this is a forward declaration
  if(Semisnobody(p) == OK) :
    PtreeSetforw(p,"forw");
    nobody = OK;
  


  # Enter the function name into the external symbol table
  if((fname = SymMkname(PtreeGetdef(p), tp)) == NULL):
    qp = SymLookup(PtreeGetdef(p),tp);
    if(LibeStrcmp(SymGetforw(qp),"forw") != OK):
      SemSerror(np,"Function already defined", PtreeGetdef(p));
    

    else :
      # Handle function forward declarations 
      SemFdef2(p,qp);
      return(OK); 
    

  
 
  
  SymSetype(fname, PtreeGetype(p));
  SymSetstruct(fname, PtreeGetstruct(p));
  SymSetarray(fname, PtreeGetarray(p));
  SymSetrank(fname, PtreeGetrank(p));
  SymSetfunc(fname, "fdef");

  if(nobody == OK) :
    SymSetforw(fname, "forw");
  


  # Move to the arglist or function body
  np = PtreeMvchild(p);     

  # Create a local symbol table
  ltp = SymMktable();
  SymSetltp(ltp);

  # Create a #self entry in the local table
  up=SymMkname("#self",ltp);
  SymSetfunc(up,PtreeGetdef(p));

  # Find the function body node and save in sp
  if(LibeStrcmp(PtreeGetname(np),"arglist") == OK) :
    sp = PtreeMvsister(np);   
  

  else :
    sp = np;
  


  #Process the argument list
  if(LibeStrcmp(PtreeGetname(np),"arglist") == OK) :
    # Move to arglist declarations
    np = PtreeMvchild(np);  

    #Create an arglist entry in the local symbol table
    up = SymMkname("#arglist", ltp);

    # Make a table to hold the argument list
    # and set as subtable of the #arglist entry
    ftp = SymMktable();    
    SymSetable(up, ftp);
   
    # Do semantic check of the argument list
    SemDeclarations(np, ftp); 

    #Create a  subtable to the function node
    #in the external table
    fsub = SymMktable();
    SymSetable(fname,fsub);

    #Create an arglist entry in the subtable
    arg = SymMkname("#arglist", fsub);
    #Create a  subtable to the arglist node
    argsub = SymMktable();
    SymSetable(arg,argsub);
    #Copy the list of arguments from the local table
    SymCpytble(ftp,argsub);

  

 
  # Do semantic check of the function body
  SemCompstmnt(sp); 
  SemCopyparallel(p,sp);
 
  return (OK);


 

int SemExtdecl(struct tree p) :

  # SemExtdecl checks the external declaration list.  
  # This is the start of the type checking and the routine
  # performs type checking for external declarations, including
  # structure and function definitions.
 
  struct tree sp, np;

  if(LibeStrcmp(PtreeGetname(p), "extdecl")):         
    np = PtreeMvchild(p);
    PtreeSetglobal(np,"global");

   # Check import  declaration  
    if(LibeStrcmp(PtreeGetname(np), "import")==OK):
      SemImport(np, SymGetetp());
      return(OK); 
   
 

   # Check structure declaration  
    while(np!= NULL):
      sp = PtreeMvchild(np);
      if(LibeStrcmp(PtreeGetarray(np),"array")):
        sp = PtreeMvsister(sp);
      
 

      if(LibeStrcmp(PtreeGetname(sp), "structdec")):   
        SemStructdecl(np, SymGetetp()); 
      
 

   # Check function declaration  
      else if(LibeStrcmp(PtreeGetname(sp), "fdef")):
        SemFdef(np, SymGetetp());
      
 

   # Check variable and array declaration  
      else:
        SemDeclaration(np, SymGetetp());
      np = PtreeMvsister(np);
    
 
 
  
 
 
  return (OK);

 

int SemSem(struct tree p, struct symbol tp) :

  # SemSem does semantic checking of the syntax tree.
  # The entry point of the semantic checking is this routine.
 
  struct symbol ltp;
  SymSetetp(tp);          
  ltp= NULL; 
  SymSetltp(ltp);
  SemExtdecl(p);  # Check syntax tree pointed to by p        
  return (OK);

 
 
int SemWhilestmnt(struct tree p) :

  # Whilestmnt checks while statement.  
 
  struct tree q;

  q=p; #Save top node
  p = PtreeMvchild(p);    
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemStmnt(p);
  SemCopyparallel(q,p);
  return(OK);

 
 
int SemForstmnt(struct tree p) :

  # SemForstmnt checks for statement.  
 
  struct tree q;

  q=p;  #Save top node

  p = PtreeMvchild(p);    
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemStmnt(p);
  SemCopyparallel(q,p);
  return(OK);

 
 
int SemParallelstmnt(struct tree p) :

 # SemParallelstmnt checks parallel statement.  
 
  struct tree sp, rp;
  int rank;

  rank=0;
  sp = PtreeMvchild(p);    
  sp = PtreeMvchild(sp);
  while(sp != NULL):
    rp=PtreeMvchild(sp);
    SemExpr(rp);
    PtreeSetopexpr(rp,OK);
    rp = PtreeMvsister(rp);
    SemExpr(rp);
    PtreeSetopexpr(rp,OK);
    if((rp=PtreeMvsister(rp)) != NULL):
      SemExpr(rp);
      PtreeSetopexpr(rp,OK);
    
 
 
    if(PtreeMvsister(sp) != NULL):
      rp = PtreeMvsister(sp);
    sp = PtreeMvsister(sp);
    rank=rank+1;
  
 
 
  PtreeSetrank(p,rank);
  sp = PtreeMvchild(p);
  sp = PtreeMvsister(sp);
  SemStmnt(sp);
  return(OK);

 
 
int SemIfstmnt(struct tree p) :

  # SemIfstmnt checks if statement.  
 
  struct tree q;

  q = p; # Save top node
  p = PtreeMvchild(p);    
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemStmnt(p);
  SemCopyparallel(q,p);
  if((p = PtreeMvsister(p)) != NULL):
    if(LibeStrcmp(PtreeGetname(p), "else")):
      p = PtreeMvchild(p);
      SemStmnt(p);
    
 
 
  
 
 
  return(OK);

 
 
int SemReturnstmnt(struct tree p) :

  # Returnstmnt checks return statement.  
 
  struct tree sp;
  struct symbol up;

  sp = PtreeMvchild(p);    
  if(sp != NULL):
    SemExpr(sp);
    PtreeSetopexpr(sp,OK);
    up = SymLookup("#self", SymGetltp());
    up = SymLook(SymGetfunc(up));
    PtreeSetype(p, SymGetype(up));
    PtreeSetstruct(p, SymGetstruct(up));
    PtreeSetarray(p, SymGetarray(up));
    PtreeSetref(p, PtreeGetref(sp));
    PtreeSetrank(p, SymGetrank(up));
    if(SemComparetype(p, sp) == ERR):
      SemSerror(p,"Return type is incorrect ", " ");
    
 
 
  
 
 
  return(OK);


 
 
int SemStmnt(struct tree p) :

  # SemStmnt checks statement.  
 
  struct tree q;
  int parflag;

  parflag=ERR;
  q = p; # Save top node  

  if(LibeStrcmp(PtreeGetname(p), "declarations")):
    SemDeclarations(p, SymGetltp());
    p = PtreeMvsister(p);
  
 
 
  while(p != NULL):
    if(LibeStrcmp(PtreeGetname(p), "expr")):
      SemExpr(p);
      PtreeSetopexpr(p,OK);
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "compstmnt")):
      SemCompstmnt(p);
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "while")):
      SemWhilestmnt(p);
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "for")):
      SemForstmnt(p);
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "parallel")):
      parflag=OK;
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "if")):
      SemIfstmnt(p);
    
 
 

    if(LibeStrcmp(PtreeGetname(p), "return")):
      SemReturnstmnt(p);
    
 

    p = PtreeMvsister(p);
  
 

  if(parflag == OK):
    PtreeSetparallel(q,"parallel");
  
 
 
  return(OK);


 
  
int SemCompstmnt(struct tree p) :

  # SemCompstmnt checks compound statemenets.

  struct tree q;
  int parflag;

  parflag=ERR;

  q = p; # Save top node  
  p = PtreeMvchild(p);    
  if(p==NULL):   # If empty compund stament, accept it
 
    return(OK);
  
 
 
  if(LibeStrcmp(PtreeGetname(p), "declarations")):
    SemDeclarations(PtreeMvchild(p), SymGetltp());
    p = PtreeMvsister(p);
  
 
 
  while(p != NULL):
    if(LibeStrcmp(PtreeGetname(p), "expr")):
      SemExpr(p);
      PtreeSetopexpr(p,OK);
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "while")):
      SemWhilestmnt(p);
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "for")):
      SemForstmnt(p);
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "parallel")):
      SemParallelstmnt(p);
      PtreeSetparallel(p,"parallel");
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "if")):
      SemIfstmnt(p);
    
 
 
    if(LibeStrcmp(PtreeGetname(p), "return")):
      SemReturnstmnt(p);
    
 
 
    if(LibeStrcmp(PtreeGetparallel(p),"parallel")):
      parflag=OK;
    
 
    p = PtreeMvsister(p);
  
 

  if(parflag == OK):
    PtreeSetparallel(q,"parallel"); 
  
 
 
  return(OK);

 
 


