// Q149: Use malloc() to allocate structure memory dynamically and print details.

#include<stdio.h>
#include<stdlib.h>

struct students{
    char name[50];
    int roll;
    float marks;
};

int main(){
    // Dynamically allocating memory for one Student:
    struct students *stu = (struct students *) malloc(sizeof(struct students));
    if (stu == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    // Assigning values into the structure:
    printf("Enter name of student:  ");
    scanf("%s", stu->name);
    printf("Enter roll number of student:  ");
    scanf("%d", &stu->roll);
    printf("Enter marks of student:  ");
    scanf("%f", &stu->marks);
    // Printing details:
    printf("Name: %s | Roll: %d | Marks: %.2f\n", stu->name, stu->roll, stu->marks);
    // Freeing the allocated space so that memory could be free after use:
    free(stu);
    return 0;
}