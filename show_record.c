#include "header.h"

void show_records()
{
    struct student *p;

    if(head == NULL)
    {
        printf("No student records available\n");
        return;
    }

    printf("\n------------------------------------------\n");
    printf("Roll No\tName\t\tPercentage\n");
    printf("------------------------------------------\n");

    p = head;

    while(p != NULL)
    {
        printf("%d\t%-15s\t%.2f\n",
               p->rollno,
               p->name,
               p->percentage);

        p = p->next;
    }

    printf("------------------------------------------\n");
}
