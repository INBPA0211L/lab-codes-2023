#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *double_vowels(char *original)
{
    // count the vowels or be pessimist and allocate double size
    char *result = (char *)calloc(strlen(original) * 2 + 1, sizeof(char));

    int j = 0;
    for (int i = 0; i < strlen(original) + 1; i++)
    {
        // if(strchr("aeiouAEIOU", original[i])) {
        // if(('a' <= original[i] && original[i] <= 'z') || ('A' <= original[i] && original[i] <= 'Z')) {
        // if (islower(original[i]) || isupper(original[i])) {
        if (strchr("aeiou", tolower(original[i])))
        {
            result[j] = original[i];
            j++;
        }
        result[j] = original[i];
        j++;
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
        char *result = double_vowels(line);
        puts(result);
        free(result);
    }

    return EXIT_SUCCESS;
}