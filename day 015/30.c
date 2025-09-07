//Write a program to reverse a given number.

#include <stdio.h>
int main (){

    int digit = 0;
    int rev = 0;

    printf("Enter the Number : ");
    scanf("%d",&digit);

    
    while (digit != 0){
        int last = digit % 10;
        rev = rev * 10 + last;
        digit /= 10;
    }
    printf("%d",rev);


    return 0;
}