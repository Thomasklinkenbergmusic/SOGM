CC = g++ -g

all: program

program: Checkage.o main.o
	$(CC) -o $@ Checkage.o main.o

.cpp.o:
	$(CC) -c $<

clean:
	rm -f *.o
	rm -f program
