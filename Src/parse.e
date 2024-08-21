// Parse is the module containing all parser routines.
//
// Eps grammar
// The complete grammar of the epsilon language is given below using the
// EBNF notation. 
//
//    extdecl         = type   ':' structdeclar | ID  [idseq] | [ '(' fdecl ]  
//    type            = INT | REAL | COMPLEX | CHAR  | STRUCT ID   [ '['arrayarg']' ]
//    structdeclar   = declarations 'END'
//    idseq          = ',' ID  [idseq] 
//    fdecl          = [arglist] ')' [compstmnt]
//    arrayarg       = * | ',' arrayarg
//    arglist        = type [ID] [argseq] 
//    argseq         = ',' [ID]  argseq  
//    declarations   = declaration [declarations]
//    declaration    = type ID idseq ';'
//    compstmnt      = ':' declarations | stmntlist 'END' 
//    stmntlist      = stmnt | stmnt stmntlist   
//    stmnt          = (ifstmnt| compstmnt| whilestmnt| forstmnt 
//                             | parallelstmnt|return| expr) ';'
//    ifstmnt        = IF '(' expr')' stmnt elsestmnt
//    elsestmnt      = ELSE stmnt 
//    whilestmnt     = WHILE '(' expr')' stmnt 
//    forstmnt       = FOR '(' expr ';' expr ';' expr')' stmnt 
//    parallelstmnt  = PARALLEL '('  sliceseq ')' stmnt 
//    sliceseq       = slice [, sliceseq]
//    slice          = expr ':' expr [':' expr ] 
//    returnstmnt    = RETURN  expr
//    exprlist       = expr exprseq 
//    exprseq        = ',' expr [ exprseq ]
//    expr           = asgexpr 
//    asgexpr        = relexpr asgexprseq 
//    asgexprseq     = '='    relexpr asgexprseq 
//    relexpr        = addexpr relexprseq
//    relexprseq     = ( '<' | '>' | '<=' | '>=' '||' 
//                 | "&&" | "!=" | "==" ) 
//    addexpr        = multexpr addexprseq
//    addexpseq      = ['+'|'-'  multexpr addexprseq] 
//    multexpr       = unexpr  multexprseq   
//    multexprseq    = ['*'|'/' unexpr multexprseq] 
//    unexpr         = primexpr | '-' unexpr 
//    primexpr       = ID ['[' exprlist ']'] 
//                     | '(' exprlist ')'] ) 
//                     |  ['.' ident]
//                     | CAST '(' type ',' asgexpr ')'  
//                     | SCONST | ICONST | RCONST | NEW '(' type ')'  
//                     | CMPLX '(' expr ')' 
//                     | IM '(' expr ')'| RE '(' expr ')'
//   ident             =  ID  [ '['exprlist ']' ] 

// Definitions     
include "libe.i"     /* Library interface             */
include "ptree.i"    /* Parse Tree routines interface */
include "err.i"      /* Error routines interface      */
include "scan.i"     /* Lexical scanner interface     */
include "parse.i"    /* Parse interface               */

struct tree ParseExtdecl(){}              
struct tree ParseType(){}                 
int  ParseConstdecl(struct tree p){}  
int  ParseStructdeclar(struct tree p){}  
int  ParseIdseq(struct tree p){}         
int  ParseFdecl(struct tree p){}         
int  ParseArrayarg(struct tree p){}      
struct tree ParseArglist(){}       
int  ParseArgseq(struct tree p){}    
struct tree ParseDeclarations(){}  
struct tree ParseDeclaration(){}  
struct tree ParseCompstmnt(){}   
struct tree ParseStmntlist(){}  
struct tree ParseStmnt(){}
struct tree ParseWhilestmnt(){}
struct tree ParseForstmnt(){}
struct tree ParseParallelstmnt(){}
struct tree ParseSliceseq(struct tree p){}
struct tree ParseSlice(){}
struct tree ParseReturnstmnt(){}
struct tree ParseIfstmnt(){}
struct tree ParseElsestmnt(){} 
struct tree ParseExprlist(){}
struct tree ParseExprseq(struct tree p){}
struct tree ParseExpr(){}
struct tree ParseAsgexpr(struct tree p){}  
struct tree ParseAsgexprseq(struct tree p){}
struct tree ParseRelexpr(struct tree p){}   
struct tree ParseRelexprseq(struct tree p){}  
struct tree ParseAddexpr(struct tree p){}   
struct tree ParseAddexprseq(struct tree p){} 
struct tree ParseMultexpr(struct tree p){}   
struct tree ParseMultexprseq(struct tree p){} 
struct tree ParseUnexpr(struct tree p){}
struct tree ParsePrimexpr(struct tree p){} 
struct tree ParseIdent(){}    
int  ParseMatch(int t){}       

int lookahead;            // Look ahead token 

// ParseIniparse initializes the parser. 
int ParseIniparse()
{
 lookahead = ScanGetok();
 return(OK);
}

// Parse is the entry point for the eps parser.
struct tree ParseParse()
{
  struct tree np;

  np = NULL;
  if(lookahead == STOP)
    return np;                 // End of parsing  
  else{
    while(lookahead == INCLUDE)
      ParseMatch(INCLUDE);
    np = ParseExtdecl();      // Start parsing at extdecl   
  }
  return (np);                // Return root of syntax tree 
}
/*
\end{verbatim}
%=====================================================================
\section{ParseGetlookahead -- get lookahead token}                             
%=====================================================================
\begin{verbatim}
*/
int ParseGetlookahead()
{
  return (lookahead);       /* Return lookahead token    */
}
//
// ParseExtdecl parses external declaration      
// The following part of the grammar is implemented:
//    extdecl    = type [( '{' structdeclar | ID ( [idseq] ";" | '(' fdecl ] ))]
//The nonterminal eps is the null-production.
struct tree ParseExtdecl()
{
  struct tree mp, np, sp;

  np = ParseType();                  
  if(np != NULL){
    sp = PtreeMknode("extdecl", "void");
    PtreeAddchild(sp,np);
    if(lookahead == COLON){            // "{"  
      ParseMatch(lookahead);
      ParseStructdeclar(np);
    }
    else if(lookahead == ID){        // ID  
      mp=PtreeMknode("identifier", ScanGetext());  
      PtreeAddchild(np,mp);
      ParseMatch(lookahead);
      if(lookahead == COMMA){        // idseq 
        ParseIdseq(np);
        ParseMatch(SEMICOLON);
      }
      else if(lookahead==LP){       // "("    
        ParseMatch(LP);
        ParseFdecl(mp);
      }       
      else if(lookahead == ASSIGN){ // Constant  
       ParseMatch(lookahead);
       ParseConstdecl(mp);
      }
      else
       ParseMatch(SEMICOLON);
    }  
  }else
    sp = NULL;                      // eps    

  return (sp);
}  
/*
\end{verbatim}
%=============================================================*
\subsection{ParseType  -- parse type declarations}    
%=============================================================*
This function implements the following part of the grammar:
\begin{verbatim}
type           = [( INT | REAL | COMPLEX | CHAR  
                 | STRUCT ID )] [ '['arrayarg']']
\end{verbatim}
 \begin{verbatim}
*/
struct tree ParseType()
{
  struct tree np, sp;

  if((lookahead == INT)   ||          /* Basic types   */
    (lookahead == REAL)   ||
    (lookahead == CHAR)   ||
    (lookahead == CONST)   ||
    (lookahead == COMPLEX)){
    np = PtreeMknode("type", ScanGetext());
    ParseMatch(lookahead);
  }
  else if(lookahead == STRUCT) {     /* Structure type */
    ParseMatch(lookahead);
    np = PtreeMknode("type", ScanGetext());
    PtreeSetstruct(np, "struct");
    ParseMatch(ID);
  }
  else
    np = NULL;

  if(lookahead == LB){
    ParseMatch(lookahead);
    PtreeSetarray(np, "array");
    sp = PtreeMknode("arrayargs", "void");
    PtreeAddchild(np,sp);
    ParseArrayarg(sp);
    ParseMatch(RB);
  }

  return (np);
}
/*
\end{verbatim}
%=============================================================*
\subsection{ParseConstdecl  -- parse constant declaration}    
%=============================================================*
This function implements the following part of the grammar:
\begin{verbatim}
structdeclar   = declarations '}'
\end{verbatim}
 \begin{verbatim}
*/
int ParseConstdecl(struct tree p)
{
  struct tree np;

  np=ParseExpr();
  if(np != NULL)
   PtreeAddchild(p,np);
  ParseMatch(SEMICOLON);      /* ";"    */
  return(OK);
}
/*
\end{verbatim}
%=============================================================*
\subsection{ParseStructdeclar  -- parse structure declaration}    
%=============================================================*
This function implements the following part of the grammar:
\begin{verbatim}
structdeclar   = declarations '}'
\end{verbatim}
 \begin{verbatim}
*/
int ParseStructdeclar(struct tree p)
{
  struct tree sp, np;

  np = PtreeMknode("structdec","void");
  PtreeAddchild(p,np);
  sp = ParseDeclarations();
  PtreeAddchild(np,sp);
  ParseMatch(END);
  return (OK);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseIdseq -- parse identifier sequence}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
idseq          = ',' ID  [ idseq ]
\end{verbatim}
\begin{verbatim}
*/
int ParseIdseq(struct tree p)
{
  struct tree sp;

  if(lookahead == COMMA){
    ParseMatch(lookahead);
    sp = PtreeMknode("identifier", ScanGetext());
    PtreeAddchild(p, sp);
    ParseMatch(ID);        
    ParseIdseq(p);
  }
  else
    return(OK);
  return(OK);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseFdecl -- parse function declaration}      
%======================================================================* 
This routine parses definition and declaration of functions according
to the following rule:
%
\begin{verbatim}
fdecl  = [arglist] ')'  [compstmnt]
\end{verbatim}
%
\begin{verbatim}
*/
int ParseFdecl(struct tree p)
{
  struct tree np;
    
  PtreeSetname(p,"fdecl");
  np = ParseArglist();
  if( np!= NULL)
    PtreeAddchild(p, np);
  ParseMatch(RP);
  np = NULL;
  np = ParseCompstmnt();
  if( np!= NULL)
    PtreeAddchild(p, np);
  else
    ErrError("Missing function body");

  return (OK);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseArrayarg -- parse dummy array arguments}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
arrayarg          = '*' [ ',' arrayarg ]
\end{verbatim}
\begin{verbatim}
*/
int ParseArrayarg(struct tree p)
{
  struct tree np, sp;

  if(lookahead == STAR){
    ParseMatch(STAR);
    sp = PtreeMknode("arrayargs", "void");
    PtreeAddchild(p,sp);
    if(lookahead == COMMA){            
      ParseMatch(lookahead);
      ParseArrayarg(p);
    }
    else
      return(OK);
  }
  else{
    sp = PtreeMknode("arrayargs", "void");
    PtreeAddchild(p,sp);
    np = ParseExprlist();
    if(sp != NULL)
      PtreeAddchild(sp,np);
    else
      ErrError("Syntax error");
    return(OK);
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseArglist -- parse function argument list}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
arglist        = type [ID] [argseq] ';'
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseArglist()
{
  struct tree mp, np, sp;

  if((np=ParseType()) != NULL){
    sp = PtreeMknode("arglist", "void");
    PtreeAddchild(sp, np);
    if(lookahead == ID){            
       mp = PtreeMknode("identifier", ScanGetext());
       PtreeAddchild(np, mp);
       ParseMatch(ID);        
    }
     ParseArgseq(sp);      
  }
  else{
    sp = NULL;
  }
  return (sp);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseArgseq -- parse argument sequence }      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
argseq         = ',' [ID]  argseq  
\end{verbatim}
\begin{verbatim}
*/
int ParseArgseq(struct tree p)
{
  struct tree np, sp;

  if(lookahead == COMMA){
    ParseMatch(lookahead);
    if((np=ParseType()) != NULL){
      PtreeAddchild(p,np);
      if(lookahead == ID){            
        sp = PtreeMknode("identifier", ScanGetext());
        PtreeAddchild(np, sp);
        ParseMatch(ID);        
      }
      ParseArgseq(p);
    }
  }
  return (OK);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseDeclarations -- parse declarations}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
declarations   = declaration [declarations]
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseDeclarations()
{
  struct tree np, sp;

  np=ParseDeclaration();
  if(np != NULL){
    sp = PtreeMknode("declarations", "void");
    PtreeAddchild(sp,np);
  }
  else
    return np=NULL;

  while((np=ParseDeclaration()) != NULL){
    PtreeAddchild(sp,np);
  }
  return(sp);
}  
/*
\end{verbatim}
%======================================================================*
 \subsection{ParseDeclaration -- parse a single declaration}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
declaration    = type ID idseq';'
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseDeclaration()
{
  struct tree mp, np;

  np = ParseType();             /* type */
  if(np != NULL){
    if(lookahead == ID){        /* ID  */
      mp=PtreeMknode("identifier", ScanGetext());  
      PtreeAddchild(np,mp);
      ParseMatch(lookahead);

      if(lookahead == COMMA){
        ParseIdseq(np);
        ParseMatch(SEMICOLON);
      }
      else if(lookahead == ASSIGN){
        ParseMatch(lookahead);
        ParseConstdecl(mp);
      }
      else
        ParseMatch(SEMICOLON);
    } 
    else
      ErrError("Syntax error");
  }
  else
    np = NULL;                     

  return (np);
}  
/*
\end{verbatim}
%============================================================*
\subsection{ParseCompstmnt -- parse compound statement}
%============================================================* 
This function implements the production
\begin{verbatim}
 compstmnt    = '{' declarations | stmntlist '}'
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseCompstmnt()
{ 
  struct tree np, sp;
  if(lookahead == COLON){                            /*  '{'            */ 
    np = PtreeMknode("compstmnt","void");
    ParseMatch(COLON);                     
    sp = ParseDeclarations();                     /* declarations   */
    if(sp != NULL)
      PtreeAddchild(np, sp);
      sp = ParseStmntlist();                        /* stmntlist      */
      if(sp != NULL)
        PtreeAddchild(np, sp);
      ParseMatch(END);                              /* '}'            */
  }
  else
    np = NULL;

  return (np);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseStmntlist -- parse statement list}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
stmntlist      = stmnt | stmntlist   
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseStmntlist()
{
  struct tree np, sp;

  np = ParseStmnt();       /* stmnt      */
  sp = np;
  while(sp != NULL){       /* stmntlist  */
    sp = ParseStmnt();
    PtreeAddsister(np, sp);
  }
  return (np);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseStmnt -- parse statements }      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseStmnt()
{

  struct tree np;

  if((np = ParseWhilestmnt())!= NULL)
    return np;
  else if((np = ParseReturnstmnt())!= NULL)
    return np;
  else if((np = ParseForstmnt())!= NULL)
    return np;
  else if((np = ParseForstmnt())!= NULL)
    return np;
  else if((np = ParseParallelstmnt())!= NULL)
    return np;
  else if((np = ParseIfstmnt())!= NULL)
    return np;
  else if((np = ParseCompstmnt()) != NULL)
    return np;
  else if(lookahead == SEMICOLON){
    ParseMatch(lookahead);
    return (PtreeMknode("void", "void"));
  }
  else if(lookahead == END){
    return (np=NULL);
  }
  else{ 
    np = ParseExpr(); 
    ParseMatch(SEMICOLON);
    return (np);
  }
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseIfstmnt  -- parse if statement}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseIfstmnt()
{
  struct tree np, sp;
  if(lookahead == IF){
    np = PtreeMknode("if", "void");
    ParseMatch(IF);
    ParseMatch(LP);
    if((sp = ParseExpr()) != NULL)
      PtreeAddchild(np, sp);
    ParseMatch(RP);
    sp = ParseStmnt();
    PtreeAddchild(np, sp);
    if((sp = ParseElsestmnt()) != NULL)
      PtreeAddchild(np, sp);
    sp = np;
  }
  else
    sp = NULL;
  return (sp);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseElsestmnt -- parse else statements }      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseElsestmnt()
{
  struct tree np, sp;
  if(lookahead == ELSE){
    ParseMatch(ELSE);
    np = PtreeMknode("else", "void");
    sp = ParseStmnt();
    PtreeAddchild(np, sp);
 }
 else
   np = NULL;
 return  (np);
}
/*
\end{verbatim}
%======================================================================*
\subsection{Pwhilestmnt  -- parse while statement}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
\end{verbatim}
\begin{verbatim}
*/
 struct tree ParseWhilestmnt()
{
  struct tree np, sp;
  if(lookahead == WHILE){
    np = PtreeMknode("while", "void");
    ParseMatch(WHILE);
    ParseMatch(LP);
    if((sp = ParseExpr()) != NULL)
      PtreeAddchild(np, sp);
    ParseMatch(RP);
    sp = ParseStmnt();
    PtreeAddchild(np, sp);
    sp = np;
  }
  else
    sp = NULL;

  return (sp);
 }
/*
\end{verbatim}
%======================================================================*
\subsection{Parseforstmnt  -- parse for statement}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
\end{verbatim}
\begin{verbatim}
*/
 struct tree ParseForstmnt()
{
  struct tree np, sp, rp;
  if(lookahead == FOR){
    np = PtreeMknode("for", "void");
      ParseMatch(FOR);
      ParseMatch(LP);
      if((sp = ParseExpr()) != NULL)
         PtreeAddchild(np, sp);
      ParseMatch(SEMICOLON);
      if((rp = ParseExpr()) != NULL)
         PtreeAddsister(sp, rp);
      ParseMatch(SEMICOLON);
      if((rp = ParseExpr()) != NULL)
        PtreeAddsister(sp, rp);
      ParseMatch(RP);
      sp = ParseStmnt();
      PtreeAddchild(np, sp);
      sp = np;
  }
  else
    sp = NULL;

  return (sp);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseParallestmnt  -- parse parallel statement}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
\end{verbatim}
\begin{verbatim}
*/
 struct tree ParseParallelstmnt()
{
  struct tree np, rp, sp;

  if(lookahead == PARALLEL){
    np = PtreeMknode("parallel", "void");
    ParseMatch(PARALLEL);
    ParseMatch(LP);
    rp = PtreeMknode("sliceseq", "void");
    PtreeAddchild(np,rp);
    if((sp = ParseSliceseq(rp)) == NULL)
      ErrError("Syntax error");

    if(lookahead == RP){
      ParseMatch(RP);
      sp = ParseStmnt();
      PtreeAddchild(np, sp);
      return(np);
    }
    else {
      ErrError("Syntax error");
    }
  }
  else
    return(rp=NULL);

  return(rp=NULL);
}    
/*
\end{verbatim}
%======================================================================*
\subsection{ParseSliceseq  -- parse slice sequence}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
*/
 struct tree ParseSliceseq(struct tree np)
{
   struct tree sp;

   if((sp = ParseSlice()) != NULL){
       PtreeAddchild(np,sp);
   }
   else{
     ErrError("Syntax error");
   }
  
   if(lookahead == COMMA){
     ParseMatch(COMMA);
     ParseSliceseq(np);
   }
   else {
     return(np);
   }

   return(np);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseSlice  -- parse slice}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
*/
 struct tree ParseSlice()
{
   struct tree np, sp, rp;

   if((sp = ParseExpr()) != NULL){
      np=PtreeMknode("slice","void");
      PtreeAddchild(np,sp);
      ParseMatch(COLON);
      if((rp = ParseExpr()) != NULL)
         PtreeAddchild(np, rp);
      if(lookahead == COLON){
        ParseMatch(COLON);
        if((rp = ParseExpr()) != NULL){
          PtreeAddchild(np, rp);
        }
        else {
          ErrError("Syntax error");
        }
      }
   }
   else {
     ErrError("Syntax error");
   }
   return (np);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseReturnstmnt  -- parse return statement}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
*/
 struct tree ParseReturnstmnt()
{
  struct tree np, sp;
  if(lookahead == RETURN){
    np = PtreeMknode("return", "void");
    ParseMatch(RETURN);
    if((sp = ParseExpr()) != NULL)
      PtreeAddchild(np, sp);
      sp = np;
      ParseMatch(SEMICOLON);
  }
  else
    sp = NULL;

  return (sp);
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseExprlist -- parse expression list}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
 exprlist    = [ expr exprseq ]
\end{verbatim}
\begin{verbatim}
*/
 struct tree ParseExprlist()
{
  struct tree np, sp;

  np = ParseExpr();
  if(np != NULL){
    sp = PtreeMknode("exprlist", "void");
    PtreeAddchild(sp, np);
    ParseExprseq(np);
  }
  else
    sp = NULL;
  return sp;
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseExprseq -- parse expression sequence }      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseExprseq(struct tree p)
{
  if(lookahead == COMMA){
    ParseMatch(lookahead);
    PtreeAddsister(p, ParseExpr());
    ParseExprseq(p);
  }
  return p=NULL;
}
/*
\end{verbatim}
%======================================================================*
\subsection{ParseExpr -- parse expressions}      
%======================================================================* 
The following part of the grammar is implemented:
\begin{verbatim}
\end{verbatim}
\begin{verbatim}
*/
struct tree ParseExpr()
{
  struct tree np, sp, rp;
  rp = NULL;
  np = ParseAsgexpr(rp);
  if(np != NULL){
     sp = PtreeMknode("expr","void");
     PtreeAddchild(sp, np);
     np = sp;
  }
  return (np);
}
/*
\end{verbatim}
%=====================================================================
\subsection{Pasgexpr -- parse assignmnet expressions}    
%=====================================================================
The following part of the grammar is implemented :
\begin{verbatim}
asgexpr        : relexpr asgexprseq 
*/ 
 struct tree ParseAsgexpr(struct tree p)
{
  struct tree np;

  np = ParseRelexpr(p);             
  np = ParseAsgexprseq(np);  
  return np;
}
/*
\end{verbatim}
%=====================================================================
   ParseAasgexprseq  --  parse sequence of assignment expressions
%=====================================================================
The following part of the grammar is implemented:
\begin{verbatim}
asgexprSeq        = '='    relexpr asgexprseq 
*/
struct tree ParseAsgexprseq(struct tree p)
{
  struct tree np, rp, sp;

  if((lookahead == ASSIGN)){           
    np = PtreeMknode("binexpr", ScanGetext()); 
    ParseMatch(lookahead);      
    PtreeAddchild(np, p);           
    rp = ParseRelexpr(np); 
    sp = ParseAsgexprseq(rp);
    PtreeAddchild(np, sp);
  }
  else
    np = p;

  return (np);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{ParseRelexpr -- parse relational expressions}
%=====================================================================
The following part of the grammar is implemented:
\begin{verbatim}
*/
struct tree ParseRelexpr(struct tree p)
{
  struct tree np;

  np = ParseAddexpr(p);             
  np = ParseRelexprseq(np);  
  return (np);
}
/*
\end{verbatim}
%=====================================================================
\subsection{ParseRelexprseq  --  parse sequence of relational 
            expressions}
%=====================================================================
The following part of the grammar is implemented:
\begin{verbatim}
*/
struct tree ParseRelexprseq(struct tree p)
{
  struct tree np, rp, sp;

  if((lookahead == LT)  ||        
    (lookahead == GT)  ||
    (lookahead == GE)  ||
    (lookahead == EQ)  ||
    (lookahead == NE)  ||
    (lookahead == OR)  ||
    (lookahead == AND) ||
    (lookahead == LE)){ 
    np = PtreeMknode("binexpr", ScanGetext()); 
    ParseMatch(lookahead);      
    PtreeAddchild(np, p);      
    rp = ParseAddexpr(np); 
    PtreeAddchild(np, rp);
    sp = ParseRelexprseq(np); 
  }
  else
    sp = p;

  return (sp);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{ParseAddexpr  --  parse additive expressions} 
%=====================================================================
The following part of the grammar is implemented:
\begin{verbatim}
*/
struct tree ParseAddexpr(struct tree p)
{
  struct tree np;

  np = ParseMultexpr(p);             
  np = ParseAddexprseq(np);  
  return (np);
}
/*
\end{verbatim}
%=====================================================================
\subsection{PaddexprSeq  --  parse sequence of additive expressions}
%=====================================================================
The following part of the grammar is implemented:
\begin{verbatim}
*/
struct tree ParseAddexprseq(struct tree p)
{
  struct tree np, rp, sp;

  if((lookahead == PLUS)  ||        
    (lookahead == MINUS)){ 
     np = PtreeMknode("binexpr", ScanGetext()); 
     ParseMatch(lookahead);      
     PtreeAddchild(np, p);      
     rp = ParseMultexpr(np); 
     PtreeAddchild(np, rp);
     sp = ParseAddexprseq(np); 
  }
  else
     sp = p;

  return (sp);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{Pmultexpr  --  parse multiplicative expressions}
%=====================================================================
The following part of the grammar is implemented:
\begin{verbatim}
*/
struct tree ParseMultexpr(struct tree p)
{
  struct tree np;

  np = ParseUnexpr(p);   
  np = ParseMultexprseq(np);  
  return (np);
}
/*
\end{verbatim}
%=====================================================================
\subsection{Pmultexprseq -- parse sequence of multiplicative 
            expressions}
%=====================================================================
\begin{verbatim}
*/
struct tree ParseMultexprseq(struct tree p)
{
  struct tree np, rp, sp;

  if((lookahead == STAR)  || 
    (lookahead == SLASH)){ 
     np = PtreeMknode("binexpr", ScanGetext());   
     ParseMatch(lookahead); 
     PtreeAddchild(np, p);           
     rp = ParseUnexpr(np);
     PtreeAddchild(np, rp);         
     sp = ParseMultexprseq(np);            
  }
  else
    sp = p;

  return (sp);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{Punexpr  -- parse unary expressions} 
%=====================================================================
The following part of the grammar is implemented:
\begin{verbatim}
*/
struct tree ParseUnexpr(struct tree p)
{
  struct tree np, sp;

  if(lookahead == MINUS){             /* Unary minus         */
    sp = PtreeMknode("unexpr", ScanGetext());
    ParseMatch(lookahead); 
    np = ParseUnexpr(p);
    PtreeAddchild(sp, np);
  }
  else
    sp = ParsePrimexpr(p);

    return (sp); 
}
/*
\end{verbatim}
%=============================================================*
\subsection{ParsePrimexpr -- parse primary expressions}
%=============================================================*
The following part of the grammar is implemented:
\begin{verbatim}
primexpr       = ID ['[' exprlist ']'] | '(' exprlist ')'] ) | ['.' ident]
                 | CAST '(' type ',' asgexpr ')'  
                 | SCONST | ICONST | RCONST | NEW '(' type ')'  
                 | CMPLX '(' expr ')' | IM '(' expr ')'| RE '(' expr ')'
                 | LEN '(' expr, expr ')' | SIZEOF '(' type ')'
ident         =  ID  [ '['exprlist ']' ] 
\end{verbatim}
*/
struct tree ParsePrimexpr(struct tree p)
{
  struct tree np, sp, rp;

  if(lookahead == ID){
    sp = PtreeMknode("identifier", ScanGetext()); /* Identifier          */
    ParseMatch(ID); 
    if(lookahead == LB){                 /* Array Reference     */
      ParseMatch(lookahead);
      PtreeSetarray(sp, "array");
      np = ParseExprlist();
      PtreeAddchild(sp, np);
      ParseMatch(RB);
      if(lookahead == POINT){            /* Structure reference */
        ParseMatch(POINT);
        np = ParseIdent();
        PtreeAddchild(sp,np);
        PtreeSetname(np, "selector");
      }
    }
    else if(lookahead == LP){           /* Function call        */
      ParseMatch(lookahead);
      PtreeSetname(sp,"fcall");
      np=NULL;
      if(lookahead != RP){
        np = ParseExprlist();
      }
      ParseMatch(RP);
      if(np != NULL) 
        PtreeAddchild(sp,np);
    }
    else if(lookahead == POINT){         /* Structure reference */
      ParseMatch(POINT);
      np = ParseIdent();
      PtreeAddchild(sp,np);
      PtreeSetname(np, "selector");
    }
  }
  else if(lookahead == CAST){           /* Cast        */
    ParseMatch(lookahead);
    sp=PtreeMknode("cast", "void");
    ParseMatch(LP);
    np=ParseType();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(COMMA);
    np = ParseExpr();
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  }
  else if(lookahead == NEW){           /* The new operator  */
    ParseMatch(lookahead);
    sp=PtreeMknode("new", "void");
    ParseMatch(LP);
    np=ParseType();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  }
 else if(lookahead == DELETE){         /* The delete operator  */
    ParseMatch(lookahead);
    sp=PtreeMknode("delete", "void");
    ParseMatch(LP);
    np=ParseExpr();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  }
  else if(lookahead == CMPLX){           /* The cmplx operator  */
    ParseMatch(lookahead);
    sp=PtreeMknode("cmplx", "void");
    ParseMatch(LP);
    np = ParseExprlist();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  }
  else if(lookahead == RE){           /* The re operator  */
    ParseMatch(lookahead);
    sp=PtreeMknode("re", "void");
    ParseMatch(LP);
    np = ParseExpr();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  }
  else if(lookahead == IM){           /* The im operator  */
    ParseMatch(lookahead);
    sp=PtreeMknode("im", "void");
    ParseMatch(LP);
    np = ParseExpr();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  }
  else if(lookahead == LEN){           /* The im operator  */
    ParseMatch(lookahead);
    sp=PtreeMknode("len", "void");
    ParseMatch(LP);
    np = ParseExpr();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(COMMA);
    rp = ParseExpr();
    if(rp == NULL)
       ErrError("Syntax error");
    else
       PtreeAddsister(np,rp);
    ParseMatch(RP);
  }
  else if(lookahead == ICONST) {           /* Integer constant */
        sp = PtreeMknode("iconstant", ScanGetext());
        ParseMatch(ICONST); 
  }
  else if(lookahead == RCONST) {           /* Float   constant */
    sp = PtreeMknode("rconstant", ScanGetext());
    ParseMatch(RCONST); 
  }
  else if(lookahead == SCONST) {          /* String constant  */
    sp = PtreeMknode("sconstant", ScanGetext());
    ParseMatch(SCONST); 
  }
  else if(lookahead == LP){           /* Parenthized expression */
    ParseMatch(LP); 
    sp = ParseAsgexpr(p); 
    ParseMatch(RP); 
  }
  else
    ErrError("Syntax error");              // No match  
  return sp;
}

// ParseIdent parses identifier
//The following part of the grammar is implemented:
//ident         =  ID  [ '['exprlist ']' ] 
struct tree ParseIdent()
{
  struct tree np, sp;

  if(lookahead == ID){
    sp = PtreeMknode("identifier", ScanGetext()); 
    ParseMatch(ID); 
    if(lookahead == LB){                 
      ParseMatch(lookahead);
      PtreeSetarray(sp, "array");
      np = ParseExprlist();
      PtreeAddchild(sp, np);
      ParseMatch(RB);
    }
   }
  else
    sp = NULL;
  return sp;
}

// Pmatch matches a token and read lookahead token
int ParseMatch(int t)
{
  if(lookahead == t){
    lookahead = ScanGetok();
  }        
  else {
    ErrError("syntax error");
    lookahead = ScanGetok();
  }
  return(OK);
}
