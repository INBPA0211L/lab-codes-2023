#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[101];
    gets(line);

    for(int i=0; i<strlen(line); i++) {
        printf("%c ======\n", line[i]);
        puts(isupper(line[i]) ? "isupper()": "");
        puts(islower(line[i]) ? "islower()": "");
        puts(isdigit(line[i]) ? "isdigit()": "");
        puts(isalpha(line[i]) ? "isalpha()": "");
        puts(isalnum(line[i]) ? "isalnum()": "");
        // if(line[i] == 'a' || line[i] == 'e' ...)
        puts(strchr("aeiouAEIOU", line[i]) ?
                                    "vowel": "");
        puts(strchr("aeiou", tolower(line[i])) ?
                                    "vowel": "");
        if('a' <= line[i] && line[i] <= 'z') {
            // kisbetű
        }
    }

    return EXIT_SUCCESS;
}