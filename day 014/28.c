//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){

    int digit = 0;
    printf("Enter the number: ");
    scanf("%d",&digit);

    int product = 1;

    for(int i = 2; i <= digit; i+=2){
        product *= i;

    }

    printf("The product of even numbers b/w (1-%d) : %d",digit,product);

    return 0;
}