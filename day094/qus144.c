// Q144: Write a function that accepts a structure as parameter and prints its members.

#include<stdio.h>

struct students {
    char name[50];
    int roll;
    float marks;
};

void stu_record(struct students stu){
    printf("Record of student:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n", stu.name, stu.roll, stu.marks);
}

int main(){
    struct students stu;
    printf("Enter Name:  ");
    scanf("%s", stu.name);
    printf("Enter Roll Number:  ");
    scanf("%d", &stu.roll);
    printf("Enter Marks:  ");
    scanf("%f", &stu.marks);
    printf("\n");
    stu_record(stu);
    return 0;
}