## The eps compilers makefile


# Comment out for the ecc (cuda version) compiler
    ARCH=cuda
    C=nvcc
    EXEC=ecc
    EXEL=elc

# Comment out for the ech (hip version) compiler
#   ARCH=hip
#   C=hipcc
#   EXEC=ech
#   EXEL=elh

# Comment out for the ec (cpu version) compiler
#   ARCH=cpu
#   C=gcc
#   EXEC=ec
#   EXEL=el

# Definitions
    EC=./$(EXEC)
    EL=./$(EXEL)
    BIN=../Bin
    LIB=../Lib
    INC=../Inc
    ECFLAGS=-g 
    LDFLAGS=

# The compiler executable
$(ARCH):    main.o scan.o parse.o ptree.o sem.o sym.o code.o \
            err.o scanpath.o lib$(ARCH).a
	    $(EL) $(LDFLAGS) -o $(EXEC) main.o scan.o parse.o ptree.o sem.o code.o \
            sym.o err.o scanpath.o

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
lib:           lib$(ARCH).a  lib$(ARCH)c.a

lib$(ARCH).a:  libe.o run$(ARCH).o
	       ar rcs libe$(ARCH).a libe.o run$(ARCH).o 

lib$(ARCH)c.a: libe.o run$(ARCH)c.o
	       ar rcs libe$(ARCH)c.a libe.o run$(ARCH)c.o 

libe.o:        libe.e
	       $(EC)  $(ECFLAGS) libe.e 

run$(ARCH).o : 
	       cp run$(ARCH).e run$(ARCH).c
	       $(C) -c $(CCFLAGS) run$(ARCH).c

run$(ARCH)c.o : 
	       cp run$(ARCH)c.e runc$(ARCH)c.c
	       $(C) -c $(CCFLAGS) run$(ARCH).c

# The install target
install : 
	   cp $(EC) $(BIN)/
	   cp libe.i $(INC)/
	   cp libe$(ARCH).a $(LIB)
	   cp $(EXEL)-install $(BIN)/$(EXEL)

# The clean target
clean: 
	    rm -f *.a *.o *.c *.cpp m.i
