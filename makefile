p1: main.c
	gcc -Wall -Werror -std=c99 -pthread main.c -o p1

run: p1
	./p1
