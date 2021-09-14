#include <stdio.h>

// Declare a buffer for user input of size 2048 characters
static char input[2048];

int main(int argc, char *argv[]) {
    puts("Press Ctrl+c to Exit\n");

    while (1) {
        // Output the prompt
        fputs("lispy> ", stdout);

        // Read the user input (of maximum 2048 characters)
        fgets(input, 2048, stdin);

        // Simply echo the user input back for now
        printf("You said: %s", input);
    }

    return 0;
}
