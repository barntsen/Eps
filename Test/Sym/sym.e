// The Sym imodule manages the symbol table.
//
//   
//    Table 1                Table 2
//   -------------------     ----------------
//   |                 |     |              |
//   |   ----------    |     | ----------   | 
//   |   |        |    |     | |        |   |
//   |   | node   |--------->| | node   |   |
//   |   |        |    |     | |        |   |
//   |   ----------    |     | ----------   |
//   |       |         |     ----------------
//   |       |         |     
//   |       |         |     Table 3
//   |       v         |     ----------------
//   |   ----------    |     |
//   |   |        |    |     |
//   |   |  node  |    |     |
//   |   |        |    |     |
//   |   ----------    |     |
//   -------------------     ---------------- 

include "libe.i"
include "ptree.i"
include "err.i"
include "sym.i"




// SymEtp is the external Symbol Table
struct symbol SymEtp;       

// SymLtp is the local symbol table
struct symbol SymLtp;       
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymStp -- string table}
%----------------------------------------------------------------------
\begin{verbatim}
*/
struct symbol SymStp;      
/*
\end{verbatim}
%======================================================================
\subsection{SymGetetp -- Get symbol table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymGetetp()
{
  return(SymEtp);
}
/*
\end{verbatim}
%======================================================================
\subsection{SymSetetp -- Set symbol table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymSetetp( struct symbol etp)
{
  SymEtp = etp;
  return(SymEtp);
}
/*
\end{verbatim}
%======================================================================
\subsection{SymGetltp -- Get local symbol table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymGetltp()
{
  return(SymLtp);
}
/*
\end{verbatim}
%======================================================================
\subsection{SymSetltp -- Set local symbol table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymSetltp( struct symbol ltp)
{
  SymLtp = ltp;
  return(SymLtp);
}
/*
\end{verbatim}
%======================================================================
\subsection{SymGetstp -- Get string table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymGetstp()
{
  return(SymStp);
}
/*
\end{verbatim}
%======================================================================
\subsection{SymSetstp -- Set string table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymSetstp( struct symbol stp)
{
  SymStp = stp;
  return(SymStp);
}
/*
\end{verbatim}
%======================================================================
\subsection{SymSetfield -- set a field}                 
%======================================================================
\begin{verbatim}
*/
char [*] SymSetfield(char [*] field, char[*] value){}
/*
\end{verbatim}
%======================================================================
\section{SymLookup -- look for s}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymLookup(char [*] s, struct symbol tp)
{
  struct symbol np;
      
  np = tp;
  while(np != NULL){ 
    if (LibeStrcmp(s, np.name) == OK)
      return(np);       /* found it */
    np = np.next;
  }
  return(np=NULL);       /* not found */
 }
/*
\end{verbatim}
%======================================================================
\section{SymMkname -- make a name}     
%======================================================================
\begin{verbatim}
*/
struct symbol SymMkname(char [*] name, struct symbol tp)
{
  struct symbol np, lp;

  if((np = SymLookup(name, tp)) == NULL) {  /* not found */
    np = new(struct symbol);
    if (np == NULL){
      ErrPanic("Out of memory");
      return(np);
    }
    if((np.name = LibeStrsave(name)) == NULL){
      ErrPanic("Out of memory");    
      return(np=NULL);
    }
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
  } 
  else
    np = NULL;
    return(np);          /* Return pointer to node */
  }     
/*
\end{verbatim}
%======================================================================
\section{SymRmname -- remove a name}     
%======================================================================
\begin{verbatim}
*/
struct symbol SymRmname(char [*] name, struct symbol tp)
{
  struct symbol np, sp, prev;
  np = tp;
  sp = NULL;
  prev = np;
  while(np != NULL){ 
    if (LibeStrcmp(name, np.name) == OK){
      sp = np;
      np = NULL;
    }
    else{
      prev = np;
      np = np.next;
    }
  } 
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
}     
/*
\end{verbatim}
%======================================================================
\section{SymGetname -- get name}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetname(struct symbol np)
{
  return(np.name);
}
/*
\end{verbatim}
%======================================================================
\section{SymMktable -- make a new symbol table}     
%======================================================================
\begin{verbatim}
*/
struct symbol SymMktable()
{
  struct symbol tp;   /* Table pointer */

  tp = new(struct symbol);
  if (tp == NULL){
    ErrPanic("Out of memory");
    return(tp);
  }
  tp.name =  LibeStrsave("#first");
  tp.type =  LibeStrsave("void");
  tp.func =  LibeStrsave("void");
  tp.array = LibeStrsave("void");
  tp.rank  = 0;
  tp.structure =  LibeStrsave("void");
  tp.ident =  LibeStrsave("void");
  tp.lval =  LibeStrsave("void");
  tp.descr =  LibeStrsave("void");
  tp.global = LibeStrsave("void");
  tp.ref =   LibeStrsave("void");
  tp.emit = OK;
  tp.tbl =   NULL;
  tp.next =  NULL;
  tp.last = tp;

  return(tp);           /* Return pointer to first node */
}     
/*
\end{verbatim}
%======================================================================
\section{SymMvnext -- move to next node}     
%======================================================================
\begin{verbatim}
*/
struct symbol  SymMvnext(struct symbol np)
{
  if(np == NULL)
    return(np) ;
  else
    return (np.next);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetable -- set table}     
%======================================================================
\begin{verbatim}
*/
 struct symbol SymSetable(struct symbol np, struct symbol tp)
{
  np.tbl = tp;
  return(np);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetable -- get table}
%======================================================================
\begin{verbatim}
*/
struct symbol SymGetable(struct symbol np)
{
  return(np.tbl);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetype -- set type}     
%======================================================================
\begin{verbatim}
*/
int SymSetype(struct symbol np, char [*] type)
{
  np.type = SymSetfield(np.type, type);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetype -- get type}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetype(struct symbol np)
{
  return(np.type);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetfunc -- set the function field}     
%======================================================================
\begin{verbatim}
*/
int SymSetfunc(struct symbol np, char [*] func)
{
  np.func = SymSetfield(np.func, func);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetfunc -- get the function field}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetfunc(struct symbol np)
{
  return(np.func);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetarray -- set the array field}     
%======================================================================
\begin{verbatim}
*/
int SymSetarray(struct symbol np, char [*] array)
{
  np.array = SymSetfield(np.array, array);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetarray -- get the array field}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetarray(struct symbol np)
{
  return(np.array);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetstruct -- set the structure field}     
%======================================================================
\begin{verbatim}
*/
int SymSetstruct(struct symbol np, char [*] structure)
{
  np.structure = SymSetfield(np.structure, structure);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetstruct -- get the structure field}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetstruct(struct symbol np)
{
 return(np.structure);

}
/*
\end{verbatim}
%======================================================================
\section{SymSetident -- set the identifier field}     
%======================================================================
\begin{verbatim}
*/
 int SymSetident(struct symbol np, char [*] ident)
{
  np.ident = SymSetfield(np.ident, ident);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetident -- get the identifier field}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetident(struct symbol np)
{
  return(np.ident);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetlval -- set the lval field}     
%======================================================================
\begin{verbatim}
*/
 int SymSetlval(struct symbol np, char [*] lval)
{
  np.lval = SymSetfield(np.lval, lval);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetlval -- get the lval field}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetlval(struct symbol np)
{
     return(np.lval);
 }
/*
\end{verbatim}
%======================================================================
\section{SymSetrank -- set the rank field}     
%======================================================================
\begin{verbatim}
*/
int SymSetrank(struct symbol np, int rank)
{
  np.rank = rank;
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetrank -- get the rank field}
%======================================================================
\begin{verbatim}
*/
int SymGetrank(struct symbol np)
{
     return(np.rank);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetemit -- set the emit field}     
%======================================================================
\begin{verbatim}
*/
int SymSetemit(struct symbol np, int emit)
{
    np.emit = emit;
    return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetrank -- get the rank field}
%======================================================================
\begin{verbatim}
*/
int SymGetemit(struct symbol np)
{
     return(np.emit);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetref -- set the ref field}     
%======================================================================
\begin{verbatim}
*/
int SymSetref(struct symbol np, char  [*] ref)
{
  np.ref = SymSetfield(np.ref, ref);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymGetref -- get the ref field}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetref(struct symbol np)
{
  return(np.ref);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetdescr -- set the descr field}     
%======================================================================
\begin{verbatim}
*/
int SymSetdescr(struct symbol np, char [*] descr)
{
  np.descr = SymSetfield(np.descr, descr);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\subsection{SymGetdescr -- get the descr field}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetdescr(struct symbol np)
{
  return(np.descr);
}
/*
\end{verbatim}
%======================================================================
\section{SymSetglobal -- set the global field}     
%======================================================================
\begin{verbatim}
*/
int SymSetglobal(struct symbol np, char [*] global)
{
  np.global = SymSetfield(np.global, global);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\subsection{SymGetdescr -- get the global field}
%======================================================================
\begin{verbatim}
*/
char [*] SymGetglobal(struct symbol np)
{
  return(np.global);
}
/*
\end{verbatim}
%======================================================================
\subsection{SymRmtable -- remove the symbol table}
%======================================================================
\begin{verbatim}
*/
int SymRmtable(struct symbol p)
{ 
  struct symbol next, prev;

  if(p==NULL)return(ERR);
  prev=NULL;
  while(p != NULL){
    next=p.next;
    if(LibeStrcmp("#arglist", p.name)==ERR){    
      if(LibeStrcmp("#self", p.name) == ERR){
      if(LibeStrcmp("#first", p.name) == ERR){
      if(p.tbl != NULL){
        SymRmtable(p.tbl);
        p.tbl=NULL;
      }
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
    }
    }
    }
    else
      prev=p;
    p=next;
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SymLook  -- Find identifier}
%======================================================================
 \begin{verbatim}
*/
struct symbol SymLook(char [*] name)
{ 
  struct symbol tp, ap;

  if((tp = SymLookup(name, SymEtp)) == NULL){
    if((tp = SymLookup(name, SymLtp)) == NULL){
      tp = SymLookup("#arglist", SymLtp);
      if(tp==0) return(tp);
      ap = SymGetable(tp);
      if(ap==0) return(ap);
      if((tp = SymLookup(name,ap)) == NULL){ 
        tp = SymLookup(name, SymEtp);
      }
    }
  }
  return(tp);
} 
/*
\end{verbatim}
%======================================================================
\section{SymField -- set a character field}     
%======================================================================
\begin{verbatim}
*/
char [*] SymSetfield(char [*] field, char [*] value)
{
  if(field != NULL)
    delete(field);
  if(value == NULL)
    field = NULL;
  else if((field = LibeStrsave(value)) == NULL){
    ErrPanic("Out of memory");
    return(field);
  }
  return (field);
}
/*
\end{verbatim}
%======================================================================
\section{SymCpytble  -- Copy table}
%======================================================================
 \begin{verbatim}
*/
int SymCpytble(struct symbol tp, struct symbol up)
{ 
  struct symbol wp;

  tp = SymMvnext(tp);
  while(tp != NULL){
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
  }
  return(OK);
} 
/*
\end{verbatim}
%======================================================================
\section{SymPrsym -- print the symbol table}
%======================================================================
\begin{verbatim}
*/
int SymPrsym(struct symbol p, int level)
{ 
  int i;
  int fp;
  struct symbol tp;
       
  fp = stdout;
  if(p == NULL)
    return(ERR);
  while(p != NULL){
    i = 0;
    while(i <= level){
      LibePuts(fp, " ");
      i = i + 1;
    }
    LibePuts(fp, p.name);      LibePuts(fp, " ");    
    LibePuts(fp, p.type);      LibePuts(fp, " ");    
    LibePuts(fp, p.func);      LibePuts(fp, " ");    
    LibePuts(fp, p.array);     LibePuts(fp, " ");    
    LibePuti(fp, p.rank);      LibePuts(fp, " ");    
    LibePuts(fp, p.structure); LibePuts(fp, " ");    
    LibePuts(fp, p.ident);     LibePuts(fp, " ");    
    LibePuts(fp, p.lval);      LibePuts(fp, " ");    
    LibePuts(fp, p.descr);     LibePuts(fp, " ");    
    LibePuts(fp, p.global);    LibePuts(fp, " ");    
    LibePuts(fp, p.ref);       LibePuts(fp, " ");    
    LibePuti(fp, p.emit);      LibePuts(fp, " ");    
    LibePuts(fp,"\n");
    LibeFlush(fp);

    if(p.tbl != NULL){
       tp = p.tbl;
       level = level + 1;
       SymPrsym(tp, level);
       level = level - 1;
    }
    p = p.next;
 }
    LibeFlush(fp);
    return(OK);
}

int SymReadsym(int fp, struct symbol rtbl)
// SymReadsym reads the symbol table from a file.
//
// Parameters:
//   fp   (int)           : File pointer
//   rtbl (struct symbol) : Symbol table reference
//                          Empty table on entry
//                          Tree of tables on return
//
// Returns
//   OK  (int): if no errors
//   ERR (int): if an error occured            
//
// The symbol table (as printed with SymPrsym) is read
// and reconstructed in memory. 
// The layout of the input text file can be described as:
//   1. Each table entry consist of a single line (with several fields).
//   2. The first entry of a table is a line where the first field 
//      contains the string "#first".
//   3. Each table entry can contain a sub table. Each
//      subtable is indented with a single space relative to
//      the table entry.
//   4. The first line in the file is indented with a single space.
//      See example below which contain a symbol table with
//      entries for a function (LibeArrayex) definition.
// 
//  #first void void void 0 1 void void void void void void 
//  LibeArrayex int fdef void 0 1 void void void void void void 
//   #first void void void 0 1 void void void void void void 
//    #arglist void void void 0 1 void void void void void void 
//    #first void void void 0 1 void void void void void void 
//     line int void void 0 1 void identifier lval void void void 
//     name char void array 1 1 void identifier lval void void void 
//     ival int void void 0 1 void identifier lval void void void 
//     index int void void 0 1 void identifier lval void void void 
//     bound int void void 0 1 void identifier lval void void void 
//     #self void LibeArrayex void 0 0 void void void void void void 
//
//     The algorith for reading and reconstructing the table in memory
//     is quite straightforward:
//
//       1. Read a line of the table.
//       2. If the ident does not change relative to
//          the previous line, enter the table entry into the current table.
//       3. If the indentation increases, make a new table and put the
//          entry into the new table. The new table is marked as
//          a subtable of the last entry in the current table.
//       4. If the indentation decreases move from the subtable up to
//          the entry containing the subtable.
//
{
  int indent;         // Indentation of current table line
  int oldindent;      // Indentation of previpus table line
  struct symbol tbl;  // Current table pointer
  struct symbol ntbl; // Pointer to new subtable 
  struct symbol np;   // Pointer to table entry
  struct symbol mp;   // Pointer to table entry
  struct symbol ttbl; // Dummy table
  int i;              // Iteration index

  // Save the root node of the symbol table
  tbl=rtbl;

  // Make a dummy table and create a dummy name
  ttbl=SymMktable();
  mp = SymMkname("dummy",ttbl);

  // Skip the first line of the table
  indent=Symgetline(fp,mp);
       
  // Initialize the old and current indents
  oldindent = 1;
  indent=1;

  while(OK){
    // Get a table line and exit if the
    // indent is negative.
    indent=Symgetline(fp,mp);
    if(indent <0){
      return(OK);
    }
    // If this is the first line of a subtable, skip
    // the first record.
    if(LibeStrcmp(mp.name,"#first")==OK){
      indent=Symgetline(fp,mp);
    }

    // The entry is in the current table
    if(indent == oldindent){
      SymCpytble(ttbl,tbl);
      oldindent=indent;
    }
 
    // The entry is in a subtable, 
    // create a new table
    if(indent > oldindent){
      // Make new table
      ntbl=SymMktable();
      // Get the last record in the current table 
      np=tbl.last;
      // Store the new table in the last
      // record of the current table using the
      // "tbl" field.
      SymSetable(np,ntbl);
      // Update current table to new table
      tbl=ntbl;
      // Copy content to new table
      SymCpytble(ttbl,tbl);
      oldindent = indent;
    }

    // The entry is in the enclosing table,
    // move to the entry by starting from the
    // root table and counting indents using
    // the "last" field.
    if(indent < oldindent){
      tbl=rtbl;
      if(indent == 1){
        tbl=rtbl;
      }else{
        for(i=0; i<indent; i=i+1){
          tbl=SymGetable(tbl.last);
        }
      }
      SymCpytble(ttbl,tbl);
      oldindent=indent;
    }
  }
  return(OK);
}

int Symgetline(int fp, struct symbol np){
// 
// Symgetline reads an single line (record) from a symbol 
// table stored in a file.
  int indent;
  int ch;
  int tmp;
  char [*] field;

  field = new(char [NTBL]);

  indent =0;

  // Read the current line
  ch=OK;
  if((ch=LibeGetc(fp)) == EOF){
    return(-1);
  }else{ 
    // Back up one character
    LibeUngetc(fp);
  }

  //Get the number of whitespace characters at the beginning of the line
  while((ch=LibeGetc(fp)) == SPACE){ 
    indent = indent+1;
  }
  // Back up one character
  LibeUngetc(fp);

  // Get the fields in the current line and set into fields
  // in the node pointed to by np

    LibeGetw(fp,field);
    SymSetfield(np.name,field); 

    LibeGetw(fp,field);
    SymSetype(np,field);

    LibeGetw(fp,field);
    SymSetfunc(np,field);

    LibeGetw(fp,field);
    SymSetarray(np,field);
    
    LibeGetw(fp,field);
    SymSetrank(np,LibeAtoi(field));

    LibeGetw(fp,field);
    SymSetstruct(np,field);

    LibeGetw(fp,field);
    SymSetident(np,field);

    LibeGetw(fp,field);
    SymSetlval(np,field);

    LibeGetw(fp,field);
    SymSetdescr(np,field);

    LibeGetw(fp,field);
    SymSetglobal(np,field);

    LibeGetw(fp,field);
    SymSetref(np,field);

    LibeGetw(fp,field);
    SymSetemit(np,LibeAtoi(field));

  //Read the rest of the line including the new line character.
  while((ch=LibeGetc(fp)) != NL){ 
    tmp=1;
  }
  return(indent);
}
