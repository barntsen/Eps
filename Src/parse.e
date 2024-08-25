# Parse is the module containing all parser routines.
#
# Eps grammar
# The complete grammar of the epsilon language is given below using the
# EBNF notation. 
#
#    extdecl         = type   ':' structdeclar | ID  [idseq] | [ '(' fdecl ]  
#    type            = INT | REAL | COMPLEX | CHAR | CONST  | STRUCT ID   [ '['arrayarg']' ]
#    structdeclar   = declarations 'END'
#    idseq          = ',' ID  [idseq] 
#    fdecl          = [arglist] ')' [compstmnt]
#    arrayarg       = * | ',' arrayarg
#    arglist        = type [ID] [argseq] 
#    argseq         = ',' [ID]  argseq  
#    declarations   = declaration [declarations]
#    declaration    = type ID (idseq | constdecl ';')
#    constdecl      = "=" expr ';'
#    compstmnt      = ':' declarations | stmntlist 'END' 
#    stmntlist      = stmnt | stmnt stmntlist   
#    stmnt          = (ifstmnt| compstmnt| whilestmnt| forstmnt 
#                             | parallelstmnt|return| expr) ';'
#    ifstmnt        = IF '(' expr')' stmnt elsestmnt
#    elsestmnt      = ELSE stmnt 
#    whilestmnt     = WHILE '(' expr')' stmnt 
#    forstmnt       = FOR '(' expr ';' expr ';' expr')' stmnt 
#    parallelstmnt  = PARALLEL '('  sliceseq ')' stmnt 
#    sliceseq       = slice [, sliceseq]
#    slice          = expr ':' expr [':' expr ] 
#    returnstmnt    = RETURN  expr
#    exprlist       = expr exprseq 
#    exprseq        = ',' expr [ exprseq ]
#    expr           = asgexpr 
#    asgexpr        = relexpr asgexprseq 
#    asgexprseq     = '='    relexpr asgexprseq 
#    relexpr        = addexpr relexprseq
#    relexprseq     = ( '<' | '>' | '<=' | '>=' '||' 
#                 | "&&" | "!=" | "==" ) 
#    addexpr        = multexpr addexprseq
#    addexpseq      = ['+'|'-'  multexpr addexprseq] 
#    multexpr       = unexpr  multexprseq   
#    multexprseq    = ['*'|'/' unexpr multexprseq] 
#    unexpr         = primexpr | '-' unexpr 
#    primexpr       = ID ['[' exprlist ']'] 
#                     | '(' exprlist ')'] ) 
#                     |  ['.' ident]
#                     | CAST '(' type ',' asgexpr ')'  
#                     | SCONST | ICONST | RCONST | NEW '(' type ')'  
#                     | CMPLX '(' expr ')' 
#                     | IM '(' expr ')'| RE '(' expr ')'
#   ident             =  ID  [ '['exprlist ']' ] 

# Definitions     
include "libe.i"     # Library interface              
include "ptree.i"    # Parse Tree routines interface  
include "err.i"      # Error routines interface       
include "scan.i"     # Lexical scanner interface      
include "parse.i"    # Parse interface                

struct tree ParseExtdecl():end 
struct tree ParseType():end 
int  ParseConstdecl(struct tree p):end 
int  ParseStructdeclar(struct tree p):end 
int  ParseIdseq(struct tree p):end 
int  ParseFdecl(struct tree p):end 
int  ParseArrayarg(struct tree p):end 
struct tree ParseArglist():end 
int  ParseArgseq(struct tree p):end 
struct tree ParseDeclarations():end 
struct tree ParseDeclaration():end 
struct tree ParseCompstmnt():end 
struct tree ParseStmntlist():end 
struct tree ParseStmnt():end 
struct tree ParseWhilestmnt():end 
struct tree ParseForstmnt():end 
struct tree ParseParallelstmnt():end 
struct tree ParseSliceseq(struct tree p):end 
struct tree ParseSlice():end 
struct tree ParseReturnstmnt():end 
struct tree ParseIfstmnt():end 
struct tree ParseElsestmnt():end 
struct tree ParseExprlist():end 
struct tree ParseExprseq(struct tree p):end 
struct tree ParseExpr():end 
struct tree ParseAsgexpr(struct tree p):end 
struct tree ParseAsgexprseq(struct tree p):end 
struct tree ParseRelexpr(struct tree p):end 
struct tree ParseRelexprseq(struct tree p):end 
struct tree ParseAddexpr(struct tree p):end 
struct tree ParseAddexprseq(struct tree p):end 
struct tree ParseMultexpr(struct tree p):end 
struct tree ParseMultexprseq(struct tree p):end 
struct tree ParseUnexpr(struct tree p):end 
struct tree ParsePrimexpr(struct tree p):end 
struct tree ParseIdent():end 
int  ParseMatch(int t):end 

int lookahead;            # Look ahead token 

int ParseIniparse() :

  # ParseIniparse initializes the parser. 

 lookahead = ScanGetok();
 return(OK);
end 
 

struct tree ParseParse() :

  # Parse is the entry point for the eps parser.

  struct tree np;

  np = NULL;
  if(lookahead == STOP)
    return np;                 # End of parsing  
  else:
    while(lookahead == INCLUDE)
      ParseMatch(INCLUDE);
    np = ParseExtdecl();      # Start parsing at extdecl   
  end 
 
  return (np);                # Return root of syntax tree 
end 
 
int ParseGetlookahead() :

  # ParseGetlookahead -- get lookahead token                             

  return (lookahead);       # Return lookahead token     
end 
 
struct tree ParseExtdecl() :

  # ParseExtdecl parses external declarations      
  # The following part of the grammar is implemented:
  #    extdecl    = type [( ':' structdeclar | ID ( [idseq] ";" | '(' fdecl ] ))]

  struct tree mp, np, sp;

  np = ParseType();                  
  if(np != NULL):
    sp = PtreeMknode("extdecl", "void");
    PtreeAddchild(sp,np);
    if(lookahead == COLON):            # ":"  
      ParseMatch(lookahead);
      ParseStructdeclar(np);
    end 
 
    else if(lookahead == ID):        # ID  
      mp=PtreeMknode("identifier", ScanGetext());  
      PtreeAddchild(np,mp);
      ParseMatch(lookahead);
      if(lookahead == COMMA):        # idseq 
        ParseIdseq(np);
        ParseMatch(SEMICOLON);
      end 
 
      else if(lookahead==LP):       # "("    
        ParseMatch(LP);
        ParseFdecl(mp);
      end 
        
      else if(lookahead == ASSIGN): # Constant  
       ParseMatch(lookahead);
       ParseConstdecl(mp);
      end 
 
      else
       ParseMatch(SEMICOLON);
    end 
   
  end 
 else
    sp = NULL;                      # eps    

  return (sp);
end 
 
struct tree ParseType() :

  # This function implements the following part of the grammar:
  #   type  = [( INT | REAL | CONST | COMPLEX | CHAR  
  #           | STRUCT ID )] [ '['arrayarg']']

  struct tree np, sp;

  if((lookahead == INT)   ||          # Basic types    
    (lookahead == REAL)   ||
    (lookahead == CHAR)   ||
    (lookahead == CONST)  ||
    (lookahead == COMPLEX)):
    np = PtreeMknode("type", ScanGetext());
    ParseMatch(lookahead);
  end 
 
  else if(lookahead == STRUCT) :     # Structure type  
    ParseMatch(lookahead);
    np = PtreeMknode("type", ScanGetext());
    PtreeSetstruct(np, "struct");
    ParseMatch(ID);
  end 
 
  else
    np = NULL;

  if(lookahead == LB):
    ParseMatch(lookahead);
    PtreeSetarray(np, "array");
    sp = PtreeMknode("arrayargs", "void");
    PtreeAddchild(np,sp);
    ParseArrayarg(sp);
    ParseMatch(RB);
  end 
 

  return (np);
end 
 
int ParseConstdecl(struct tree p) :

  # ParseConstdecl  parses constant declaration    
  # The following part of the grammar is implemented
  #    constdecl      = "=" expr ';'

  struct tree np;

  np=ParseExpr();
  if(np != NULL)
   PtreeAddchild(p,np);
  ParseMatch(SEMICOLON);      # ";"     
  return(OK);
end 
 

int ParseStructdeclar(struct tree p) :

  # This function implements the following part of the grammar:
  #   structdeclar   = declarations END 
 
  struct tree sp, np;

  np = PtreeMknode("structdec","void");
  PtreeAddchild(p,np);
  sp = ParseDeclarations();
  PtreeAddchild(np,sp);
  ParseMatch(END);
  return (OK);
end 

int ParseIdseq(struct tree p) :

  # ParseIdseq -- parse identifier sequence      
  # The following part of the grammar is implemented:
  #   idseq          = ',' ID  [ idseq ]

  struct tree sp;

  if(lookahead == COMMA):
    ParseMatch(lookahead);
    sp = PtreeMknode("identifier", ScanGetext());
    PtreeAddchild(p, sp);
    ParseMatch(ID);        
    ParseIdseq(p);
  end 
 
  else
    return(OK);
  return(OK);
end 
 
int ParseFdecl(struct tree p) :

  # ParseFdecl -- parse function declaration      
  # This routine parses definition and declaration of functions according
  # to the following rule:
  #   fdecl  = [arglist] ')'  [compstmnt]

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
end 
 
int ParseArrayarg(struct tree p) :

  # ParseArrayarg parses dummy array arguments      
  # The following part of the grammar is implemented:
  #   arrayarg          = '*' [ ',' arrayarg ]

  struct tree np, sp;

  if(lookahead == STAR):
    ParseMatch(STAR);
    sp = PtreeMknode("arrayargs", "void");
    PtreeAddchild(p,sp);
    if(lookahead == COMMA):            
      ParseMatch(lookahead);
      ParseArrayarg(p);
    end 
 
    else
      return(OK);
  end 
 
  else:
    sp = PtreeMknode("arrayargs", "void");
    PtreeAddchild(p,sp);
    np = ParseExprlist();
    if(sp != NULL)
      PtreeAddchild(sp,np);
    else
      ErrError("Syntax error");
    return(OK);
  end 
 
  return(OK);
end 
 
struct tree ParseArglist() :

  # ParseArglist parses function argument list      
  # The following part of the grammar is implemented:
  #    arglist        = type [ID] [argseq] ';'

  struct tree mp, np, sp;

  if((np=ParseType()) != NULL):
    sp = PtreeMknode("arglist", "void");
    PtreeAddchild(sp, np);
    if(lookahead == ID):            
       mp = PtreeMknode("identifier", ScanGetext());
       PtreeAddchild(np, mp);
       ParseMatch(ID);        
    end 
 
     ParseArgseq(sp);      
  end 
 
  else:
    sp = NULL;
  end 
 
  return (sp);
end 
 
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
        sp = PtreeMknode("identifier", ScanGetext());
        PtreeAddchild(np, sp);
        ParseMatch(ID);        
      end 
 
      ParseArgseq(p);
    end 
 
  end 
 
  return (OK);
end 
 
struct tree ParseDeclarations():

  # ParseDeclarations parses declarations
  # The following part of the grammar is implemented:
  #   declarations   = declaration [declarations]

  struct tree np, sp;

  np=ParseDeclaration();
  if(np != NULL):
    sp = PtreeMknode("declarations", "void");
    PtreeAddchild(sp,np);
  end 
 
  else
    return np=NULL;

  while((np=ParseDeclaration()) != NULL):
    PtreeAddchild(sp,np);
  end 
 
  return(sp);
end 
 
struct tree ParseDeclaration() :

  # ParseDeclaration parses a declaration
  # The following part of the grammar is implemented:
  #   declaration    = type ID idseq';'

  struct tree mp, np;

  np = ParseType();             # type  
  if(np != NULL):
    if(lookahead == ID):        # ID   
      mp=PtreeMknode("identifier", ScanGetext());  
      PtreeAddchild(np,mp);
      ParseMatch(lookahead);

      if(lookahead == COMMA):
        ParseIdseq(np);
        ParseMatch(SEMICOLON);
      end 
 
      else if(lookahead == ASSIGN):
        ParseMatch(lookahead);
        ParseConstdecl(mp);
      end 
 
      else
        ParseMatch(SEMICOLON);
    end 
  
    else
      ErrError("Syntax error");
  end 
 
  else
    np = NULL;                     

  return (np);
end 
 
struct tree ParseCompstmnt() :

  # ParseCompstmnt parses a compund statement
  # This function implements the production
  # compstmnt    = ':' declarations | stmntlist 'END'

  struct tree np, sp;
  if(lookahead == COLON):                         #  ':'              
    np = PtreeMknode("compstmnt","void");
    ParseMatch(COLON);                     
    sp = ParseDeclarations();                     # declarations    
    if(sp != NULL)
      PtreeAddchild(np, sp);
      sp = ParseStmntlist();                      # stmntlist       
      if(sp != NULL)
        PtreeAddchild(np, sp);
      ParseMatch(END);                            # ':'             
  end 
 
  else
    np = NULL;

  return (np);
end 
 
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
  end 
 
  return (np);
end 
 
struct tree ParseStmnt() :

  # ParseStmnt parses a statement.
  # The following part of the grammar is implemented:
  #   stmnt = (ifstmnt| compstmnt| whilestmnt| forstmnt
  #            | parallelstmnt|return| expr) ';'

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
  else if(lookahead == SEMICOLON):
    ParseMatch(lookahead);
    return (PtreeMknode("void", "void"));
  end 
 
  else if(lookahead == END):
    return (np=NULL);
  end 
 
  else: 
    np = ParseExpr(); 
    ParseMatch(SEMICOLON);
    return (np);
  end 
 
end 
 
struct tree ParseIfstmnt() :

  # ParseIfstmnt parses an if statement.
  # The following part of the grammar is implemented:
  #  ifstmnt = IF '(' expr')' stmnt elsestmnt

  struct tree np, sp;
  if(lookahead == IF):
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
  end 
 
  else
    sp = NULL;
  return (sp);
end 
 
struct tree ParseElsestmnt() :

  # ParseElsestmnt parses an else statement
  # The following part of the grammar is implemented:
  #   elsestmnt      = ELSE stmnt

  struct tree np, sp;
  if(lookahead == ELSE):
    ParseMatch(ELSE);
    np = PtreeMknode("else", "void");
    sp = ParseStmnt();
    PtreeAddchild(np, sp);
 end 
 
 else
   np = NULL;
 return  (np);
end 
 
struct tree ParseWhilestmnt() :

  # Parsewhilestmnt  parses while statement.      
  # The following part of the grammar is implmented:
  #   whilestmnt     = WHILE '(' expr')' stmnt

  struct tree np, sp;
  if(lookahead == WHILE):
    np = PtreeMknode("while", "void");
    ParseMatch(WHILE);
    ParseMatch(LP);
    if((sp = ParseExpr()) != NULL)
      PtreeAddchild(np, sp);
    ParseMatch(RP);
    sp = ParseStmnt();
    PtreeAddchild(np, sp);
    sp = np;
  end 
 
  else
    sp = NULL;

  return (sp);
end 
 
struct tree ParseForstmnt() :

  # ParseForstmnt parses a for statement
  # The following part of the grammar is implemented:
  #    forstmnt       = FOR '(' expr ';' expr ';' expr')' stmnt 

  struct tree np, sp, rp;
  if(lookahead == FOR):
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
  end 
 
  else
    sp = NULL;

  return (sp);
end 

struct tree ParseParallelstmnt() :

  # ParseParallelstmnt parses a prallel statement
  # The following part of the grammar is implemented:
  # parallelstmnt  = PARALLEL '('  sliceseq ')' stmnt

  struct tree np, rp, sp;

  if(lookahead == PARALLEL):
    np = PtreeMknode("parallel", "void");
    ParseMatch(PARALLEL);
    ParseMatch(LP);
    rp = PtreeMknode("sliceseq", "void");
    PtreeAddchild(np,rp);
    if((sp = ParseSliceseq(rp)) == NULL)
      ErrError("Syntax error");

    if(lookahead == RP):
      ParseMatch(RP);
      sp = ParseStmnt();
      PtreeAddchild(np, sp);
      return(np);
    end 
 
    else :
      ErrError("Syntax error");
    end 
 
  end 
 
  else
    return(rp=NULL);

  return(rp=NULL);
end 
 
struct tree ParseSliceseq(struct tree np) :

   # ParseSliceseq  parses slice sequence.      
   # The following part of the grammar is implemented:
   #   sliceseq       = slice [, sliceseq]

   struct tree sp;

   if((sp = ParseSlice()) != NULL):
       PtreeAddchild(np,sp);
   end 
 
   else:
     ErrError("Syntax error");
   end 
 
  
   if(lookahead == COMMA):
     ParseMatch(COMMA);
     ParseSliceseq(np);
   end 
 
   else :
     return(np);
   end 
 

   return(np);
end 

struct tree ParseSlice() :

  # ParseSlice parses a slice list
  # The following part of the grammar is implemented:
  #   slice          = expr ':' expr [':' expr ]

   struct tree np, sp, rp;

   if((sp = ParseExpr()) != NULL):
      np=PtreeMknode("slice","void");
      PtreeAddchild(np,sp);
      ParseMatch(COLON);
      if((rp = ParseExpr()) != NULL)
         PtreeAddchild(np, rp);
      if(lookahead == COLON):
        ParseMatch(COLON);
        if((rp = ParseExpr()) != NULL):
          PtreeAddchild(np, rp);
        end 
 
        else :
          ErrError("Syntax error");
        end 
 
      end 
 
   end 
 
   else :
     ErrError("Syntax error");
   end 
 
   return (np);
end 
 
struct tree ParseReturnstmnt() :

  # ParseReturnstmnt  parses return statement      
  # The following part of the grammar is implemented
  #   returnstmnt    = RETURN  expr

  struct tree np, sp;

  if(lookahead == RETURN):
    np = PtreeMknode("return", "void");
    ParseMatch(RETURN);
    if((sp = ParseExpr()) != NULL)
      PtreeAddchild(np, sp);
      sp = np;
      ParseMatch(SEMICOLON);
  end 
 
  else
    sp = NULL;

  return (sp);
end 
 
struct tree ParseExprlist() :

  # ParseExprlist parses a list of expressions.
  #  The following part of the grammar is implemented:
  #    exprlist    = [ expr exprseq ]

  struct tree np, sp;

  np = ParseExpr();
  if(np != NULL):
    sp = PtreeMknode("exprlist", "void");
    PtreeAddchild(sp, np);
    ParseExprseq(np);
  end 
 
  else
    sp = NULL;
  return sp;
end 
 
struct tree ParseExprseq(struct tree p) :

  # ParseExprseq parses expression sequence       
  # The following part of the grammar is implemented
  #    exprseq        = ',' expr [ exprseq ]

  if(lookahead == COMMA):
    ParseMatch(lookahead);
    PtreeAddsister(p, ParseExpr());
    ParseExprseq(p);
  end 
 
  return p=NULL;
end 
 
struct tree ParseExpr() :

  # ParseExpr  parses expressions      
  # The following part of the grammar is implemented
  #   expr           = asgexpr
 
  struct tree np, sp, rp;

  rp = NULL;
  np = ParseAsgexpr(rp);
  if(np != NULL):
     sp = PtreeMknode("expr","void");
     PtreeAddchild(sp, np);
     np = sp;
  end 
 
  return (np);
end 
  
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
end 
 
struct tree ParseAsgexprseq(struct tree p) :

  # PraseAsgexprseq parses sequence of assignment expressions
  # The following part of the grammar is implemented:
  #  asgexprSeq        = '='    relexpr asgexprseq 

  struct tree np, rp, sp;

  if((lookahead == ASSIGN)):           
    np = PtreeMknode("binexpr", ScanGetext()); 
    ParseMatch(lookahead);      
    PtreeAddchild(np, p);           
    rp = ParseRelexpr(np); 
    sp = ParseAsgexprseq(rp);
    PtreeAddchild(np, sp);
  end 
 
  else
    np = p;

  return (np);
end 
 
struct tree ParseRelexpr(struct tree p) :

  # ParseRelexpr parses relational expressions.
  # The following part of the grammar is implemented:
  #    relexpr        = addexpr relexprseq

  struct tree np;

  np = ParseAddexpr(p);             
  np = ParseRelexprseq(np);  
  return (np);
end 
 
struct tree ParseRelexprseq(struct tree p) :

  # ParseRelexprseq parses sequence of relational expressions.
  # The part of the grammar implemented is :
  #    relexprseq     = ( '<' | '>' | '<=' | '>=' '||'
  #                 | "&&" | "!=" | "==" )
            
  struct tree np, rp, sp;

  if((lookahead == LT)  ||        
    (lookahead == GT)  ||
    (lookahead == GE)  ||
    (lookahead == EQ)  ||
    (lookahead == NE)  ||
    (lookahead == OR)  ||
    (lookahead == AND) ||
    (lookahead == LE)): 
    np = PtreeMknode("binexpr", ScanGetext()); 
    ParseMatch(lookahead);      
    PtreeAddchild(np, p);      
    rp = ParseAddexpr(np); 
    PtreeAddchild(np, rp);
    sp = ParseRelexprseq(np); 
  end 
 
  else
    sp = p;

  return (sp);
end 
 
struct tree ParseAddexpr(struct tree p) :

  # ParseAddexpr parses additive expressions. 
  # The following part of the grammar is implemented:
  #    addexpr        = multexpr addexprseq

  struct tree np;

  np = ParseMultexpr(p);             
  np = ParseAddexprseq(np);  
  return (np);
end 
 
struct tree ParseAddexprseq(struct tree p) :

  # PaddexprSeq parses sequence of additive expressions.
  # The following part of the grammar is implemented:
  #    addexpseq      = ['+'|'-'  multexpr addexprseq]

  struct tree np, rp, sp;

  if((lookahead == PLUS)  ||        
    (lookahead == MINUS)): 
     np = PtreeMknode("binexpr", ScanGetext()); 
     ParseMatch(lookahead);      
     PtreeAddchild(np, p);      
     rp = ParseMultexpr(np); 
     PtreeAddchild(np, rp);
     sp = ParseAddexprseq(np); 
  end 
 
  else
     sp = p;

  return (sp);
end 
  
struct tree ParseMultexpr(struct tree p) :

  # Pmultexpr  parses multiplicative expressions.
  # The following part of the grammar is implemented:
  #   multexpr       = unexpr  multexprseq

  struct tree np;

  np = ParseUnexpr(p);   
  np = ParseMultexprseq(np);  
  return (np);
end 
 
struct tree ParseMultexprseq(struct tree p) :

  # Pmultexprseq parses sequence of multiplicative expressions.
  # The following part of the grammar is implemented:
  #   multexprseq    = ['*'|'/' unexpr multexprseq]
            
  struct tree np, rp, sp;

  if((lookahead == STAR)  || 
    (lookahead == SLASH)): 
     np = PtreeMknode("binexpr", ScanGetext());   
     ParseMatch(lookahead); 
     PtreeAddchild(np, p);           
     rp = ParseUnexpr(np);
     PtreeAddchild(np, rp);         
     sp = ParseMultexprseq(np);            
  end 
 
  else
    sp = p;

  return (sp);
end 
 
struct tree ParseUnexpr(struct tree p) :

  # ParseUnexpr parses unary expressions. 
  # The following part of the grammar is implemented:
  #   unexpr   = primexpr | '-' unexpr

  struct tree np, sp;

  if(lookahead == MINUS):             # Unary minus          
    sp = PtreeMknode("unexpr", ScanGetext());
    ParseMatch(lookahead); 
    np = ParseUnexpr(p);
    PtreeAddchild(sp, np);
  end 
 
  else
    sp = ParsePrimexpr(p);

    return (sp); 
end 
 
struct tree ParsePrimexpr(struct tree p) :

  # ParsePrimexpr -- parse primary expressionsend 
  # The following part of the grammar is implemented:
  #  primexpr       = ID ['[' exprlist ']'] | '(' exprlist ')'] ) | ['.' ident]
  #              | CAST '(' type ',' asgexpr ')'  
  #              | SCONST | ICONST | RCONST | NEW '(' type ')'  
  #              | CMPLX '(' expr ')' | IM '(' expr ')'| RE '(' expr ')'
  #              | LEN '(' expr, expr ')' | SIZEOF '(' type ')'

  struct tree np, sp, rp;

  if(lookahead == ID):
    sp = PtreeMknode("identifier", ScanGetext()); # Identifier           
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
      end 
 
    end 
 
    else if(lookahead == LP):           # Function call         
      ParseMatch(lookahead);
      PtreeSetname(sp,"fcall");
      np=NULL;
      if(lookahead != RP):
        np = ParseExprlist();
      end 
 
      ParseMatch(RP);
      if(np != NULL) 
        PtreeAddchild(sp,np);
    end 
 
    else if(lookahead == POINT):         # Structure reference  
      ParseMatch(POINT);
      np = ParseIdent();
      PtreeAddchild(sp,np);
      PtreeSetname(np, "selector");
    end 
 
  end 
 
  else if(lookahead == CAST):           # Cast         
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
  end 
 
  else if(lookahead == NEW):           # The new operator   
    ParseMatch(lookahead);
    sp=PtreeMknode("new", "void");
    ParseMatch(LP);
    np=ParseType();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  end 
 
 else if(lookahead == DELETE):         # The delete operator   
    ParseMatch(lookahead);
    sp=PtreeMknode("delete", "void");
    ParseMatch(LP);
    np=ParseExpr();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  end 
 
  else if(lookahead == CMPLX):           # The cmplx operator   
    ParseMatch(lookahead);
    sp=PtreeMknode("cmplx", "void");
    ParseMatch(LP);
    np = ParseExprlist();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  end 
 
  else if(lookahead == RE):           # The re operator   
    ParseMatch(lookahead);
    sp=PtreeMknode("re", "void");
    ParseMatch(LP);
    np = ParseExpr();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  end 
 
  else if(lookahead == IM):           # The im operator   
    ParseMatch(lookahead);
    sp=PtreeMknode("im", "void");
    ParseMatch(LP);
    np = ParseExpr();
    if(np == NULL)
       ErrError("Syntax error");
    else
       PtreeAddchild(sp,np);
    ParseMatch(RP);
  end 
 
  else if(lookahead == LEN):           # The im operator   
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
  end 
 
  else if(lookahead == ICONST) :           # Integer constant  
        sp = PtreeMknode("iconstant", ScanGetext());
        ParseMatch(ICONST); 
  end 
 
  else if(lookahead == RCONST) :           # Float   constant  
    sp = PtreeMknode("rconstant", ScanGetext());
    ParseMatch(RCONST); 
  end 
 
  else if(lookahead == SCONST) :          # String constant   
    sp = PtreeMknode("sconstant", ScanGetext());
    ParseMatch(SCONST); 
  end 
 
  else if(lookahead == LP):           # Parenthized expression  
    ParseMatch(LP); 
    sp = ParseAsgexpr(p); 
    ParseMatch(RP); 
  end 
 
  else
    ErrError("Syntax error");              # No match  
  return sp;
end 
 
struct tree ParseIdent() :

  # ParseIdent parses identifier
  # The following part of the grammar is implemented:
  # ident         =  ID  [ '['exprlist ']' ] 

  struct tree np, sp;

  if(lookahead == ID):
    sp = PtreeMknode("identifier", ScanGetext()); 
    ParseMatch(ID); 
    if(lookahead == LB):                 
      ParseMatch(lookahead);
      PtreeSetarray(sp, "array");
      np = ParseExprlist();
      PtreeAddchild(sp, np);
      ParseMatch(RB);
    end 
 
   end 
 
  else
    sp = NULL;
  return sp;
end 
 
int ParseMatch(int t) :

  # Parameters:
  #   t :    Token value
  #   
  # Returns :
  # OK in case of match, stops parsing if not.
  #
  # Pmatch matches a token and read lookahead token

  if(lookahead == t):
    lookahead = ScanGetok();
  end 
         
  else :
    ErrError("syntax error");
    lookahead = ScanGetok();
  end 
 
  return(OK);
end 
 
