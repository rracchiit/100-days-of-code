// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include<stdio.h>
#include<string.h>

struct Student{
    char name[50];
    int roll_no;
    float marks;
};

int main(){
    // Made for only one student as per question:
    struct Student stu;
    printf("Enter Name:   ");
    fgets(stu.name, sizeof(stu.name), stdin);
    stu.name[strcspn(stu.name, "\n")]='\0';
    printf("Enter Roll Number:   ");
    scanf("%d", &stu.roll_no);
    printf("Enter Marks:   ");
    scanf("%f", &stu.marks);
    printf("\n");
    printf("Student's data:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n", stu.name, stu.roll_no, stu.marks);
    return 0;
}