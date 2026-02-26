#  Eps - mini-language for portable gpu acceleration

Eps is a mini language suited for scientific use with a syntax close
to python but extensions to support parallel computations.
Here are some of the features:

  - Code is as fast as C
  - Compile to single or multicore cpu by command line setting options 
  - Compile to gpu by setting a command line option
  - Source code is unchanged for gpu 
  - Parallization for multicore/gpu is achieved by using a simple parallel 
    statement

The most important language extensions are built-in multidimensional 
arrays and a parallel statement to support parallelization 
on GPU and multicore cpu.

Eps functions can also be easily called from python
by automatic generating python wrapper code, no need for extra tools.

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
not work they have to be recreated by running the mk.sh script in
the Src-c directory

    cd Src-c
    mk.sh

Check the compiler by typing

    ec -h

## Example 

For a simple example see the Examples directory.

For examples of seismic wave propagation see 
[PyEl2d](https://github.com/barntsen/PyEl2d)

For preformance see [Wavebench](https://github.com/barntsen/Wavebench)

