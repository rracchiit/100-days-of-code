//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){

    int n = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    int sum = 0;

    for (int i = 1; i <= 2*n; i+=2){
        sum +=i;
    }
    printf("The sum of first %d odd number is :%d",n ,sum);
    



    return 0;
}