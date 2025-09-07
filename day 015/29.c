//Write a program to calculate the factorial of a number.

#include <stdio.h>
int main(){
    int digit = 0;

    
    printf("Enter a number : ");
    scanf("%d",&digit);
    
    long long factorial = 1;
    
    do{
        
        printf("Enter a positive number : ");
        scanf("%d",&digit);

    }while (digit<=0);

    for(int i = 1; i <= digit; i++){
        factorial *= i;
    }

    printf("\nThe factorial of %d is : %lld",digit,factorial);

    return 0;
}