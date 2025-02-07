## The eps compilers makefile

# Comment out for the ecc (cuda version) compiler
 ARCH=cuda
 C=nvcc -x cu -Xcompiler "-z muldefs"
 EXEC=ecc
 EL=nvcc -L. -Xcompiler "-z muldefs" 
 EXEL=elc
 EXT=cpp

# Comment out for the ech (hip version) compiler
#  ARCH=hip
#  C=hipcc
#  EXEC=ech
#  EL=hipcc
#  EXEL=elh
#  EXT=cpp

# Comment out for the ec (cpu version) compiler
# ARCH=cpu
# C=gcc
# EXEC=ec
# EL=gcc 
# EXEL=el
# EXT=c

# Definitions
    EC=./$(EXEC)
    BIN=../Bin
    LIB=../Lib
    INC=../Inc
    ECFLAGS=  
    LDFLAGS=

%.o : %.m
	
# The compiler executable
$(ARCH):    main.o scan.m parse.m ptree.m sem.m sym.m code.m   \
            err.m scanpath.m libe.m run$(ARCH)c.o run.o m.m
	    $(EL) $(LDFLAGS) -o $(EXEC)1 main.o scan.o parse.o \
            ptree.o sem.o code.o sym.o err.o scanpath.o libe.o \
            run$(ARCH)c.o -lm

main.o:      main.e m.m scan.m parse.m ptree.m sem.m code.m sym.m libe.m \
             scan.m scanpath.m err.m run.o 
	     $(EC) $(ECFLAGS) main.e 
scan.m:      scan.e libe.m err.m scanpath.m
	     $(EC) $(ECFLAGS) scan.e 
scanpath.m:  scanpath.e libe.m
	     $(EC) $(ECFLAGS) scanpath.e 
parse.m:     parse.e libe.m ptree.m err.m scan.m
	     $(EC) $(ECFLAGS) parse.e 
ptree.m:     ptree.e libe.m err.m 
	     $(EC) $(ECFLAGS) ptree.e 
sem.m:       sem.e sym.m libe.m ptree.m err.m m.m  
	     $(EC) $(ECFLAGS) sem.e 
sym.m:       sym.e libe.o err.o 
	     $(EC) $(ECFLAGS) sym.e 
code.m:      code.e libe.m sym.m ptree.m err.m m.m scan.m 
	     $(EC) $(ECFLAGS) code.e 
err.m:	     err.e libe.m
	     $(EC) $(ECFLAGS) err.e 
m.m:         m.e
	     cp m-$(ARCH).e m.e
	     $(EC) $(ECFLAGS) m.e
run.o:	     run.e
	     $(EC) $(ECFLAGS) run.e

# Libraries
lib:           lib$(ARCH).a  

lib$(ARCH).a:  libe.m run$(ARCH).o
	       ar rcs libe$(ARCH).a libe.o run$(ARCH).o 

libe.m:        libe.e run.m
	       $(EC)  $(ECFLAGS) libe.e   

run.m:         run.e	
	       $(EC)  $(ECFLAGS) run.e   

run$(ARCH).o : 
	       cp run$(ARCH).e run$(ARCH).$(EXT)
	       $(C) -c $(CCFLAGS) run$(ARCH).$(EXT)

run$(ARCH)c.o : 
	       cp run$(ARCH)c.e run$(ARCH)c.$(EXT)
	       $(C) -c $(CCFLAGS) run$(ARCH)c.$(EXT)


# The install target
install :  lib $(EC) $(EXEL)-install
	   cp -r ../Bin/* ../Arch/Bin
	   cp $(EC) $(BIN)/
	   cp libe$(ARCH).a $(LIB)
	   cp libe.m $(LIB)
	   cp $(EXEL)-install $(BIN)/$(EXEL)
	   ./genboot-$(ARCH).sh
           

# The clean target
clean: 
	    rm -f *.m *.a *.o *.c *.cpp ec1 ecc1 ech1 
