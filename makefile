CC=gcc
CFLAGS=-std=c11 -W -Wall -pedantic --debug
LDFLAGS=
EXEC=test
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

test: $(OBJ) 
	@$(CC) -o $@ $^ $(LDFLAGS)

main.o: error.h baseInterface.h
error.o: error.h
atelier.o: error.h atelier.h
clients.o: error.h clients.h

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)