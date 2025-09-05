//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main(){
    int a = 0;

    printf("Enter your number :");
    scanf("%d",&a);

    if(a > 0){
        printf("it is postive");
    }

    else if (a = 0){
        printf("it is zero");
    }

    else if (a < 0){
        printf("it is negative");
    }

    else{
        printf("invlaid input");
    }

    return 0;
}