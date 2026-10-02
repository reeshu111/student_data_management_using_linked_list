#include "header.h"
void load_records()
{
    FILE *fp;
    struct student *new;
    struct student *p;

    fp = fopen("student.dat", "rb");

    if(fp == NULL)
    {
        return;
    }

    while(1)
    {
        new = malloc(sizeof(struct student));

        if(new == NULL)
        {
            fclose(fp);
            return;
        }

        if(fread(new, sizeof(struct student) - sizeof(struct student *), 1, fp) != 1)
        {
            free(new);
            break;
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
            {
                p = p->next;
            }

            p->next = new;
        }
    }

    fclose(fp);
}
