CC = g++ -g

all: program

program: Checkdata.o main.o
	$(CC) -o $@ Checkdata.o main.o 

clean:
	rm -f *.o
	rm -f program
