#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[11];
    gets(line);

    char *first = strtok(line, ";");
    puts(first);

    char *second = strtok(NULL, ";");
    puts(second);

    char *third = strtok(NULL, ";");
    puts(third);

    char *fourth = strtok(NULL, ";");
    puts(fourth);

    printf("%p\n", strtok(NULL, ";"));

    return EXIT_SUCCESS;
}