#include "header.h"
void modify_record()
{
    struct student *p;
    int roll;
    char name[50];
    char ch;
    float percentage;
    int found = 0;

    if(head == NULL)
    {
        printf("No records available\n");
        return;
    }

    printf("R : Search by roll number\n");
    printf("N : Search by name\n");
    printf("P : Search by percentage\n");
    printf("Enter choice: ");
    scanf(" %c",&ch);

    /* Search by roll number */

    if(ch == 'r' || ch == 'R')
    {
        printf("Enter roll number: ");
        scanf("%d",&roll);

        p = head;

        while(p != NULL)
        {
            if(p->rollno == roll)
            {
                printf("Current name: %s\n",p->name);
                printf("Enter new name: ");
                scanf(" %49[^\n]",p->name);

                printf("Enter new percentage: ");
                scanf("%f",&p->percentage);

                printf("Record modified\n");
                return;
            }

            p = p->next;
        }

        printf("Record not found\n");
    }

    /* Search by name */

    else if(ch == 'n' || ch == 'N')
    {
        printf("Enter name: ");
        scanf(" %49[^\n]",name);

        p = head;

        while(p != NULL)
        {
            if(strcmp(p->name,name) == 0)
            {
                printf("Roll No: %d\n",p->rollno);
                printf("Percentage: %.2f\n",p->percentage);
                found = 1;
            }

            p = p->next;
        }

        if(found == 0)
        {
            printf("Record not found\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d",&roll);

        p = head;

        while(p != NULL)
        {
            if(p->rollno == roll)
            {
                printf("Enter new name: ");
                scanf(" %49[^\n]",p->name);

                printf("Enter new percentage: ");
                scanf("%f",&p->percentage);

                printf("Record modified\n");
                return;
            }

            p = p->next;
        }
    }

    /* Search by percentage */

    else if(ch == 'p' || ch == 'P')
    {
        printf("Enter percentage: ");
        scanf("%f",&percentage);

        p = head;

        while(p != NULL)
        {
            if(p->percentage == percentage)
            {
                printf("Roll No: %d\n",p->rollno);
                printf("Name: %s\n",p->name);
                found = 1;
            }

            p = p->next;
        }

        if(found == 0)
        {
            printf("Record not found\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d",&roll);

        p = head;

        while(p != NULL)
        {
            if(p->rollno == roll)
            {
                printf("Enter new name: ");
                scanf(" %49[^\n]",p->name);

                printf("Enter new percentage: ");
                scanf("%f",&p->percentage);

                printf("Record modified\n");
                return;
            }

            p = p->next;
        }
    }

    else
    {
        printf("Invalid choice\n");
    }
}
