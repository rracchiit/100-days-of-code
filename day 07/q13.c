//Write a program to input a year and check whether it is a leap year or not using condition2al statements.

#include <stdio.h>
int main (){
    int year = 0;

    printf("Enter your year : ");
    scanf("%d", &year);

   /* if(year%4 == 0){
        printf("");
    }
        
    else if (year%400==0)
    {
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    } */


    if(year % 400 == 0){
        printf("it is a leap year");
    }

    else if (year % 100 == 0){
        printf("it is not a leap year");
    }
    else if(year % 4 == 0){
        printf("it is a leap year");
    }
    else{
        printf("its not a leap year");
    }

    return 0;
}