#include "header.h"
struct student *head = NULL;

int main(void)
{
    char choice;

    load_records();

    while (1)
    {
        printf("\n\n******** STUDENT RECORD MENU ********\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Show the list\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save records\n");
	printf("p/P : load records\n");
        printf("e/E : Exit\n");
        printf("t/T : Sort the list\n");
        printf("l/L : Delete all the records\n");
        printf("r/R : Reverse the list\n");
        printf("Enter your choice: ");

        scanf(" %c", &choice);

        switch (choice)
        {
            case 'a':
            case 'A':add_record();
                break;
            case 'D':
      	    case'd' : delete_record();
                break;

            case 's':
            case 'S':show_records();
                break;

            case 'm':
            case 'M': modify_record();
                break;

            case 'v':
            case 'V':save_records();
                break;
            	     
            case 'p':
            case 'P': load_records();
                break;

            case 't':
            case 'T':sort_records();
                break;

            case 'l':
            case 'L':delete_all();
                break;

            case 'r':
            case 'R':reverse_list();
                break;

            case 'e':
            case 'E':
            {
              printf("exit \n");
	      delete_all();
	      printf("records terminated\n");
	      return 0;
            }

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
