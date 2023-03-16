#include <stdio.h>
#include <string.h>

void dump_array(char *s, int length) {
    for(int i=0; i<length; i++) {
        printf("#%d *%c* %d %p\n", 
            i, s[i], s[i], &s[i]);
    }
}

int my_strlen(char *s) {
    int length = 0;
    while(s[length]) { // s[length] != 0
        length++;
    }
    return length;
}

void my_strcat(char *left, char *right) {
    int length = strlen(left);
    for(int i=0; i<=strlen(right); i++) { // =
        left[length + i] = right[i];
    }
}

void my_strcpy(char *left, char *right) { // =
    for(int i=0; i<=strlen(right); i++) {
        left[i] = right[i];
    }
}

int main() {
    // char line[11];
    char line[51];

    // scanf("%s", line);
    // puts(line);

    gets(line);
    puts(line); // \n is added
    dump_array(line, 11);

    gets(line);
    puts(line);
    dump_array(line, 11);
    printf("%d %d %d\n", strlen(line), 
            sizeof(line), my_strlen(line));
    
    puts(line + 4);

    // does not compile line = "banana";
    strcpy(line, "banana");
    puts(line);
    dump_array(line, 11);

    my_strcpy(line, "lemon");
    puts(line);
    dump_array(line, 11);

    my_strcpy(line + 4, "test");
    puts(line);
    dump_array(line, 11);

    strcpy(line, "apple");
    strcat(line, " tree");
    puts(line);
    dump_array(line, 11);

    my_strcat(line, " test");
    puts(line);
    dump_array(line, 11);

    strcpy(line + strlen(line), " foo");
    puts(line);
    dump_array(line, 11);

    return 0;
}