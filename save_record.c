#include "header.h"
void save_records()
{
    FILE *fp;
    struct student *p;

    fp = fopen("student.dat","wb");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return;
    }

    p = head;

    while(p != NULL)
    {
        fwrite(p,sizeof(struct student) - sizeof(struct student *),1,fp);

        p = p->next;
    }

    fclose(fp);

    printf("Records saved successfully\n");
}



