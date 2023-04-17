#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[101];

    gets(line);
    char *token = strtok(line, ";");
    while(token != NULL) {
        puts(token);
        token = strtok(NULL, ";");
    }

    return EXIT_SUCCESS;
}