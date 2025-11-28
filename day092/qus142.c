// Q142: Store details of 5 students in an array of structures and print all.

#include<stdio.h>

struct detail{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct detail student[5];
    for(int i=0; i<5; i+=1){
        printf("Enter details for student number %d:\n", i+1);
        printf("Name:  ");
        scanf("%s", student[i].name);
        printf("Roll Number:  ");
        scanf("%d", &student[i].roll);
        printf("Marks:  ");
        scanf("%f", &student[i].marks);
        printf("\n");
    }  
    printf("\n");
    printf("Details of students:\n\n");
    printf("%-30s %-10s %-20s\n", "NAME", "ROLL_NO", "MARKS");
    printf("-----------------------------------------------------------------------------------------\n");
    for(int i=0; i<5; i+=1){
        printf("%-30s %-10d %-20.2f\n", student[i].name, student[i].roll, student[i].marks);
    }
    return 0;
}