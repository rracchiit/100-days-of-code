// Q143: Find and print the student with the highest marks.

#include<stdio.h>

struct students{
    char name[50];
    int roll;
    float marks;
};

int main(){
    int n, val_i = 0;
    float max_marks=0;
    printf("Enter number of students details you want to enter:  ");
    scanf("%d", &n);
    printf("\n");
    struct students stu[n];
    for(int i=0; i<n; i+=1){
        printf("Enter details for students number %d:\n", i+1);
        printf("Enter Name:  ");
        scanf("%s", stu[i].name);
        printf("Enter Roll Number:  ");
        scanf("%d", &stu[i].roll);
        printf("Enter Marks:  ");
        scanf("%f", &stu[i].marks);
        // Directly checking maximum marks in same input loop;
        if(stu[i].marks > max_marks){
            max_marks = stu[i].marks;
            val_i = i;
        }
        printf("\n");
    }
    // Printing the student with maximum marks:
    printf("TOPPER: %s (Marks: %.2f)\n", stu[val_i].name, max_marks);
    printf("\n");
    return 0;
}