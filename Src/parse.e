# Parse containings parser routines.
#
# Eps grammar
# The complete grammar of the epsilon language is given below using the
# EBNF notation. 
# The symbols have the following meaning:
#
# Productions : lowercase words
# Selection   : |
# FINAl       : Capitalized words
# Optional    : []
# Literal     : 'a'
# Grouping    : ()
#
#   parse =  extdecl 
#   extdecl = 
#       import 
#     | fdef
#     | const 
#     | type ID  (| [idseq]  NL) | (ASSIGN  constdecl) NL | (COLON NL IND structdeclar) 
#     
#   constdecl = RCONSTANT|SCONSTANT|ICONSTANT 
#     
#   import = IMPORT ID 
#   fdef   = DEF type ID '(' [arglist] ')' compstmnt
#   type = 
#        INT 
#      | REAL 
#      | COMPLEX 
#      | CHAR 
#      | CONST  
#      | STRUCT ID 
#        [ '['arrayarg']' ]
#
#   idseq        = ',' ID  [idseq] 
#   structdeclar = declarations DIND
#   arrayarg     = *  | ',' arrayarg
#   arglist      = type [ID] [argseq] 
#   argseq       = ',' [ID]  argseq  
#   declarations = declaration NL [declarations]
#   declaration  = type ID 
#      | [idseq] 
#      | const  
#
#   compstmnt      = 
#       ':'  NL IND declarations stmntlist DIND [compstmnt] 
#      
#
#   stmntlist = stmnt [stmntlist]
#
#   stmnt  = 
#      |ifstmnt
#      |elsestmnt
#      |whilestmnt
#      |forstmnt 
#      |parallelstmnt
#      |return NL
#      |expr NL
#
#   ifstmnt        = IF '(' expr')' compstmnt [elif] [elsestmnt]
#   elif           = ELSE ifstmnt
#   elsestmnt      = ELSE compstmnt 
#   whilestmnt     = WHILE '(' expr')' compstmnt 
#   forstmnt       = FOR '(' expr ';' expr ';' expr')' compstmnt 
#   forinstmnt     = FOR IN RANGE(expr1,expr) compstmnt
#   parallelstmnt  = PARALLEL '('  sliceseq ')' compstmnt 
#   sliceseq       = slice [, sliceseq]
#   slice          = expr ':' expr [':' expr ] 
#   returnstmnt    = RETURN  expr
#   exprlist       = expr exprseq 
#   exprseq        = ',' expr [ exprseq ]
#   expr           = asgexpr 
#   asgexpr        = relexpr asgexprseq 
#   asgexprseq     = '='    relexpr asgexprseq 
#   relexpr        = addexpr relexprseq
#   relexprseq     = 
#       '<'  
#     | '>' 
#     | '<=' 
#     | '>=' 
#     | '||' 
#     | "&&" 
#     | "!=" 
#     | "==" ) 
#
#    addexpr        = multexpr addexprseq
#    addexpseq      = ['+'|'-'  multexpr addexprseq] 
#    multexpr       = unexpr  multexprseq   
#    multexprseq    = ['*'|'/' unexpr multexprseq] 
#    unexpr         = primexpr | '-' unexpr 
#    primexpr = 
#      | ident [fcall]
#      | cast
#      | const 
#      | new
#      | cmplx
#      | im
#      | re
#    ident =  ID  [ '['exprlist ']' ] ['.' ident] 
#    fcall ='(' exprlist ')'] ) 
#    cast  = CAST '(' type ',' asgexpr ')'  
#    const = ASSIGN SCONST|RCONST|ICONST 
#    new   = NEW '(' type ')'  
#    cmplx = CMPLX '(' expr ')' 
#    im    = IM '(' expr ')'
#    re    = RE '(' expr ')'
#


import libe     # Library interface              
import ptree    # Parse Tree routines interface  
import err      # Error routines interface       
import scan     # Lexical scanner interface      


int lookahead;            # Look ahead token 

def int ParseIniparse() :

  # ParseIniparse initializes the parser. 

 lookahead = ScanGetok();
 return(OK);

# Forward declarations
def struct tree ParseExpr() : 
  pass

def struct tree ParseAsgexpr(struct tree p):
  pass

def struct tree ParseStmnt() : 
  pass

def struct tree ParseElsestmnt() : 
  pass

def struct tree ParseIfstmnt() : 
  pass

def struct tree ParseCompstmnt() : 
  pass

def int ParseError(char [*] s) :
  
  # Prints parsing errors and exits.
  #
  # Parameters:
  #   s: Error message.
  #
  # Returns : Exits
  #

  ErrError(ScanGetfile(),ScanGetline(), s);

  return(OK);

def int ParseGetlookahead() :
  
  # ParseGetlookahead gets the lookahead token                             
  #
  # Returns: lookahead token
  #

  return (lookahead);       # Return lookahead token     

def int ParseMatch(int t) :
  
  # ParseMatch accepts a token.
  #
  # Parameters:
  #   t :    Token value
  #   
  # Returns :
  # OK in case of match, stops parsing if not.
  #
  # Pmatch matches a token and read lookahead token

  if(lookahead == t):
    lookahead = ScanGetok()
  else :
    LibePs("Was expecting: "); LibePi(t); LibePs(", but got: "); 
    LibePi(lookahead); LibePs("\n");
    ParseError("syntax error")
    lookahead = ScanGetok()
  return(OK)

def struct tree ParseMknode(char [*] name, char [*] defn) :

  # ParseMknode makes a new parse tree node
  #
  # Parameters:
  #   name : Name of node
  #   def  : Definition of node
  #
  # Returns :
  #   New node
  #
  # ParseMknode creates a node and sets
  # the input file name field and the 
  # line no field of the node.

  struct tree p; 

  p = PtreeMknode(name,defn);
  PtreeSetline(p,ScanGetline());
  PtreeSetfile(p,ScanGetfile());
  return(p);

def struct tree ParseExprseq(struct tree p) :

  # ParseExprseq parses an expression sequence       
  #
  # Parameters : 
  #   p : Expression node
  #
  # Returns : 
  #   NULL reference
  #
  # An expression node is added to the input node.
  # The following part of the grammar is implemented
  #    exprseq        = ',' expr [ exprseq ]

  if(lookahead == COMMA):
    ParseMatch(lookahead);
    PtreeAddsister(p, ParseExpr());
    ParseExprseq(p);
  return p=NULL;

def struct tree ParseExprlist() :

  # ParseExprlist parses a list of expressions.
  #  The following part of the grammar is implemented:
  #    exprlist    = [ expr exprseq ]

  struct tree np, sp;

  np = ParseExpr();
  if(np != NULL):
    sp = ParseMknode("exprlist", "void");
    PtreeAddchild(sp, np);
    ParseExprseq(np);
  else:
    sp = NULL;
  return sp;

def int ParseArrayarg(struct tree p) :

  # ParseArrayarg parses dummy array arguments      
  # The following part of the grammar is implemented:
  #   arrayarg          = '*' [ ',' arrayarg ]

  struct tree np, sp;

  if(lookahead == STAR):
    ParseMatch(STAR);
    sp = ParseMknode("arrayargs", "void");
    PtreeAddchild(p,sp);
    if(lookahead == COMMA):            
      ParseMatch(lookahead);
      ParseArrayarg(p);
    else:
      return(OK);
  else:
    sp = ParseMknode("arrayargs", "void");
    PtreeAddchild(p,sp);
    np = ParseExprlist();
    if(sp != NULL):
      PtreeAddchild(sp,np);
    else:
      ParseError("Syntax error");
    return(OK);
  return(OK);

def int ParseIdseq(struct tree p) :

  # ParseIdseq -- parse identifier sequence      
  # The following part of the grammar is implemented:
  #   idseq          = ',' ID  [ idseq ]

  struct tree sp;

  if(lookahead == COMMA):
    ParseMatch(lookahead);
    sp = ParseMknode("identifier", ScanGetext());
    PtreeAddchild(p, sp);
    ParseMatch(ID);        
    ParseIdseq(p);
  else:
    return(OK);
  return(OK);

def int ParseConstdecl(struct tree p) :

  # Parse constant declaration
  #
  # Parameters:
  #   p: Tree identifier node
  #
  # Returns: 
  #  OK
  #  The constant node is added as a child to node p.
  #

  char [*] sign
  sign=NULL

  if(lookahead == MINUS):
    ParseMatch(MINUS)
    sign="-"

  tmp=ScanGetext()
  if(sign != NULL):
    value=LibeStradd(sign,tmp)
  else :
    value=tmp

  if(lookahead==ICONST):
    np=ParseMknode("iconstant",value)
  else if(lookahead==RCONST):
    np=ParseMknode("rconstant",value)
  else if(lookahead==SCONST):
    np=ParseMknode("sconstant",value)
  if(np != NULL):
    PtreeAddchild(p,np)

  ParseMatch(lookahead)
  return(OK)


def struct tree ParseType() :

  # This function implements the following part of the grammar:
  #   type  = [( INT | REAL | CONST | COMPLEX | CHAR  
  #           | STRUCT ID )] [ '['arrayarg']']

  struct tree np, sp;

  if((lookahead == INT)   || \
    (lookahead == REAL)   || \
    (lookahead == CHAR)   || \
    (lookahead == CONST)  || \
    (lookahead == COMPLEX)):
    np = ParseMknode("type", ScanGetext());
    ParseMatch(lookahead);

  else if(lookahead == STRUCT) : 
    ParseMatch(lookahead);
    np = ParseMknode("type", ScanGetext());
    PtreeSetstruct(np, "struct");
    ParseMatch(ID);
  else :
    np = NULL;

  if(lookahead == LB):
    if(np==NULL):
      ParseError("Missing type");
    ParseMatch(lookahead);
    PtreeSetarray(np, "array");
    sp = ParseMknode("arrayargs", "void");
    PtreeAddchild(np,sp);
    ParseArrayarg(sp);
    ParseMatch(RB);
  return (np);

def struct tree ParseFcall(struct tree p) :

  # Parse function call
  #
  # Returns:
  #   Function call  parse tree
  #
  struct tree np

  sp=PtreeMknode("fcall",PtreeGetdef(p))
  ParseMatch(LP);
  np=NULL;
  if(lookahead != RP):
    np = ParseExprlist();
  ParseMatch(RP);
  if(np != NULL):
    PtreeAddchild(sp,np);
  return(sp)

def struct tree ParseIdent() :

  # Parse identifier
  #
  # Returns:
  #   Identifier parse tree
  #

   sp = ParseMknode("identifier", ScanGetext()); # Identifier           
   ParseMatch(ID); 
   if(lookahead == LB):      
     ParseMatch(lookahead);
     PtreeSetarray(sp, "array");
     np = ParseExprlist();
     PtreeAddchild(sp, np);
     ParseMatch(RB);
   if(lookahead == POINT):  
     ParseMatch(POINT);
     np = ParseIdent();
     PtreeAddchild(sp,np);
     PtreeSetname(np, "selector");
   return(sp)

def struct tree ParseCast() :

  # Parse cast
  #
  # Returns:
  #   cast  parse tree
  #

  ParseMatch(CAST);
  sp=ParseMknode("cast", "void");
  ParseMatch(LP);
  np=ParseType();
  if(np == NULL):
    ParseError("Syntax error");
  else:
    PtreeAddchild(sp,np);
  ParseMatch(COMMA);
  np = ParseExpr();
  PtreeAddchild(sp,np);
  ParseMatch(RP);

  return(sp)

def struct tree ParseNew() :

  # Parse new 
  #
  # Returns:
  #   new  parse tree
  #

  ParseMatch(lookahead);
  sp=ParseMknode("new", "void");
  ParseMatch(LP);
  np=ParseType();
  if(np == NULL):
    ParseError("Syntax error");
  else:
    ParseMatch(RP);
    PtreeAddchild(sp,np)
  return(sp)

def struct tree ParseDelete() :

  # Parse delete
  #
  # Returns:
  #   delete  parse tree
  #

  ParseMatch(lookahead);
  sp=ParseMknode("delete", "void");
  ParseMatch(LP);
  np=ParseExpr();
  if(np == NULL) :
    ParseError("xSyntax error");
  else:
    PtreeAddchild(sp,np);
    ParseMatch(RP)
  return(sp)


def struct tree ParseCmplx() :

  # Parse cmplx 
  #
  # Returns:
  #   cmplx  parse tree
  #

  ParseMatch(lookahead);
  sp=ParseMknode("cmplx", "void");
  ParseMatch(LP);
  np = ParseExprlist();
  if(np == NULL) :
    ParseError("Syntax error");
  else:
    PtreeAddchild(sp,np);

  ParseMatch(RP);

  return(sp)

def struct tree ParseRe() :

  # Parse re
  #
  # Returns:
  #   re  parse tree
  #

   ParseMatch(lookahead)
   ParseMatch(LP)
   sp=ParseMknode("re", "void")
   np = ParseExpr()
   if(np == NULL):
     ParseError("Syntax error")
   else:
     PtreeAddchild(sp,np)
     ParseMatch(RP)

   return(sp)


def struct tree ParseIm() :

  # Parse im
  #
  # Returns:
  #   im  parse tree
  #

  ParseMatch(lookahead);
  sp=ParseMknode("im", "void");
  ParseMatch(LP);
  np = ParseExpr();
  if(np == NULL):
    ParseError("Syntax error");
  else:
    PtreeAddchild(sp,np);
    ParseMatch(RP);
   
  return(sp)


def struct tree ParseLen() :

  # Parse len
  #
  # Returns:
  #   len  parse tree
  #

  ParseMatch(lookahead);
  sp=ParseMknode("len", "void");
  ParseMatch(LP);
  np = ParseExpr();
  if(np == NULL) :
    ParseError("Syntax error");
  else:
    PtreeAddchild(sp,np);
    ParseMatch(COMMA);
    rp = ParseExpr();
    if(rp == NULL) :
      ParseError("Syntax error");
    else:
      PtreeAddsister(np,rp);

    ParseMatch(RP);

    return(sp)
 

def struct tree ParsePrimexpr(struct tree p) :

  # ParsePrimexpr -- parse primary expressions
  #
  # Returns primary expression tree
  #

  if(lookahead == ID):
    sp=ParseIdent()
    if(lookahead==LP):
      np=ParseFcall(sp)
      delete(sp)
      sp=np
  else if(lookahead == CAST):          
    sp=ParseCast()
  else if(lookahead == NEW):          
    sp=ParseNew()
  else if(lookahead == DELETE):      
    sp=ParseDelete()
  else if(lookahead == CMPLX):  
    sp=ParseCmplx()
  else if(lookahead == RE):    
    sp=ParseRe()
  else if(lookahead == IM):   
    sp=ParseIm()
  else if(lookahead == LEN):   
    sp=ParseLen()
  else if(lookahead == ICONST) :   
      sp = ParseMknode("iconstant", ScanGetext());
      ParseMatch(ICONST); 
  else if(lookahead == RCONST) :    
      sp = ParseMknode("rconstant", ScanGetext());
      ParseMatch(RCONST); 
  else if(lookahead == SCONST) :     
      sp = ParseMknode("sconstant", ScanGetext());
      ParseMatch(SCONST); 
  else if(lookahead == LP):           
      ParseMatch(LP); 
      sp = ParseAsgexpr(p) 
      ParseMatch(RP) 
  else :
      ParseError("Syntax error") 

  return sp;

def struct tree ParseUnexpr(struct tree p) :

  # ParseUnexpr parses unary expressions. 
  # The following part of the grammar is implemented:
  #   unexpr   = primexpr | '-' unexpr

  struct tree np, sp;

  if(lookahead == MINUS):             # Unary minus          
    sp = ParseMknode("unexpr", ScanGetext());
    ParseMatch(lookahead); 
    np = ParseUnexpr(p);
    PtreeAddchild(sp, np);
  else:
    sp = ParsePrimexpr(p);

  return (sp); 

def struct tree ParseMultexprseq(struct tree p) :

  # Pmultexprseq parses sequence of multiplicative expressions.
  # The following part of the grammar is implemented:
  #   multexprseq    = ['*'|'/' unexpr multexprseq]
            
  struct tree np, rp, sp;

  if((lookahead == STAR)  || (lookahead == SLASH)): 
     np = ParseMknode("binexpr", ScanGetext());   
     ParseMatch(lookahead); 
     PtreeAddchild(np, p);           
     rp = ParseUnexpr(np);
     PtreeAddchild(np, rp);         
     sp = ParseMultexprseq(np);            
  else:
    sp = p;
  return (sp);
 
def struct tree ParseMultexpr(struct tree p) :

  # Pmultexpr  parses multiplicative expressions.
  # The following part of the grammar is implemented:
  #   multexpr       = unexpr  multexprseq

  struct tree np;

  np = ParseUnexpr(p);   
  np = ParseMultexprseq(np);  
  return (np);

def struct tree ParseAddexprseq(struct tree p) :

  # PaddexprSeq parses sequence of additive expressions.
  # The following part of the grammar is implemented:
  #    addexpseq      = ['+'|'-'  multexpr addexprseq]

  struct tree np, rp, sp;

  if((lookahead == PLUS)  || (lookahead == MINUS)):
     np = ParseMknode("binexpr", ScanGetext()); 
     ParseMatch(lookahead);      
     PtreeAddchild(np, p);      
     rp = ParseMultexpr(np); 
     PtreeAddchild(np, rp);
     sp = ParseAddexprseq(np); 
  else:
     sp = p;
  return (sp);
 
def struct tree ParseAddexpr(struct tree p) :

  # ParseAddexpr parses additive expressions. 
  # The following part of the grammar is implemented:
  #    addexpr        = multexpr addexprseq

  struct tree np;

  np = ParseMultexpr(p);             
  np = ParseAddexprseq(np);  
  return (np);

def struct tree ParseRelexprseq(struct tree p) :

  # ParseRelexprseq parses sequence of relational expressions.
  # The part of the grammar implemented is :
  #    relexprseq     = ( '<' | '>' | '<=' | '>=' '||'
  #                 | "&&" | "!=" | "==" )
            
  struct tree np, rp, sp;

  if((lookahead == LT) || (lookahead == GT)  ||  (lookahead == GE)  ||  (lookahead == EQ)  || (lookahead == NE)  ||   (lookahead == OR)  ||  (lookahead == AND) ||  (lookahead == LE)):
      np = ParseMknode("binexpr", ScanGetext()); 
      ParseMatch(lookahead);      
      PtreeAddchild(np, p);      
      rp = ParseAddexpr(np); 
      PtreeAddchild(np, rp);
      sp = ParseRelexprseq(np); 
  else:
      sp = p;
  return (sp);

def struct tree ParseRelexpr(struct tree p) :

  # ParseRelexpr parses relational expressions.
  # The following part of the grammar is implemented:
  #    relexpr        = addexpr relexprseq

  struct tree np;

  np = ParseAddexpr(p);             
  np = ParseRelexprseq(np);  
  return (np);

def struct tree ParseAsgexprseq(struct tree p) :

  # PraseAsgexprseq parses sequence of assignment expressions
  # The following part of the grammar is implemented:
  #  asgexprSeq        = '='    relexpr asgexprseq 

  struct tree np, rp, sp;

  if((lookahead == ASSIGN)):           
    np = ParseMknode("binexpr", ScanGetext()); 
    ParseMatch(lookahead);      
    PtreeAddchild(np, p);           
    rp = ParseRelexpr(np); 
    sp = ParseAsgexprseq(rp);
    PtreeAddchild(np, sp);
  else:
    np = p;
  return (np);
 
def struct tree ParseAsgexpr(struct tree p) :

  # Parameters :
  #   p: Expression tree node
  #
  # Returns:
  #   np : Tree nodes with assignment expression sequence

  # Pasgexpr parses assignmnet expressions    
  # The following part of the grammar is implemented
  #  asgexpr        : relexpr asgexprseq 

  struct tree np;

  np = ParseRelexpr(p);             
  np = ParseAsgexprseq(np);  
  return np;

def struct tree ParseExpr() :

  # ParseExpr  parses expressions      
  # The following part of the grammar is implemented
  #   expr           = asgexpr
 
  struct tree np, sp, rp;

  rp = NULL;
  np = ParseAsgexpr(rp);
  if(np != NULL):
     sp = ParseMknode("expr","void");
     PtreeAddchild(sp, np);
     np = sp;
  return (np);

def struct tree ParseDeclaration() :

  # ParseDeclaration parses a declaration
  # The following part of the grammar is implemented:
  #   declaration    = type ID idseq';'

  struct tree mp, np;

  np = ParseType();             # type  
  if(np == NULL):
    return(np);

  if(lookahead == ID):        # ID   
    mp=ParseMknode("identifier", ScanGetext());  
    PtreeAddchild(np,mp);
    ParseMatch(lookahead);
    if(lookahead == COMMA):
      ParseIdseq(np);
    else if(lookahead == ASSIGN):
      ParseMatch(lookahead);
      ParseConstdecl(mp);
    ParseMatch(NL);
  else:
    ParseError("Missing variable in type statement");
  return (np);

def struct tree ParseDeclarations():

  # ParseDeclarations parses declarations
  # The following part of the grammar is implemented:
  #   declarations   = declaration [declarations]

  struct tree np, sp;

  np=ParseDeclaration();
  if(np != NULL):
    sp = ParseMknode("declarations", "void");
    PtreeAddchild(sp,np);
  else:
    return np=NULL;
  while((np=ParseDeclaration()) != NULL):
    PtreeAddchild(sp,np);
  return(sp);

def int ParseArgseq(struct tree p) :

  # ParseArgseq parses argument sequence       
  # The following part of the grammar is implemented:
  #    argseq         = ',' [ID]  argseq  
 
  struct tree np, sp;

  if(lookahead == COMMA):
    ParseMatch(lookahead);
    if((np=ParseType()) != NULL):
      PtreeAddchild(p,np);
      if(lookahead == ID):            
        sp = ParseMknode("identifier", ScanGetext());
        PtreeAddchild(np, sp);
        ParseMatch(ID);        
      ParseArgseq(p);
  return (OK);

def struct tree ParseArglist() :

  # ParseArglist parses function argument list      
  # The following part of the grammar is implemented:
  #    arglist        = type [ID] [argseq] ';'

  struct tree mp, np, sp;

  if((np=ParseType()) != NULL):
    sp = ParseMknode("arglist", "void");
    PtreeAddchild(sp, np);
    if(lookahead == ID):            
       mp = ParseMknode("identifier", ScanGetext());
       PtreeAddchild(np, mp);
       ParseMatch(ID);        
    ParseArgseq(sp);      
  else:
    sp = NULL;
  return (sp);
 
def int ParseStructdeclar(struct tree p) :

  # This function implements the following part of the grammar:
  #   structdeclar   = declarations END 
 
  struct tree sp, np;

  np = ParseMknode("structdec","void");
  PtreeAddchild(p,np);
  sp = ParseDeclarations();
  PtreeAddchild(np,sp);
  ParseMatch(DIND);
  return (OK);

def struct tree ParseWhilestmnt() :

  # Parsewhilestmnt  parses while statement.      
  # The following part of the grammar is implmented:
  #   whilestmnt     = WHILE '(' expr')' stmnt

  struct tree np, sp;
  if(lookahead == WHILE):
    np = ParseMknode("while", "void");
    ParseMatch(WHILE);
    ParseMatch(LP);
    if((sp = ParseExpr()) != NULL):
      PtreeAddchild(np, sp);
    ParseMatch(RP);
    sp = ParseCompstmnt();
    PtreeAddchild(np, sp);
    sp = np;
  else:
    sp = NULL;
  return (sp);

def struct tree ParseReturnstmnt() :

  # ParseReturnstmnt  parses return statement      
  # The following part of the grammar is implemented
  #   returnstmnt    = RETURN  expr

  struct tree np, sp;

  if(lookahead == RETURN):
    np = ParseMknode("return", "void");
    ParseMatch(RETURN);
    if((sp = ParseExpr()) != NULL):
      PtreeAddchild(np, sp);
      sp = np;
      ParseMatch(NL);
  else:
    sp = NULL;
  return (sp);

def struct tree ParseForstmntc (struct tree np) :

  # ParseForstmnt parses a for statement
  # The following part of the grammar is implemented:
  # forstmnt       = '(' expr ';' expr ';' expr')' stmnt 

  struct tree sp, rp;
  ParseMatch(LP);
  if((sp = ParseExpr()) != NULL):
    PtreeAddchild(np, sp);
    ParseMatch(SEMICOLON);
    if((rp = ParseExpr()) != NULL):
       PtreeAddsister(sp, rp);
    ParseMatch(SEMICOLON);
    if((rp = ParseExpr()) != NULL):
      PtreeAddsister(sp, rp);
    ParseMatch(RP);
    sp = ParseCompstmnt();
    PtreeAddchild(np, sp);
    sp = np;
  else:
    sp = NULL;
  return (sp);

def struct tree ParseForstmntpy(struct tree np) :

  # ParseForstmntpy parses a python style for statement
  #
  # Parameters : 
  #   np : Child node of for statment
  #
  # Returns:
  # 
  # The np node on return contains a parse tree for a for loop.
  #
  # The following part of the grammar is implemented:
  #   forstmntpy = ID IN RANGE '(' expr ',' expr ')'  compstmnt      
  #
  # The strategy for implementing the Python style for loop
  # is to create a parse tree identical to the for c-style loop.
  # This avoids extra code for semantic check and code generation.

  struct tree sp  # Root of subtree for the for loop
  struct tree ap, bp, cp, dp, ep, fp, gp, hp, ip, jp, mp, qp, rp, tp;
  char [*] id     # Name of loop variable

  sp=NULL
  if(lookahead == ID) : 
    sp=PtreeMknode("expr","void")

    # Add the parse tree for the first expression
    # (initialization of loop variable ) except the lower limit 
    # which is added below
    # 
    PtreeAddchild(np,sp)
    rp=PtreeMknode("binexpr","=")
    PtreeAddchild(sp,rp)
    id = LibeStrsave(ScanGetext())
    tp=PtreeMknode("identifier",ScanGetext())
    PtreeAddchild(rp,tp)

    # Parse the loop variable, IN token, Range token
    # and left parantheis. 
    ParseMatch(ID)
    ParseMatch(IN)
    ParseMatch(RANGE)
    ParseMatch(LP)

    # Get lower range limit
    # and add to the first expression above
    qp=ParseExpr()
    qp=PtreeMvchild(qp)
    PtreeAddsister(tp,qp)
    
    # Get the upper range limit
    ParseMatch(COMMA)
    mp=ParseExpr()
    mp=PtreeMvchild(mp)

    # Create the second expression  (end condition)
    ap=PtreeMknode("expr","void")
    PtreeAddsister(sp,ap)
    bp=PtreeMknode("binexpr","<")
    PtreeAddchild(ap,bp)
    cp = PtreeMknode("identifier",id)
    PtreeAddchild(bp,cp)
    PtreeAddsister(cp,mp)

    # Create the third expression (increment of loop variable)
    dp=PtreeMknode("expr","void")
    PtreeAddsister(sp,dp)
    ep=PtreeMknode("binexpr","=")
    PtreeAddchild(dp,ep)
    fp = PtreeMknode("identifier",id)
    PtreeAddchild(ep,fp)

    gp=PtreeMknode("binexpr","+")
    PtreeAddsister(fp,gp)
    
    hp= PtreeMknode("identifier",id)
    PtreeAddchild(gp,hp)
    ip= PtreeMknode("iconstant","1")
    PtreeAddsister(hp,ip)

    ParseMatch(RP)
   
    jp=ParseCompstmnt()
    PtreeAddsister(sp,jp)

  return (np);


def struct tree ParseForstmnt() :

  # ParseForstmnt parses a for statement
  # The following part of the grammar is implemented:
  #    forstmnt       = FOR 

  struct tree np, sp;
  if(lookahead == FOR):
    np = ParseMknode("for", "void");
    ParseMatch(FOR);
    if(lookahead == '(') :
      sp = ParseForstmntc(np)
    else :
      sp = ParseForstmntpy(np)
  else :
    sp=NULL
  
  return (sp);


def struct tree ParseSlice() :

  # ParseSlice parses a slice list
  # The following part of the grammar is implemented:
  #   slice          = expr ':' expr [':' expr ]

   struct tree np, sp, rp;

   if((sp = ParseExpr()) != NULL):
      np=ParseMknode("slice","void");
      PtreeAddchild(np,sp);
      ParseMatch(COLON);
      if((rp = ParseExpr()) != NULL):
         PtreeAddchild(np, rp);
      if(lookahead == COLON):
        ParseMatch(COLON);
        if((rp = ParseExpr()) != NULL):
          PtreeAddchild(np, rp);
        else :
          ParseError("Syntax error");
   else :
     ParseError("Syntax error");
   return (np);

def struct tree ParseSliceseq(struct tree np) :

   # ParseSliceseq  parses slice sequence.      
   # The following part of the grammar is implemented:
   #   sliceseq       = slice [, sliceseq]

   struct tree sp;

   if((sp = ParseSlice()) != NULL):
       PtreeAddchild(np,sp);
   else:
     ParseError("Syntax error");
   if(lookahead == COMMA):
     ParseMatch(COMMA);
     ParseSliceseq(np);
   else :
     return(np);
   return(np);

def struct tree ParseParallelstmnt() :

  # ParseParallelstmnt parses a prallel statement
  # The following part of the grammar is implemented:
  # parallelstmnt  = PARALLEL '('  sliceseq ')' stmnt

  struct tree np, rp, sp;

  if(lookahead == PARALLEL):
    np = ParseMknode("parallel", "void");
    ParseMatch(PARALLEL);
    ParseMatch(LP);
    rp = ParseMknode("sliceseq", "void");
    PtreeAddchild(np,rp);
    if((sp = ParseSliceseq(rp)) == NULL):
      ParseError("Syntax error");
    if(lookahead == RP):
      ParseMatch(RP);
      sp = ParseCompstmnt();
      PtreeAddchild(np, sp);
      return(np);
    else :
      ParseError("Syntax error");
  else:
    return(rp=NULL);
  return(rp=NULL);
 
def struct tree ParseElsestmnt() :

  # ParseElsestmnt parses an else statement
  # The following part of the grammar is implemented:
  #   elsestmnt      = ELSE stmnt

  struct tree np, sp;
  if(lookahead == ELSE):
    np = ParseMknode("else", "void");
    ParseMatch(ELSE)
    if(lookahead == IF):
      sp=ParseIfstmnt()
      PtreeAddchild(np,sp)
      return(np) 
    sp = ParseCompstmnt();
    PtreeAddchild(np, sp);
 
  else:
    np = NULL;

  return  (np);
 
def struct tree ParseIfstmnt() :

  # ParseIfstmnt parses an if statement.
  # The following part of the grammar is implemented:
  #  ifstmnt = IF '(' expr')' stmnt elsestmnt

  struct tree np, sp;

  if(lookahead == IF):
    np = ParseMknode("if", "void");
    ParseMatch(IF);
    ParseMatch(LP);
    if((sp = ParseExpr()) != NULL):
      PtreeAddchild(np, sp);
    ParseMatch(RP);
    sp = ParseCompstmnt();
    PtreeAddchild(np, sp);
    if((sp = ParseElsestmnt()) != NULL):
      PtreeAddchild(np, sp);
    sp = np;
  else:
    sp = NULL;
  return (sp);
 
def struct tree ParseStmnt() :

  # ParseStmnt parses a statement.

  struct tree np;

  if((np = ParseWhilestmnt())!= NULL):
    return np;
  else if((np = ParseReturnstmnt())!= NULL):
    return np;
  else if((np = ParseForstmnt())!= NULL):
    return np;
  else if((np = ParseParallelstmnt())!= NULL):
    return np;
  else if((np = ParseIfstmnt())!= NULL):
    return np;
  else if(lookahead == DIND):
    return (np=NULL);
  else if(lookahead == PASS):
    ParseMatch(PASS);
    ParseMatch(NL);
    return (np=NULL);
  else: 
    np = ParseExpr(); 
    ParseMatch(NL);
    return (np);

def struct tree ParseStmntlist() :

  # ParseStmntlist parses a list of statements
  # The following part of the grammar is implemented:
  #   stmntlist      = stmnt | stmntlist   

  struct tree np, sp;

  np = ParseStmnt();       # stmnt       
  sp = np;
  while(sp != NULL):       # stmntlist   
    sp = ParseStmnt();
    PtreeAddsister(np, sp);
  return (np);

def struct tree ParseCompstmnt() :

  # ParseCompstmnt parses a compund statement

  struct tree np, sp;

  if(lookahead == COLON):   

    np = ParseMknode("compstmnt","void");
    ParseMatch(COLON);                     
    ParseMatch(NL);
    ParseMatch(IND);
    sp = ParseDeclarations()
    if(sp != NULL):
      PtreeAddchild(np, sp)
    sp = ParseStmntlist()
    if(sp != NULL):
      PtreeAddchild(np, sp)
    ParseMatch(DIND)
  else :
    ParseError("Empty code block")
  return (np);

def int ParseFdef(struct tree p) :

  # ParseFdef -- parse function declaration      
  # This routine parses definition and declaration of functions according
  # to the following rule:
  #   fdecl  = [arglist] ')'  [compstmnt]

  struct tree np,sp;

  np = ParseType()

  if(np != NULL) :
    PtreeAddchild(p,np)
  else :
    ParseError("Missing function type declaration");

  if(lookahead == ID):
    sp=ParseMknode("fdef", ScanGetext())
    ParseMatch(ID)
    PtreeAddchild(np,sp)

  ParseMatch(LP)
  np = ParseArglist();
  if( np!= NULL) :
    PtreeAddchild(sp, np);
  ParseMatch(RP);
  np = NULL;
  np = ParseCompstmnt();
  if( np!= NULL):
    PtreeAddchild(sp, np);
  else:
    ParseError("Missing function body");
  return (OK);

def struct tree ParseImport() :
   
  # Parse import statement
  #
  # Returns
  #   Import node

  ParseMatch(lookahead) 
  imp = ParseMknode("import",ScanGetext());
  ParseMatch(ID);
  ParseMatch(NL);
  return(imp);

def struct tree ParseExtdecl() :

  # ParseExtdecl parses external declarations      

  if(lookahead == IMPORT ): 
    p=PtreeMknode("extdecl","void")
    imp=ParseImport()
    PtreeAddchild(p,imp)
    return(p)

  if(lookahead == DEF):
    ParseMatch(DEF);
    p  = ParseMknode("extdecl","void");
    ParseFdef(p);
    return(p)

  np = ParseType()
  if(np == NULL) :
    return(np)

  if(lookahead == ID):   
    p = ParseMknode("extdecl", "void");
    PtreeAddchild(p,np);
    mp=ParseMknode("identifier", ScanGetext());  
    PtreeAddchild(np,mp)
    ParseMatch(lookahead)

    if(lookahead == COMMA):   
      ParseIdseq(np)
      ParseMatch(NL)
      return(p)

    if(lookahead == ASSIGN): 
      ParseMatch(lookahead)
      ParseConstdecl(mp)
    
    ParseMatch(NL)
    return(p)  

  if(lookahead == COLON):     
    ParseMatch(lookahead)
    ParseMatch(NL)
    ParseMatch(IND)
    p = ParseMknode("extdecl", "void");
    PtreeAddchild(p,np)
    ParseStructdeclar(np)
    return(p);
    
  return(p=NULL)
  

def struct tree ParseParse() :

  # Parse is the entry point for the eps parser.
  # Parsing starts with the symbol "extdecl"
  # which parses structure definitions, function
  # definitions and external variables.

  struct tree np

  np = NULL;
  if(lookahead == STOP):
    return np                 
  else:
    np = ParseExtdecl()                        
  return (np);                
