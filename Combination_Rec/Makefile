
.c.o:
	gcc -c -o $@ $<

iter_comb: StackOps.o comb_iter.c *.h
	gcc -o itercomb.exe comb_iter.c StackOps.o

all: comb_iter

clean:
	rm -vf *.o *.exe 
