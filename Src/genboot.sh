## The eps compilers makefile

# This makefile creates and install the eps compilers.
# The main targets are:

# 1. ec - compiles the eps cpu compiler
# 2. lib - compiles the eps library
# 3. install - installation of compiler 
# 4. genboot - Generate c-code for bootstrapping
# 5. boot    - Bootstrap from c-code
# 6. clean   - remove intermediate files
#    
# The compiler is self-hosting so the compiler binary eps is
# to be regarded as source code. Backup copy is found in
# ../Arch/Bin
#
## Definitions
    BIN=../Bin
    LIB=../Lib
    INC=../Inc
    ECFLAGS=-g 
    LDFLAGS=
    ARCHIVE=../Arch/Boot
    EC=./$(EXEC)
    EL=./$(EXEL)


# The ec target
$(EC):      main.o scan.o parse.o ptree.o sem.o sym.o code.o \
            err.o scanpath.o lib$(ARCH).a
	    ARCH=cpu
	    C=gcc
	    EXEC=ec
	    EXEL=el
	    $(EL) $(LDFLAGS) -o ec main.o scan.o parse.o ptree.o sem.o code.o \
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
lib:       lib$(ARCH).a 
lib$(ARCH).a:  libe.o run$(ARCH).o
	   ar rcs libe$(ARCH).a libe.o run$(ARCH).o 
libe.o:    libe.e
	   $(EC)  $(ECFLAGS) libe.e 
run$(ARCH).o:  run$(ARCH).e
	   cp run$(ARCH).e run$(ARCH).c
	   gcc -c $(CCFLAGS) run$(ARCH).c

# The install target
install : 
	   cp ec $(BIN)/
	   cp libe.i $(INC)/
	   cp libe$(ARCH).a $(LIB)
           cp $(EXEL)-install $(BIN)/$(EXEL)

# The genboot target
genboot:   main.c scan.c scanpath.c parse.c ptree.c sem.c sym.c code.c    \
           err.c libe.c runcpu.c 
	   cp main.c scan.c scanpath.c parse.c ptree.c sem.c sym.c code.c \
	   err.c libe.c runcpu.c ../Arch/Boot-cpu

main.c:    main.e 
	   $(EC) -c main.e
scan.c:    scan.e
	   $(EC) -c scan.e 
scanpath.c: scanpath.e
	   $(EC) -c scanpath.e 
parse.c:   parse.e
	   $(EC) -c parse.e 
ptree.c:   ptree.e
	   $(EC) -c ptree.e 
sem.c:	   sem.e
	   $(EC) -c sem.e 
sym.c:	   sym.e
	   $(EC) -c sym.e 
code.c:    code.e
	   $(EC) -c code.e 
err.c:     err.e
	   $(EC) -c err.e 
libe.c:    libe.e
	   $(EC) -c libe.e 

run$ARCH).c:  run$(ARCH).e
	   cp run$(ARCH).e run$(ARCH).c

# The boot target
boot: 
	    cp $(ARCHIVE)-$(ARCH)/*.c .
	    $(C) -c *.c
	    $(C) -o ec -lm *.o

# The clean target
clean: 
	    rm -f *.a *.o *.c *.cpp m.i
