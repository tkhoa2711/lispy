build:
	gcc -std=c99 main.c -Wall -ledit -o main

run: build
	./main
