//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 90-100: Grade A 80-89: Grade B 70-79: Grade C 60-69: Grade D below 60: Grade F.
#include <stdio.h>
int main(){
    int percentage = 0;

    printf("Enter your percentage : ");
    scanf("%d",&percentage);


    if(percentage <= 100 && percentage >=0){
        if (percentage <=100 && percentage >= 90)
        {
            printf("You got grade A");
        }
        
        else if (percentage <=89 && percentage >= 80)
        {
            printf("You got grade B");
        }
        
        else if (percentage <=79 && percentage >= 70)
        {
            printf("You got grade C");
        }
        
        else if (percentage <=69 && percentage >= 60)
        {
            printf("You got grade D");
        }
        
        else if (percentage <60 )
        {
            printf("Fail");
        }
        }
        

    return 0;
}