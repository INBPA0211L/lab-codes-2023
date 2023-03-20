Skip to content
Product
Solutions
Open Source
Pricing
Search
Sign in
Sign up
INBPA0212L-2023
/
lab-codes
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
lab-codes/2023-03-20-sample/P105205-n.c
@tothr94
tothr94 Add sample solutions
Latest commit ef323f5 14 hours ago
 History
 1 contributor
42 lines (37 sloc)  992 Bytes

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
        //if(strchr("aeiouAEIOU", original[i])) {
        /if(('a' <= original[i] && original[i] <= 'z') || ('A' <= original[i] && original[i] <= 'Z')) {
        // if (islower(original[i]) || isupper(original[i])) {
        if (strchr(tolower(original[i], "aeiou")))
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
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
lab-codes/P105205-n.c at main · INBPA0212L-2023/lab-codes · GitHub