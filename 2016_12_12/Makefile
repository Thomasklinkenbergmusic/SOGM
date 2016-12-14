CC = g++ -g

all: program

program: main.o
	$(CC) -o $@ main.o

.cpp.o:
	$(CC) -c $<

clean:
	rm -f *.o
	rm -f program
