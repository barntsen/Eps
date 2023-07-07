// Main is the main module for the eps compiler.
//Import modules 
include "libe.i"        // Libray for eps
include "ptree.i"       // Parse tree managment
include "scan.i"        // Lexical scanner
include "err.i"         // Error handling
include "parse.i"       // Parsing of source code
include "sym.i"         // Symbol table managment
include "sem.i"         // Semantic checking
include "code.i"        // Code generator

int Main(struct MainArg [*] MainArgs)
{
  int btree;        // Flag for emitting parse tre. 
  int atree;        // Flag for emitting annotated parse tree
  int table;        // Flag for emitting local symbol tables
  int etable;       // Flag for emitting external symbol table
  int parse, semantic, emit;
  int nt, nb;      // No of threads and no of blocks
  struct tree p;
  char [*] infile;
  int i;

  LibeInit();        // Initialize io package 

  btree  = atree = table = etable = emit = ERR;
  parse  = semantic = ERR;
  PtreeInit(); 
  CodeArraycheckoff();
  CodeDebugoff();
  i = 1;
  // Initialize the code generator    

    CodeInit();    
   
  // Command line option processing : 

  if(len(MainArgs,0)==1){
    LibePuts(stderr,"Missing input file name\n");
    LibeFlush(stderr);
    LibeExit();
  }

  while((MainArgs[i].arg[0] ==cast(char,'-'))  == OK){      
    if(LibeStrcmp(MainArgs[i].arg, "-t") == OK){  

    // Print parse tree  

       btree = OK; parse = OK;
    }

    // Print annotated parse tree 

    if(LibeStrcmp(MainArgs[i].arg, "-a") == OK){  
      atree = OK; semantic = OK; parse = OK;
    }

    // Print local symbol table 

    if(LibeStrcmp(MainArgs[i].arg, "-s") == OK ){  
      table = OK; parse = OK; semantic = OK;
    }

    // Print external symbol table 

    if(LibeStrcmp(MainArgs[i].arg, "-r") == OK ){  
      etable = OK; parse = OK; semantic = OK;
    }

    // Emit code         

    if(LibeStrcmp(MainArgs[i].arg, "-e") == OK){  
      emit = OK; parse = OK; semantic = OK;
    }

    // Syntactic analysis only

    if(LibeStrcmp(MainArgs[i].arg, "-p") == OK){  
      parse = OK;
    }

    // Syntactic and semantic analysis only

    if(LibeStrcmp(MainArgs[i].arg, "-q") == OK){      
      semantic = OK; parse = OK;
    }


    // Turn on array check  

    if(LibeStrcmp(MainArgs[i].arg, "-C") == OK){      
      CodeArraycheckon();
    }

    // Turn on debug flag  

    if(LibeStrcmp(MainArgs[i].arg, "-g") == OK){      
      CodeDebugon();
    }

    // Set no of threads
    if(LibeStrcmp(MainArgs[i].arg, "-nt") == OK){      
      nb=CodeGetnb();
      i=i+1;
      nt=LibeAtoi(MainArgs[i].arg);
      CodeSetntnb(nt,nb);
    }
    // Set no of blocks
    if(LibeStrcmp(MainArgs[i].arg, "-nb") == OK){      
      nt=CodeGetnt();
      i=i+1;
      nb=LibeAtoi(MainArgs[i].arg);
      CodeSetntnb(nt,nb);
    }

    i = i + 1;
  }

  // Choose the default case

  if((parse == ERR) && (semantic == ERR) && (emit == ERR)){
    parse=semantic=emit=OK;
  }

  if(i>=len(MainArgs,0)){
    LibePuts(stderr,"Missing input file name\n");
    LibeExit();
  }
  else 
    infile=MainArgs[i].arg;

  // Initialize the scanner 

  if(ScanInit(infile) == ERR){        
    LibeExit(); 
  }

  // Set line number to 1   

  ScanSetline(1);         

  // Initialize the parser   

  ParseIniparse();        

  // Initialize the code generator 

    //CodeInit();    

    if(emit==OK)
      CodePreamble();

  // Create external symbol table 

  SymSetetp(SymMktable()); 

  // Create string table     

  SymSetstp(SymMktable()); 

  if(parse == OK)
    p = ParseParse();    // Parse first unit of code     
  if(btree == OK)
    PtreePrtree(p, 0);   // Print parse tree            

  while(p != NULL){
    if(semantic == OK){
      if(p != NULL){
        SemSem(p, SymGetetp()); // Semantic analysis
      }
      if(atree == OK)
        PtreePrtree(p,0);       // Print annotated parse tree 
      if(table == OK)           // Print local symbol table  
        if(SymGetltp() != NULL){
          SymPrsym(SymGetltp(),0);
        }
    }
    if(emit == OK)
      if(p != NULL)
        CodeCode(p, SymGetetp()); // Emit code 
    PtreeRmtree(p);               // Remove parse tree  
    SymRmtable(SymGetltp());      // Remove local symbol table 

    if(parse == OK){
      p = ParseParse();          // Parse one unit of code
      if(btree == OK)                
         PtreePrtree(p, 0);      // Print parse tree 
     }
  }

  if(ParseGetlookahead() != STOP)
     ErrError("Parsing ended before reaching EOF");

  // Print external symbol table
  if(etable == OK){
    LibePuts(stderr,"*************Should not happen!\n");
    LibeFlush(stderr);
    if(SymGetetp() != NULL){
      SymPrsym(SymGetetp(),0);
    }
  }
  LibeFlush(stdout);

  return(OK);   // Successfull Return 
}
