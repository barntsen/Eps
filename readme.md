#  Eps - mini-language for portable gpu acceleration

This project is an experiment to find out if a mini language 
can be made in order to write (limited) code for
scientific calculations which can run on normal cpu's or
execute with gpu acceleration
by a simple recompile without any need to touch the source code.
Also the language (although simple) should be sufficiently high
level to avoid the need for detailed knowledge about gpu hardware.
It should also be close to what the average scientist is familiar with, 
i.e. languages like C/C++, Fortran, Python, Go, etc...

Numerous languages have been constructed for this purpose, most of them
Domain Specific Languages like Firedrake. The main problem with most of these
languages are that they are too specific and forces the scientist to
use a particular set of methods. They are also often complicated and difficult
to learn.

There are exceptions to this, Nvidia have made Fortran and C/C++ compilers
available which can do gpu acceleration by setting the `-stdpar` option.
The Fortran compiler uses the `DOCONCURRENT` keyword to replace nested `DO` 
loops and generate parallel code for NVIDIA gpu's.
Experiences so far with this compiler is encouraging. 
However, the market for scientific computation is small, so it is not likely
that we will see compilers for other gpu's anytime soon.

In the mean time I needed to incorporate gpu acceleration into legacy C/C++ 
code for at least three gpu architectures, NVIDIA, AMD and Mac M1. And probably
more in the near future as gpus are integrated with cpus.
I took a small compiler for a c-like toy language I made many years ago 
and modified it to 
generate cpu, CUDA or hip code. I added a new `parallel` keyword (aka `DOCONCURRENT`)
to accommodate gpu acceleration.
The output from the toy compiler is fed to the nvidia `nvcc` compiler or 
AMD's `hipcc` compiler. Initial testing seems to indicate that the speedup obtained is
similar to the nvidia fortran compiler, at least for simple grid data structures.
See the Examples directory and the PyAc2d repo.

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
  - -C: Generate code for array index checking
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
  - -C: Generate code for array index checking
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
  - -C: Generate code for array index checking
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
a new and delete operator for memory management.
c-style arrays does not exist. 
Only  a few basic data types are supported; int, float and char.
Dynamic struct's is supported, static structs do not exist. 
The most important extension is the parallel statement:
   
    int n;
    n=1000000;
    parallel (i=0:n){
      a[i] = b[i] + c[i];
    }

If this statement occurs in a function, that function will
be executed on a GPU (when using ecc,ech) or executed using OpenMP
(using ec).

See the $EPS/Src/Examples directory and the PyAc2d repo for eps example code.

## BUGS
There are an infinite numbers of bugs, the compilers have only been
tested by compiling themselves. 

## Examples
The $EPS/Src/Examples and the PyAc2d repo contains a few examples of eps (.e) code.


