// Q148: Take two structs as input and check if they are identical.

#include<stdio.h>
#include<string.h>

struct students{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct students stu[2];
    for(int i=0; i<2; i+=1){
        printf("Enter details of student number %d:\n", i+1);
        printf("Enter name:  ");
        scanf("%s", stu[i].name);
        printf("Enter Roll number:  ");
        scanf("%d", &stu[i].roll);
        printf("Enter Marks:  ");
        scanf("%f", &stu[i].marks);
        printf("\n");
    }  
    printf("\n");
    // Comparing two structure inputs:
    if (strcmp(stu[0].name, stu[1].name)==0 && (stu[0].roll == stu[1].roll) && (stu[0].marks == stu[1].marks)){
        printf("Both the inputs are identical.\n");
    }
    else 
        printf("Inputs are not identical.\n");
    return 0;
}