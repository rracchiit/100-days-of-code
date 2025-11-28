// Q145: Return a structure containing top student's details from a function.

#include<stdio.h>

struct students{
    char name[50];
    int roll;
    float marks;
};

struct students top_student(struct students stu[], int n){
    struct students top = stu[0];
    for(int i=0; i<n; i+=1){
        if(stu[i].marks > top.marks){
            top = stu[i];
        }
    }
    return top;
}

int main(){
    int n;
    printf("Enter number of students's details you want to enter: ");
    scanf("%d", &n);
    printf("\n");
    struct students stu[n];
    for(int i=0; i<n; i+=1){
        printf("Enter details for student number %d:\n",i+1);
        printf("Name:  ");
        scanf("%s", stu[i].name);
        printf("Roll:  ");
        scanf("%d", &stu[i].roll);
        printf("Marks:  ");
        scanf("%f", &stu[i].marks);
        printf("\n");
    }
    printf("\n");
    struct students topper = top_student(stu, n);
    printf("Top Student: %s | Roll: %d | Marks: %.2f\n", topper.name, topper.roll, topper.marks);
    return 0;
}