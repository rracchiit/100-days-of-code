//Write a program to find the LCM of two numbers

#include <stdio.h>
int main (){


    int a = 0;
    int b = 0;

    printf("Enter number a : ");
    scanf("%d",&a);
    
    printf("Enter number b : ");
    scanf("%d",&a);

    for(int i = 1 ; i < a ; i++){
        int lcma= a * i;
        printf("%d",lcma);
    }
    
    return 0;
}