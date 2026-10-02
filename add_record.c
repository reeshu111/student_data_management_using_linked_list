#include "header.h"
void add_record()
{
    struct student *new;
    struct student *p;
    int roll = 1;

    new = malloc(sizeof(struct student));

    if(new == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    /* Find unused roll number */

    while(1)
    {
        p = head;

        while(p != NULL)
        {
            if(p->rollno == roll)
                break;

            p = p->next;
        }

        if(p == NULL)
            break;

        roll++;
    }

    new->rollno = roll;

    printf("Enter name: ");
    scanf(" %49[^\n]",new->name);

    while(1)
    {
        printf("Enter percentage: ");
        scanf("%f",&new->percentage);

        if(new->percentage >= 0 &&
           new->percentage <= 100)
            break;

        printf("Invalid percentage\n");
    }

    new->next = NULL;

    if(head == NULL)
    {
        head = new;
    }
    else
    {
        p = head;

        while(p->next != NULL)
            p = p->next;

        p->next = new;
    }

    printf("Record added successfully\n");
}
