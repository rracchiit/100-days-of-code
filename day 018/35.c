//Write a program to print all factors of a given number.
#include <stdio.h>
int main(){
    int digit = 0;
    printf("Enter your digit : ");
    scanf("%d",&digit);

    for(int i = 1 ; i <= digit; i++){
        if (digit%i==0)
        {
            printf("%d ",i);
        }
        
    }

    return 0;
}