#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *delete_spaces(char *original) {
    // char result[strlen(original) + 1];
    // char *result = (char *)malloc(
    //     (strlen(original) + 1) * sizeof(char));
    char *result = (char *) calloc(
        strlen(original) + 1, sizeof(char));

    int position = 0;
    for(int i=0; i<strlen(original); i++) {
        if(original[i] != ' ') {
            result[position] = original[i];
            position++;
        }
    }
    return result;
}

int main() {
    char line[101];

    gets(line);
    int n = atoi(line);

    for(int i=0; i<n; i++) {
        gets(line);
        char *result = delete_spaces(line);
        puts(result);
        free(result);
    }

    return EXIT_SUCCESS;
}