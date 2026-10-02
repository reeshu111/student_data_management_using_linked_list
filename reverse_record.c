#include "header.h"
void reverse_list()
{
    struct student *prev = NULL;
    struct student *current = head;
    struct student *next;

    while(current != NULL)
    {
        next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }

    head = prev;

    printf("Records reversed successfully\n");
}
