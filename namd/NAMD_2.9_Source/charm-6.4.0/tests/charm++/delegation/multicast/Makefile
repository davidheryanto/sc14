CHARMC=../../../../bin/charmc $(OPTS)

all: hello

hello:   hello.o
	$(CHARMC) hello.o -o hello -module CkMulticast -language charm++ 

hello.o : hello.C hello.def.h hello.decl.h 
	$(CHARMC) -c hello.C

hello.decl.h hello.def.h : hello.ci
	$(CHARMC) hello.ci

test: all
	./charmrun +p3 ./hello 10 $(TESTOPTS)

bgtest: all
	./charmrun +p3 ./hello 10 +x1 +y1 +z3

clean:
	rm -f conv-host *.o charmrun charmrun.exe
	rm -f *.def.h *.decl.h
	rm -f hello hello.*.log hello.sts hello.exe hello.pdb hello.ilk
	rm -f gmon.out #*#
	rm -f core *~
	rm -f TAGS *.headers hello

