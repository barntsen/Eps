// Faxpy is a simple vector addition test 


include <libe.i>
include "sym.i"
include "ptree.i"

int Symgetline(int fp, struct symbol tbl){}

int Main(struct MainArg [*] MainArgs)
{
  struct symbol tp; // Symbol table
  int fp;           // File pointer
  int indent;
  struct symbol tbl;
  int oldindent;

  LibeInit();
 
  // Open the input symbol table file
  fp = LibeOpen("table.m","r");

  // Read the table
  tbl=SymMktable();
  SymReadsym(fp,tbl);
  SymPrsym(tbl,0);

  return(OK);
       
}
