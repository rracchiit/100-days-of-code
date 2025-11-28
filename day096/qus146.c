// Q146: Create Employee structure with nested Date structure for joining date and print details.

#include<stdio.h>

struct Date{
    int day, month, year;
};

struct employee{
    char name[50];
    int id;
    struct Date j_d;
};

int main(){
    struct Date D;
    struct employee emp;
    printf("Enter the details of Employee: \n");
    printf("Enter name:  ");
    scanf("%s", emp.name);
    printf("Enter ID:  ");
    scanf("%d", &emp.id);
    printf("Enter Date of Joining:  ");
    scanf("%d %d %d", &emp.j_d.day, &emp.j_d.month, &emp.j_d.year);
    printf("\n");
    printf("The details of employees are: \n");
    printf("NAME: %s | ID: %d | Joining_Date: %d-%d-%d", emp.name, emp.id, emp.j_d.day, emp.j_d.month, emp.j_d.year);
    return 0;
}