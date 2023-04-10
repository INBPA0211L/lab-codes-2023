#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char dump_array(char *s, int length)
{
    puts("=========");
    for (int i = 0; i < length; i++)
    {
        printf("#%d *%c* %p\n", i, s[i], s + i);
    }
    puts("=========");
}

int main()
{
    char line[21];
    gets(line);

    dump_array(line, 21);

    char *token = strtok(line, ";");
    dump_array(line, 21);
    while (token != NULL)
    {
        printf("%p %s\n", token, token);
        token = strtok(NULL, ";");
        dump_array(line, 21);
    }

    return 0;
}
