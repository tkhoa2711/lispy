#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

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
