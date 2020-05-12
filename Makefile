# gcc Makefile 
# Made by Rafael Costa
# run '$ make all' to build stats.out executable and execute
# run '$ make clean' to remove executable files

CFLAGS = -Wall -g

all:
	gcc -o stats.out stats.c && ./stats.out && rm -f stats.out

clean:
	rm -f stats.out