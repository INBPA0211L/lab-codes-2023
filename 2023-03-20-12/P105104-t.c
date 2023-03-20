#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *delete_digits(char *original) {
    // char result[strlen(original) + 1];
    // char *result = (char *)malloc(
    //     (strlen(original) + 1) * sizeof(char));
    char *result = (char *) calloc(
        strlen(original) + 1, sizeof(char));

    int position = 0;
    for(int i=0; i<strlen(original); i++) {
        if(!isdigit(original[i])) {
            result[position] = original[i];
            position++;
        }
    }
    return result;
}

int main() {
    char line[101];

    while(1) {
        gets(line);
        if(strcmp(line, "") == 0){
            break;
        }

        char *result = delete_spaces(line);
        puts(result);
        free(result);
    }

    return EXIT_SUCCESS;
}