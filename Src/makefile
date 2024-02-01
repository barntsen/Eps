## The eps compilers makefile


# Comment out for the ecc (cuda version) compiler
#   ARCH=cuda
#   C=nvcc -x cu 
#   EXEC=ecc
#   EL=nvcc -L. -lecuda -lcudart
#   EXEL=elc
#   EXT=c

# Comment out for the ech (hip version) compiler
   ARCH=hip
   C=hipcc
   EXEC=ech
   EL=hipcc
   EXEL=elh
   EXT=cpp

# Comment out for the ec (cpu version) compiler
#   ARCH=cpu
#   C=gcc
#   EXEC=ec
#   EL=gcc 
#   EXEL=el
#   EXT=c

# Definitions
    EC=./$(EXEC)
    BIN=../Bin
    LIB=../Lib
    INC=../Inc
    ECFLAGS=-g 
    LDFLAGS=

# The compiler executable
$(ARCH):    main.o scan.o parse.o ptree.o sem.o sym.o code.o \
            err.o scanpath.o libe.o run$(ARCH)c.o
	    $(EL) $(LDFLAGS) -o $(EXEC)1 main.o scan.o parse.o ptree.o sem.o code.o \
            sym.o err.o scanpath.o libe.o run$(ARCH)c.o -lm

main.o:      main.e m.i 
	     $(EC) $(ECFLAGS) main.e 
m.i:         m-$(ARCH).i
	     cp m-$(ARCH).i m.i
scan.o:      scan.e
	     $(EC) $(ECFLAGS) scan.e 
scanpath.o:  scanpath.e
	     $(EC) $(ECFLAGS) scanpath.e 
parse.o:     parse.e
	     $(EC) $(ECFLAGS) parse.e 
ptree.o:     ptree.e
	     $(EC) $(ECFLAGS) ptree.e 
sem.o:       sem.e
	     $(EC) $(ECFLAGS) sem.e 
sym.o:       sym.e
	     $(EC) $(ECFLAGS) sym.e 
code.o:      code.e
	     $(EC) $(ECFLAGS) code.e 
err.o:	     err.e
	     $(EC) $(ECFLAGS) err.e 

# Libraries
lib:           lib$(ARCH).a  

lib$(ARCH).a:  libe.o run$(ARCH).o
	       ar rcs libe$(ARCH).a libe.o run$(ARCH).o 

libe.o:        libe.e
	       $(EC)  $(ECFLAGS) libe.e 

run$(ARCH).o : 
	       cp run$(ARCH).e run$(ARCH).$(EXT)
	       $(C) -c $(CCFLAGS) run$(ARCH).$(EXT)

run$(ARCH)c.o : 
	       cp run$(ARCH)c.e run$(ARCH)c.$(EXT)
	       $(C) -c $(CCFLAGS) run$(ARCH)c.$(EXT)


# The install target
install : 
	   cp -r ../Bin/* ../Arch/Bin
	   cp $(EC) $(BIN)/
	   cp libe.i $(INC)/
	   cp libe$(ARCH).a $(LIB)
	   cp $(EXEL) $(BIN)/

# The clean target
clean: 
	    rm -f *.a *.o *.c *.cpp m.i
