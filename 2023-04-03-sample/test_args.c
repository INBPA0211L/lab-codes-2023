#include <stdio.h>
#include <stdlib.h>

// int main(int argc)
int main(int argc, char **argv)
// int main(int argc, char *argv[])
{
    printf("argc: %d\n", argc);
    for (int i = 0; i <= argc; i++)
    {
        printf("#%d %p", i, argv[i], argv[i]);
        if (argv[i] != NULL)
        {
            printf(" %s\n", argv[i]);
        }
        else
        {
            printf("\n");
        }
    }

    puts("==========");

    char **arg = &argv[0];
    while (*arg)
    {
        puts(*arg);
        arg++;
    }

    return EXIT_SUCCESS;
}