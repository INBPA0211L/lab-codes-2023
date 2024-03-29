#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Airport {
    char name[31];
    char city[31];
    int runways;
    int time;
} AIRPORT;

int cmp(const void *a, const void *b) {
    AIRPORT *left = (AIRPORT *)a;
    AIRPORT *right = (AIRPORT *)b;
    
    if(left -> runways != right -> runways) {
        return - (left->runways - right->runways);
    }

    if(left->time != right->time) {
        return - (left->time - right->time);
    }

    return strcmp(left->name, right->name);
}

int main() {
    /*
    AIRPORT a1 = {
        "Zurich Kloten", "Zurich", 3, 360
    };
    printf("%s %s %d %d\n", a1.name, a1.city, 
        a1.runways, a1.time);
    */

    char line[101];

    gets(line);
    int n = atoi(line);
    AIRPORT airports[n];

    for(int i=0; i<n; i++) {
        gets(line);
        /*
        char *name = strtok(line, ";");
        char *city = strtok(NULL, ";");
        char *runways = strtok(NULL, ";");
        char *time = strtok(NULL, ";");

        strcpy(airports[i].name, name);
        strcpy(airports[i].city, city);
        airports[i].runways = atoi(runways);
        airports[i].time = atoi(time);
        */

        strcpy(airports[i].name, strtok(line, ";"));
        strcpy(airports[i].city, strtok(NULL, ";"));
        airports[i].runways = atoi(strtok(NULL, ";"));
        airports[i].time = atoi(strtok(NULL, ";"));
    }

    qsort(airports, n, sizeof(AIRPORT), cmp);

    for(int i=0; i<n; i++) {
        printf("%s (%s): %d\n", airports[i].name,
            airports[i].city, airports[i].time);
    }


    return EXIT_SUCCESS;
}