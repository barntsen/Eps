# Parse is the module containing all parser routines.
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
#    parse = 
#        import 
#      | fdef 
#      | extdecl
#      | STOP
#
#   import = IMPORT ID NL
#
#   fdef   = DEF type ID '(' [arglist] ')' [compstmnt]
#
#   extdecl = 
#        type   ':' NL IND structdeclar 
#      | ID  [idseq] NL 
#
#   type = 
#        INT 
#      | REAL 
#      | COMPLEX 
#      | CHAR 
#      | CONST  
#      | STRUCT ID 
#      | [ '['arrayarg']' ]
#
#   structdeclar = declarations DIND
#   idseq        = ',' ID  [idseq] 
#   arrayarg     = 
#        * 
#      | ',' arrayarg
#
#   arglist      = type [ID] [argseq] 
#   argseq       = ',' [ID]  argseq  
#   declarations = declaration [';'] NL [declarations]
#   declaration  = type ID 
#      | [idseq] 
#      | constdecl  
#
#   constdecl    = "=" expr [';'] NL
#
#   compstmnt      = 
#       ':'  NL IND declarations 
#      | stmntlist DIND 
#
#   stmntlist = stmnt [';'] NL [stmntlist]
#
#   stmnt  = 
#      |ifstmnt
#      |compstmnt
#      |whilestmnt
#      |forstmnt 
#      |parallelstmnt
#      |return NL
#      |PASS NL
#      |expr 
#
#   ifstmnt        = IF '(' expr')' stmnt elsestmnt
#   elsestmnt      = ELSE stmnt 
#   whilestmnt     = WHILE '(' expr')' stmnt 
#   forstmnt       = FOR '(' expr ';' expr ';' expr')' stmnt 
#   parallelstmnt  = PARALLEL '('  sliceseq ')' stmnt 
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
#      | ident
#      | '(' exprlist ')'] ) 
#      | CAST '(' type ',' asgexpr ')'  
#      | SCONST 
#      | ICONST 
#      | RCONST 
#      | NEW '(' type ')'  
#      | CMPLX '(' expr ')' 
#      | IM '(' expr ')'
#      | RE '(' expr ')'
#
#    ident =  ID  [ '['exprlist ']' ] ['.' ident] 

import libe     # Library interface              
import ptree    # Parse Tree routines interface  
import err      # Error routines interface       
import scan     # Lexical scanner interface      


int lookahead;            # Look ahead token 

int ParseIniparse() :

  # ParseIniparse initializes the parser. 

 lookahead = ScanGetok();
 return(OK);

# Forward declarations
struct tree ParseExpr() : 
  pass

struct tree ParseAsgexpr(struct tree p):
  pass


struct tree ParseStmnt() : 
  pass

struct tree ParseElsestmnt() : 
  pass

struct tree ParseCompstmnt() : 
  pass

int ParseError(char [*] s) :
  
  # Prints parsing errors and exits.
  #
  # Parameters:
  #   s: Error message.
  #
  # Returns : Exits
  #

  ErrError(ScanGetfile(),ScanGetline(), s);

  return(OK);

int ParseGetlookahead() :
  
  # ParseGetlookahead gets the lookahead token                             
  #
  # Returns: lookahead token
  #

  return (lookahead);       # Return lookahead token     

int ParseMatch(int t) :
  
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
    lookahead = ScanGetok();
  else :
    LibePs("Was expecting: "); LibePi(t); LibePs(", but got: "); 
    LibePi(lookahead); LibePs("\n");
    ParseError("syntax error");
    lookahead = ScanGetok();
  return(OK);

 

struct tree ParseMknode(char [*] name, char [*] def) :

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

  p = PtreeMknode(name,def);
  PtreeSetline(p,ScanGetline());
  PtreeSetfile(p,ScanGetfile());
  return(p);

struct tree ParseExprseq(struct tree p) :

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

struct tree ParseExprlist() :

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

int ParseArrayarg(struct tree p) :

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

int ParseIdseq(struct tree p) :

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

int ParseConstdecl(struct tree p) :

  # ParseConstdecl  parses constant declaration    
  # The following part of the grammar is implemented
  #    constdecl      = "=" expr ';'

  struct tree np;

  np=ParseExpr();
  if(np != NULL):
   PtreeAddchild(p,np);
  return(OK);

struct tree ParseIdent() :

  # ParseIdent parses identifier
  # The following part of the grammar is implemented:
  # ident         =  ID  [ '['exprlist ']' ] 

  struct tree np, sp;

  if(lookahead == ID):
    sp = ParseMknode("identifier", ScanGetext()); 
    ParseMatch(ID); 
    if(lookahead == LB):                 
      ParseMatch(lookahead);
      PtreeSetarray(sp, "array");
      np = ParseExprlist();
      PtreeAddchild(sp, np);
      ParseMatch(RB);
  else:
    sp = NULL;
  return sp;

struct tree ParseType() :

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

struct tree ParsePrimexpr(struct tree p) :

  # ParsePrimexpr -- parse primary expressions
 
  # The following part of the grammar is implemented:
  #  primexpr       = ID ['[' exprlist ']'] | '(' exprlist ')'] ) | ['.' ident]
  #              | CAST '(' type ',' asgexpr ')'  
  #              | SCONST | ICONST | RCONST | NEW '(' type ')'  
  #              | CMPLX '(' expr ')' | IM '(' expr ')'| RE '(' expr ')'
  #              | LEN '(' expr, expr ')' | SIZEOF '(' type ')'

  struct tree np, sp, rp;

  if(lookahead == ID):
    sp = ParseMknode("identifier", ScanGetext()); # Identifier           
    ParseMatch(ID); 
    if(lookahead == LB):                 # Array Reference      
      ParseMatch(lookahead);
      PtreeSetarray(sp, "array");
      np = ParseExprlist();
      PtreeAddchild(sp, np);
      ParseMatch(RB);
      if(lookahead == POINT):            # Structure reference  
        ParseMatch(POINT);
        np = ParseIdent();
        PtreeAddchild(sp,np);
        PtreeSetname(np, "selector");

    else if(lookahead == LP):           # Function call         
      ParseMatch(lookahead);
      PtreeSetname(sp,"fcall");
      np=NULL;
      if(lookahead != RP):
        np = ParseExprlist();
      ParseMatch(RP);
      if(np != NULL): 
        PtreeAddchild(sp,np);

    else if(lookahead == POINT):         # Structure reference  
      ParseMatch(POINT);
      np = ParseIdent();
      PtreeAddchild(sp,np);
      PtreeSetname(np, "selector");

  else if(lookahead == CAST):           # Cast         
      ParseMatch(lookahead);
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
  
  else if(lookahead == NEW):           # The new operator   
      ParseMatch(lookahead);
      sp=ParseMknode("new", "void");
      ParseMatch(LP);
      np=ParseType();
      if(np == NULL):
        ParseError("Syntax error");
      else:
        PtreeAddchild(sp,np);

      ParseMatch(RP);
  
  else if(lookahead == DELETE):         # The delete operator   
      ParseMatch(lookahead);
      sp=ParseMknode("delete", "void");
      ParseMatch(LP);
      np=ParseExpr();
      if(np == NULL) :
        ParseError("Syntax error");
      else:
        PtreeAddchild(sp,np);

      ParseMatch(RP);

  else if(lookahead == CMPLX):           # The cmplx operator   
      ParseMatch(lookahead);
      sp=ParseMknode("cmplx", "void");
      ParseMatch(LP);
      np = ParseExprlist();
      if(np == NULL) :
        ParseError("Syntax error");
      else:
        PtreeAddchild(sp,np);

      ParseMatch(RP);
 
  else if(lookahead == RE):           # The re operator   
      ParseMatch(lookahead);
      sp=ParseMknode("re", "void");
      ParseMatch(LP);
      np = ParseExpr();
      if(np == NULL):
        ParseError("Syntax error");
      else:
        PtreeAddchild(sp,np);

      ParseMatch(RP);
 
  else if(lookahead == IM):           # The im operator   
      ParseMatch(lookahead);
      sp=ParseMknode("im", "void");
      ParseMatch(LP);
      np = ParseExpr();
      if(np == NULL):
        ParseError("Syntax error");
      else:
        PtreeAddchild(sp,np);

      ParseMatch(RP);
 
  else if(lookahead == LEN):           # The im operator   
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
 
  else if(lookahead == ICONST) :           # Integer constant  
      sp = ParseMknode("iconstant", ScanGetext());
      ParseMatch(ICONST); 
  
  else if(lookahead == RCONST) :           # Float   constant  
      sp = ParseMknode("rconstant", ScanGetext());
      ParseMatch(RCONST); 
 
  else if(lookahead == SCONST) :          # String constant   
      sp = ParseMknode("sconstant", ScanGetext());
      ParseMatch(SCONST); 
  
  else if(lookahead == LP):           # Parenthized expression  
      ParseMatch(LP); 
      sp = ParseAsgexpr(p); 
      ParseMatch(RP); 
  else :
      ParseError("Syntax error");              # No match  

  return sp;

struct tree ParseUnexpr(struct tree p) :

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

struct tree ParseMultexprseq(struct tree p) :

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
 
struct tree ParseMultexpr(struct tree p) :

  # Pmultexpr  parses multiplicative expressions.
  # The following part of the grammar is implemented:
  #   multexpr       = unexpr  multexprseq

  struct tree np;

  np = ParseUnexpr(p);   
  np = ParseMultexprseq(np);  
  return (np);

struct tree ParseAddexprseq(struct tree p) :

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
 
struct tree ParseAddexpr(struct tree p) :

  # ParseAddexpr parses additive expressions. 
  # The following part of the grammar is implemented:
  #    addexpr        = multexpr addexprseq

  struct tree np;

  np = ParseMultexpr(p);             
  np = ParseAddexprseq(np);  
  return (np);

struct tree ParseRelexprseq(struct tree p) :

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

struct tree ParseRelexpr(struct tree p) :

  # ParseRelexpr parses relational expressions.
  # The following part of the grammar is implemented:
  #    relexpr        = addexpr relexprseq

  struct tree np;

  np = ParseAddexpr(p);             
  np = ParseRelexprseq(np);  
  return (np);

struct tree ParseAsgexprseq(struct tree p) :

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
 
struct tree ParseAsgexpr(struct tree p) :

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

struct tree ParseExpr() :

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

struct tree ParseDeclaration() :

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
    if(lookahead == SEMICOLON):
      ParseMatch(SEMICOLON);
    ParseMatch(NL);
  else:
    ParseError("Missing variable in type statement");
  return (np);

struct tree ParseDeclarations():

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

int ParseArgseq(struct tree p) :

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

struct tree ParseArglist() :

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
 
int ParseStructdeclar(struct tree p) :

  # This function implements the following part of the grammar:
  #   structdeclar   = declarations END 
 
  struct tree sp, np;

  np = ParseMknode("structdec","void");
  PtreeAddchild(p,np);
  sp = ParseDeclarations();
  PtreeAddchild(np,sp);
  ParseMatch(DIND);
  return (OK);

struct tree ParseWhilestmnt() :

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
    sp = ParseStmnt();
    PtreeAddchild(np, sp);
    sp = np;
  else:
    sp = NULL;
  return (sp);

struct tree ParseReturnstmnt() :

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
      if(lookahead == SEMICOLON):
        ParseMatch(SEMICOLON);
      ParseMatch(NL);
  else:
    sp = NULL;
  return (sp);

struct tree ParseForstmnt() :

  # ParseForstmnt parses a for statement
  # The following part of the grammar is implemented:
  #    forstmnt       = FOR '(' expr ';' expr ';' expr')' stmnt 

  struct tree np, sp, rp;
  if(lookahead == FOR):
      np = ParseMknode("for", "void");
      ParseMatch(FOR);
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
      sp = ParseStmnt();
      PtreeAddchild(np, sp);
      sp = np;
  else:
    sp = NULL;
  return (sp);

struct tree ParseSlice() :

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

struct tree ParseSliceseq(struct tree np) :

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

struct tree ParseParallelstmnt() :

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
      sp = ParseStmnt();
      PtreeAddchild(np, sp);
      return(np);
    else :
      ParseError("Syntax error");
  else:
    return(rp=NULL);
  return(rp=NULL);
 
struct tree ParseElsestmnt() :

  # ParseElsestmnt parses an else statement
  # The following part of the grammar is implemented:
  #   elsestmnt      = ELSE stmnt

  struct tree np, sp;
  if(lookahead == ELSE):
    ParseMatch(ELSE);
    np = ParseMknode("else", "void");
    sp = ParseStmnt();
    PtreeAddchild(np, sp);
 
  else:
    np = NULL;

  return  (np);
 
struct tree ParseIfstmnt() :

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
    sp = ParseStmnt();
    PtreeAddchild(np, sp);
    if((sp = ParseElsestmnt()) != NULL):
      PtreeAddchild(np, sp);
    sp = np;
  else:
    sp = NULL;
  return (sp);
 
struct tree ParseStmnt() :

  # ParseStmnt parses a statement.
  # The following part of the grammar is implemented:
  #   stmnt = (ifstmnt| compstmnt| whilestmnt| forstmnt
  #            | parallelstmnt|return| expr) ';'

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
  else if((np = ParseCompstmnt()) != NULL):
    return np;
  else if(lookahead == DIND):
    return (np=NULL);
  else if(lookahead == PASS):
    ParseMatch(PASS);
    ParseMatch(NL);
    return (np=NULL);
  else: 
    np = ParseExpr(); 
    if(lookahead == SEMICOLON):
      ParseMatch(SEMICOLON);
    if(lookahead == NL):
      ParseMatch(NL);
#   else:
#     ParseMatch(NL);
#   
    return (np);

struct tree ParseStmntlist() :

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

struct tree ParseCompstmnt() :

  # ParseCompstmnt parses a compund statement
  # This function implements the production
  # compstmnt    = ':' declarations | stmntlist 'END'

  struct tree np, sp;

  if(lookahead == COLON):                         #  ':'              

    np = ParseMknode("compstmnt","void");
    ParseMatch(COLON);                     
    ParseMatch(NL);
    ParseMatch(IND);
    sp = ParseDeclarations();                     # declarations    
    if(sp != NULL):
      PtreeAddchild(np, sp);
    sp = ParseStmntlist();                      # stmntlist       
    if(sp != NULL):
      PtreeAddchild(np, sp);
    ParseMatch(DIND);                            # ':'             
  else :
    np = NULL;
  return (np);

int ParseFdef(struct tree p) :

  # ParseFdef -- parse function declaration      
  # This routine parses definition and declaration of functions according
  # to the following rule:
  #   fdecl  = [arglist] ')'  [compstmnt]

  struct tree np;

  PtreeSetname(p,"fdef");
  np = ParseArglist();
  if( np!= NULL) :
    PtreeAddchild(p, np);
  ParseMatch(RP);
  np = NULL;
  np = ParseCompstmnt();
  if( np!= NULL):
    PtreeAddchild(p, np);
  else:
    ParseError("Missing function body");
  return (OK);

struct tree ParseExtdecl() :

  # ParseExtdecl parses external declarations      
  # The following part of the grammar is implemented:
  #    extdecl    = type [( ':' structdeclar | ID ( [idseq] ";" | '(' fdecl ] ))]

  struct tree mp, np, sp, imp;

  np = ParseType();                  
  if(np == NULL):
    if(lookahead == IMPORT ): # Import
      ParseMatch(lookahead);
      if(lookahead == ID) :
        imp = ParseMknode("import",ScanGetext());
        ParseMatch(ID);
        ParseMatch(NL);
        sp  = ParseMknode("extdecl","void");
        PtreeAddchild(sp,imp);
      return(sp);
    else :
      ParseError("Syntax error");
    
  if(lookahead == COLON):            # ":"  
    ParseMatch(lookahead);
    ParseMatch(NL);
    ParseMatch(IND);
    sp = ParseMknode("extdecl", "void");
    PtreeAddchild(sp,np);
    ParseStructdeclar(np);
    return(sp);

  if(lookahead == ID):        # ID  
   sp = ParseMknode("extdecl", "void");
   PtreeAddchild(sp,np);
   mp=ParseMknode("identifier", ScanGetext());  
   PtreeAddchild(np,mp);
   ParseMatch(lookahead);
   if(lookahead == COMMA):        # idseq 
     ParseIdseq(np);
     if(lookahead == SEMICOLON):
       ParseMatch(SEMICOLON);
     ParseMatch(NL);

   else if(lookahead==LP):       # "("    
     ParseMatch(LP);
     ParseFdef(mp);
 
   else if(lookahead == ASSIGN): # Constant  
     ParseMatch(lookahead);
     ParseConstdecl(mp);
     ParseMatch(NL);
   else :
     if(lookahead == SEMICOLON):
       ParseMatch(SEMICOLON);
     ParseMatch(NL);
   
  return (sp);

struct tree ParseParse() :

  # Parse is the entry point for the eps parser.
  # Parsing starts with the symbol "extdecl"
  # which parses structure definitions, function
  # definitions and external variables.

  struct tree np;

  np = NULL;
  if(lookahead == STOP):
    return np;                 
  else:
    if(lookahead == IND) :
      ParseMatch(IND)
    np = ParseExtdecl();                        
  return (np);                
