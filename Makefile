CC = clang
CFLAGS = -Wall -Wextra -pedantic -ggdb
CLIBS = 

all: main

main:
	$(CC) $(CFLAGS) -o main main.c linked-list.c $(CLIBS)