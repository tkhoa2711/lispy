build:
	cc -std=c99 -Wall -ledit main.c -o main

run: build
	./main
