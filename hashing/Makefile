
.c.o:
	gcc -g -c -o $@ $<
	
hash: HtableOps.o driver.c *.h
	gcc -g -o hash.exe driver.c HtableOps.o

all: hash

clean:
	rm -vf *.o *.exe
