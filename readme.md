#  Eps - mini-language for portable gpu acceleration

This project is an experiment to find out if a tiny language can be made in
order to write (limited) code for scientific calculations which can run on
normal cpu's or execute with gpu acceleration by a simple recompile without any
need to touch the source code.  Also the language (although simple) should be
sufficiently high level to avoid the need for detailed knowledge about gpu
hardware.

Numerous languages have been constructed for this purpose, most of them Domain
Specific Languages like Firedrake or Devoto . The main problem with most of
these languages are that they are too specific and forces the scientist to use
a particular set of methods. They are also often complicated and difficult to
learn.

There are exceptions to this, Nvidia have made Fortran and C/C++ compilers
available which can do gpu acceleration by setting the `-stdpar` option.  The
Fortran compiler uses the `DOCONCURRENT` keyword to replace nested `DO` loops
and generate parallel code for NVIDIA gpu's.  Experiences so far with this
compiler is encouraging.  However, the market for scientific computation is
small, so it is not likely that we will see compilers for new gpu's anytime
soon.

In the mean time I needed to incorporate gpu acceleration into legacy C/C++
code for at least three gpu architectures, NVIDIA, AMD and Mac M1. And probably
more in the near future as gpus are integrated with cpus.  I took a small
compiler for a python-like toy language I made many years ago and modified it
to generate c, CUDA or hip code. I added a new `parallel` keyword (aka
`DOCONCURRENT`) to accommodate gpu acceleration.  The output from the toy
compiler is fed to the nvidia `nvcc` compiler or AMD's `hipcc` compiler.
Initial testing seems to indicate that the speedup obtained is similar to the
nvidia fortran compiler, at least for simple grid data structures.

## Installation

Clone the git project to your local computer.
Set the environment variable EPS to
the top of the source directory.

For example, if the source tree is located at `/home/barn/Src/Eps`
type
     export EPS=/home/barn/Src/Eps

Then put the Bin directory on your path variable as

     PATH=$PATH:$EPS/Bin

The ec command use precompiled binaries for ubuntu.  If the binaries does
not work they have to be recreated by running the mk.sh script found in the
`Src-c` directory.  

# Compiler Usage

**ec [-h -t -a -s -r -e -p i-q -C -c -g -d -O -f]** file.e 

  If no options are given, ec compiles an eps file (.e) 
  into a cpu object file (.o).
  If option `-x cuda` is given, ec generates an object file for nvida gpus.
  If option `-x hip` is given, ec generates an object file for AMD gpus.

Options: 

 -   -h : prints this help list
 -   -t : Print parse tree 
 -   -a : Print annotated parse tree 
 -   -s : Print local symbol table   
 -   -r : Print external symbol table   
 -   -e : Emit code 
 -   -p : Perform only syntax check, no code generated 
 -   -q : Perform syntax and semantic check, no code generated 
 -   -C : Array index check 
 -   -c : Produce c-code but do not generate object code
 -   -g : Generate debug info 
 -   -d : Show the host compiler command line  
 -   -O : Optimize code
 -   -f : Generate code for openmp 
 -   -x arch : where arch is either cpu (default) or cuda
 -   -y dev  : where dev is either none, native or device name such as sm\_86
    
  ec uses the gcc, nvcc and hipcc compilers
  to create the object files from machine generated c/cuda/hip code.

## Loaders

**el [-o file ]** file1.o file2.o ...

   Loader script for ec when generating c (no -x option)

**elc [-o file ]** file1.o file2.o ...

   Loader script for ec when generating (option -x cuda) cuda

**elh [-o file ]** file1.o file2.o ...

   Loader script for ec when generating hip (option -x hip)

The loader scripts are simple wrappers for    
the normal unix loader
but including necessary library paths. 

## The Epsilon language
The idea with creating the mini language eps is
to be able to write (limited) code for 
scientific calculations which can run on normal cpu's or
execute with gpu acceleration 
by a simple recompile without any need to touch the source code.

The eps language is python like, but with
support for multidimensional dynamic arrays and 
a new and delete operator for memory management.
Only  a few basic data types are supported; int, float and char.
Dynamic struct's is supported, static structs do not exist. 
The most important extension is the parallel statement:
   
    int n
    n=1000000
    parallel (i=0:n):
      a[i] = b[i] + c[i];
     

If this statement occurs in a function, that function will
be executed on a GPU (with option -x cuda ) or executed using OpenMP
(with option -f)

## Bugs
There are an infinite numbers of bugs, the compilers have only been
tested by compiling themselves. 

## Examples
The ec compiler is written in itself, see the Src directory.

For examples of seismic wave propagation see 
[PyEl2d](https://github.com/barntsen/PyEl2d)

For preformance see [Wavebench](https://github.com/barntsen/Wavebench)

