//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main(){
    int token = 0;

    printf("Enter your number: ");
    scanf("%d",&token);

    if (token%2 == 0){

        printf("It is even");

    }
    else{
        printf("it is odd");
    }

    return 0;
}