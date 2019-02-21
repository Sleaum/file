CC=gcc
CFLAGS=-std=c11 -W -Wall -pedantic --debug
LDFLAGS=
EXEC=test
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

test: $(OBJ) 
	@$(CC) -o $@ $^ $(LDFLAGS)

main.o:          baseInterface.h error.h smartPointer.h
baseInterface.o: baseInterface.h
atelier.o:       atelier.h error.h
clients.o:       clients.h error.h
error.o:         error.h
smartPointer.o:  smartPointer.h

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)
