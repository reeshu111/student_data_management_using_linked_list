#include "header.h"
void delete_record()
{
    struct student *p;
    struct student *prev;
    int roll;
    char name[50];
    char ch;
    int found = 0;

    if(head == NULL)
    {
        printf("No records available\n");
        return;
    }

    printf("R : Delete using roll number\n");
    printf("N : Delete using name\n");
    printf("Enter choice: ");
    scanf(" %c",&ch);
    if(ch == 'r' || ch == 'R')
    {
        printf("Enter roll number: ");
        scanf("%d",&roll);

        p = head;
        prev = NULL;

        while(p != NULL)
        {
            if(p->rollno == roll)
            {
                if(prev == NULL)
                    head = p->next;
                else
                    prev->next = p->next;

                free(p);

                printf("Record deleted\n");
                return;
            }

            prev = p;
            p = p->next;
        }

        printf("Record not found\n");
    }
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
                found = 1;
            }

            p = p->next;
        }

        if(found == 0)
        {
            printf("Name not found\n");
            return;
        }

        printf("Enter roll number to delete: ");
        scanf("%d",&roll);

        p = head;
        prev = NULL;

        while(p != NULL)
        {
            if(p->rollno == roll)
            {
                if(prev == NULL)
                    head = p->next;
                else
                    prev->next = p->next;

                free(p);

                printf("Record deleted\n");
                return;
            }

            prev = p;
            p = p->next;
        }

        printf("Roll number not found\n");
    }

    else
    {
        printf("Invalid choice\n");
    }
}
