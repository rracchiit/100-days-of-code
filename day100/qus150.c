// Q150: Use pointer to struct to modify and display data using -> operator.

#include<stdio.h>

struct student{
    char name[50];
    int roll;
    float marks;
};

void func(struct student *stu){
    char ch;
    printf("Do you want to modify? (y/n):  ");
    scanf(" %c", &ch);
    printf("\n");
    if (ch=='y'){
        printf("Enter the details again:\n");
        printf("Enter name:  ");
        scanf("%s", stu->name);
        printf("Enter roll number:  ");
        scanf("%d", &stu->roll);
        printf("Enter marks:  ");
        scanf("%f", &stu->marks);
        printf("\n");
    }
    printf("The student details are:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f", stu->name, stu->roll, stu->marks);
}

int main(){
    struct student stu;
    printf("Enter details for student:\n");
    printf("Enter name:  ");
    scanf("%s", stu.name);
    printf("Enter roll number:  ");
    scanf("%d", &stu.roll);
    printf("Enter marks:  ");
    scanf("%f", &stu.marks);
    printf("\n");
    struct student *ptr;
    ptr = &stu;
    func(&stu);
    return 0;
}