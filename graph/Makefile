.c.o:
	gcc -g -c -o $@ $<
	
graph: graphOps.o DFS.o driver.c *.h
	gcc -g -o graph.exe driver.c GraphOps.o DFS.o

all: graph

clean:
	rm -vf -r *.o *.exe*
