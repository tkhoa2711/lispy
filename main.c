#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <string.h>

static char buffer[2048];

// Fake readline function
char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer)+1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

// Fake add_history function
void add_history(char* unused) {}

#else
#include <editline/readline.h>
#endif

#ifndef __APPLE__
#include <editline/history.h>
#endif

int main(int argc, char *argv[]) {
    puts("Press Ctrl+c to Exit\n");

    while (1) {
        char* input = readline("lispy> ");

        add_history(input);

        // Simply echo the user input back for now
        printf("You said: %s\n", input);

        free(input);
    }

    return 0;
}
