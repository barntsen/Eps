#  ec, ecc, ech 

Scripts for compiling the eps mini-language
into object files for cpu and nvidia/amd gpu's.

## Installation

Clone the git project to your local computer.
To use the scripts set the environment variable EPS to
the top of the source directory.

For example, if the source tree is located at `/home/barn/Src/Eps`
type

     export EPS=/home/barn/Src/Eps

Then put the Bin directory on your path variable as

     PATH=$PATH:$EPS/Bin

The ec and ecc commands uses precompiled binaries (eps,epsc) for ubuntu 20.04
If the binaries does not work they have to be recreated using the
makefiles found in the $EPS/Src directory. The code for the binaries
is written in eps, so the first step is to create preliminary
binaries by using the boot c-files. This will
recreate the eps binary

    make  -f makefile-cpu boot

Then remove the object files and type

    make -f makefile-cpu 

Remove all object files again and retype

    make -f makefile-cpu 

If this works without any major errors (ignore compiler warnings)
install the binaries by

    make -f makefile-cpu install


## Compiler Usage

**ec [-c -C -a -s -p -t -f]** file.e 

  If no options are given, ec compiles an eps file (.e) 
  into a cpu object file (.o).
  
  The following options can be used 
    
  - -c: Generate c-code 
  - -C: Generate code for arry index checking
  - -t: Print parse tree on standard output
  - -a: Print annotated parse tree on standard output
  - -s: Print symbol table
  - -g: Generate debug info
  - -O: optimize code
  - -f: Generate openMP code

**ecc [-c -C -a -s -p -t -f]** file.e 

  If no options are given, ecc compiles an eps file (.e) 
  into an nvidia object file (.o)
  
  The following options can be used 
    
  - -c: Generate cuda-code 
  - -C: Generate code for arry index checking
  - -t: Print parse tree on standard output
  - -a: Print annotated parse tree on standard output
  - -s: Print symbol table
  - -g: Generate debug info
  - -O: optimize code
  - -f: Generate openMP code
  - -nt: Set the number CUDA threads (default is 1024)
  - -nb: Set the number CUDA blcoks  (default is 1024)

**ech [-c -C -a -s -p -t -f]** file.e 

  If no options are given, ecc compiles an eps file (.e) 
  into an amd object file (.o)
  
  The following options can be used 
    
  - -c: Generate cuda-code 
  - -C: Generate code for arry index checking
  - -t: Print parse tree on standard output
  - -a: Print annotated parse tree on standard output
  - -s: Print symbol table
  - -g: Generate debug info
  - -O: optimize code
  - -f: Generate openMP code
  - -nt: Set the number hip threads (default is 1024)
  - -nb: Set the number hip blcoks  (default is 1024)

## Loaders

**el,elc,elh [-o file ]** file1.o file2.o ...

The loader scripts are simple wrappers for    
the normal unix loader
but including necessary library paths. 

## The Epsilon language
The idea with creating the mini language eps is
to be able to write (limited) code for 
scientific calculations which can run on normal cpu's or
execute with gpu acceleration 
by a simple recompile without any need to touch the source code.

The eps language is a tiny subset of c, but with
support for multidimensional dynamic arrays and 
a new and delete operator for memory managment.
c-style arrays does not exist. 
Only  a few basic data types are supported; int, float and char.
Dynamic struct's is supported, static structs do not exist. 
See the $EPS/Src/Examples directory for eps example code.

## BUGS
There are numerous bugs, the compilers have only been
tested by compiling themselves. 


## Examples
The $EPS/Src/Examples contains a few examples of eps (.e) code.


