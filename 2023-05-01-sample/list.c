#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct ELEMENT
{
    int value;
    struct ELEMENT *next;
} ELEMENT;

ELEMENT *create_list(int value)
{
    ELEMENT *element = (ELEMENT *)calloc(1, sizeof(ELEMENT));
    element->value = value;
    return element;
}

int list_size(ELEMENT *head)
{
    return head == NULL ? 0 : 1 + list_size(head->next);
}

void add_element(ELEMENT *head, int value)
{
    if (head->next)
    {
        add_element(head->next, value);
    }
    else
    {
        head->next = (ELEMENT *)calloc(1, sizeof(ELEMENT));
        head->next->value = value;
    }
}

void print_list(ELEMENT *head)
{
    if (!head)
    {
        puts("empty list");
    }
    else if (!head->next)
    {
        printf("%d\n", head->value);
    }
    else
    {
        printf("%d ", head->value);
        print_list(head->next);
    }
}

int get_element(ELEMENT *head, int index)
{
    return index == 0 ? head->value : get_element(head->next, index - 1);
}

void clear_list(ELEMENT *head)
{
    if (head->next)
    {
        clear_list(head->next);
    }

    free(head);
}

int main()
{
    ELEMENT *list = NULL;

    char line[101];
    while (gets(line))
    {
        char *command = strtok(line, " ");

        if (strcmp(command, "create") == 0)
        {
            if (list)
            {
                clear_list(list);
            }

            list = create_list(atoi(strtok(NULL, " ")));
        }
        else if (!list)
        {
            fprintf(stderr, "You must create a list first!\n");
        }
        else if (strcmp(command, "add") == 0)
        {
            add_element(list, atoi(strtok(NULL, " ")));
        }
        else if (strcmp(command, "get") == 0)
        {
            printf("%d\n", get_element(list, atoi(strtok(NULL, " "))));
        }
        else if (strcmp(command, "print") == 0)
        {
            print_list(list);
        }
        else if (strcmp(command, "clear") == 0)
        {
            clear_list(list);
            list = NULL;
        }
        else if (strcmp(command, "size") == 0)
        {
            printf("Size of the list: %d\n", list_size(list));
        }
    }

    if (list)
    {
        clear_list(list);
    }

    return 0;
}