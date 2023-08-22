#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024
#define MAX_ARGS 64

void display_prompt() {
    printf("$ ");
    fflush(stdout);
}

int main(void) {
    char input[MAX_INPUT_SIZE];

    while (1) {
        display_prompt();

        if (fgets(input, MAX_INPUT_SIZE, stdin) == NULL) {
            printf("\n");
            break; // Ctrl+D (EOF) was pressed
        }

        // Remove newline character from input
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "") == 0) {
            continue; // Empty input, show prompt again
        }

        // Tokenize the input into arguments
        char *args[MAX_ARGS];
        char *token = strtok(input, " ");
        int arg_count = 0;

        while (token != NULL) {
            args[arg_count] = token;
            token = strtok(NULL, " ");
            arg_count++;
        }

        args[arg_count] = NULL; // Null-terminate the argument list

        pid_t pid = fork();

        if (pid < 0) {
            perror("Fork error");
        } else if (pid == 0) {
            // Child process
            execvp(args[0], args);

            // If execvp fails, print error message
            perror("Command not found");
            exit(EXIT_FAILURE);
        } else {
            // Parent process
            wait(NULL); // Wait for child to finish
        }
    }

    return 0;
}