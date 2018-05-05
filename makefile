CC=gcc
FLAGS=-O2 -Wall -Werror -lncurses
OBJ=cell_space.o  input.o  output.o conway.o

conway: $(OBJ)
	mkdir bin
	$(CC) -o bin/$@ $^ $(FLAGS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

.PHONY:
	clean

clean:
	rm *.o
	rm bin/*
