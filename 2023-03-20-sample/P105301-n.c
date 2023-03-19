#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *increment_lowers(char *original)
{
    char *result = (char *)calloc(strlen(original) + 1, sizeof(char));

    for (int i = 0; i < strlen(original) + 1; i++)
    {
        if (islower(original[i]))
        {
            result[i] = (original[i] - 'a' + 1) % ('z' - 'a' + 1) + 'a';
        }
        else
        {
            result[i] = original[i];
        }
    }
    return result;
}

int main()
{
    char line[101];

    int n = atoi(gets(line));
    for (int i = 0; i < n; i++)
    {
        gets(line);
        char *result = increment_lowers(line);
        puts(result);
        free(result);
    }

    return EXIT_SUCCESS;
}