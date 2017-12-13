CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) -std=c++14
LFLAGS = -Wall $(DEBUG) -std=c++14

txt2rgn: main.o
	$(CC) $(LFLAGS) main.o -o txt2rgn
	\rm main.o

main.o: main.c
	$(CC) $(CFLAGS) main.c
	
clean:
	\rm txt2rgn