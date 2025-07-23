#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>   
//#include <sys/wait.h>  

#define MAX_LINE 1024
#define MAX_ARGS 64

void parseInput(char *input, char **args) {
    int i = 0;
    args[i] = strtok(input, " \t\n");
    while (args[i] != NULL) {
        i++;
        args[i] = strtok(NULL, " \t\n");
    }
}

int main() {
    char input[MAX_LINE];
    char *args[MAX_ARGS];
    pid_t pid;

    while (1) {
        printf("MyShell> ");
        fflush(stdout);

        // Read user input
        if (!fgets(input, MAX_LINE, stdin)) {
            break; // Exit on Ctrl+D
        }

        // Remove newline and check for "exit"
        if (strncmp(input, "exit", 4) == 0) {
            break;
        }

        // Parse the command into args
        parseInput(input, args);

        // Empty input check
        if (args[0] == NULL) {
            continue;
        }

        // Fork a new process
        pid = fork();
        if (pid == 0) {
            // Child process: execute command
            if (execvp(args[0], args) == -1) {
                perror("Error");
            }
            exit(EXIT_FAILURE);
        } else if (pid > 0) {
            // Parent waits for child
            wait(NULL);
        } else {
            perror("Fork failed");
        }
    }

    return 0;
}
