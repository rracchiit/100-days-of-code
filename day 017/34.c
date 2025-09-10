// Write a program to check if a number is prime.

#include <stdio.h>
#include <stdbool.h>
int main(){
    

    int digit = 0;
    printf("Enter you digit : ");
    scanf("%d",&digit);
    
    bool isPrime = true;

    for(int i = 2; i < digit ; i++ ){
        if (digit%i == 0){
            isPrime = false;
        }

    }
    if (isPrime){
        printf("It is a prime");
    }

    else{
        printf("It is not a prime");
    }

    return 0;
}