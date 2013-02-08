.c.o:
	gcc -g -c -o $@ $<
	
graph: graphOps.o BFS.o driver.c queue.c *.h
	gcc -g -o graph.exe driver.c GraphOps.o BFS.o queue.o

all: graph

clean:
	rm -vf -r *.o *.exe*
