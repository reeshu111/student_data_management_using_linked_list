#include "header.h"
void sort_records()
{
    struct student *p;
    struct student *q;

    int roll;
    char name[50];
    float percentage;

    char ch;

    if(head == NULL)
    {
        printf("No records available\n");
        return;
    }

    printf("N : Sort by name\n");
    printf("P : Sort by percentage\n");
    printf("Enter choice: ");
    scanf(" %c",&ch);

    p = head;

    while(p != NULL)
    {
        q = p->next;

        while(q != NULL)
        {
            if((ch == 'n' || ch == 'N') &&
               strcmp(p->name,q->name) > 0)
            {
                roll = p->rollno;
                p->rollno = q->rollno;
                q->rollno = roll;

                strcpy(name,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,name);

                percentage = p->percentage;
                p->percentage = q->percentage;
                q->percentage = percentage;
            }

            if((ch == 'p' || ch == 'P') &&
               p->percentage < q->percentage)
            {
                roll = p->rollno;
                p->rollno = q->rollno;
                q->rollno = roll;

                strcpy(name,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,name);

                percentage = p->percentage;
                p->percentage = q->percentage;
                q->percentage = percentage;
            }

            q = q->next;
        }

        p = p->next;
    }

    printf("Records sorted\n");
}
