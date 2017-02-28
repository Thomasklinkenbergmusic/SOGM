CC = g++ -g

all: Wurlypedal

Wurlypedal: Waveshaper.o Effect.o main.o
	$(CC) -o $@ Effect.o main.o

.cpp.o:
	$(CC) -c $<

clean:
	rm -f *.o
	rm -f Wurlypedal
