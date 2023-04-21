#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LegoSet {
    char code[6];
    char name[51];
    char theme[31];
    int bricks;
} LEGO_SET;

int cmp(const void *a, const void *b) {
    LEGO_SET *left = (LEGO_SET *) a;
    LEGO_SET *right = (LEGO_SET *) b;

    // if((*left).bricks)
    if(left->bricks != right->bricks) {
        return - (left->bricks - right->bricks);
    }

    if(strcmp(left->theme, right->theme) != 0) {
        return strcmp(left->theme, right->theme);
    }

    if(strcmp(left->name, right->name) != 0) {
        return strcmp(left->name, right->name);
    }

    return strcmp(left->code, right->code);
}

int main() {
    /*
    LEGO_SET set = {
        "123", "A LEGO Set", "City", 60
    };

    printf("%s %s\n", set.code, set.name);
    */

    char line[201];
    int n = atoi(gets(line));
    LEGO_SET sets[n];

    for(int i=0; i<n; i++) {
        gets(line);
        char *code = strtok(line, ";");
        char *name = strtok(NULL, ";");
        char *theme = strtok(NULL, ";");
        char *bricks = strtok(NULL, ";");
        strcpy(sets[i].code, code);
        strcpy(sets[i].name, name);
        strcpy(sets[i].theme, theme);
        sets[i].bricks = atoi(bricks);
    }

    qsort(sets, n, sizeof(LEGO_SET), cmp);

    for(int i=0; i<n; i++) {
        printf("%s (%s): %d - %s\n",
            sets[i].name, sets[i].code,
            sets[i].bricks, sets[i].theme);
    }

    return EXIT_SUCCESS;
}