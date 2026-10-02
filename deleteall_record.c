#include "header.h"
void delete_all()
{
    struct student *p;

    while(head != NULL)
    {
        p = head;
        head = head->next;
        free(p);
    }

    printf("All records deleted\n");
}



