#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};
extern struct student *head;

void add_record(void);
void delete_record(void);
void delete_all(void);
void show_records(void);
void modify_record(void);
void save_records(void);
void load_records(void);
void sort_records(void);
void reverse_list(void);
