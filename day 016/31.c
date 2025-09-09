//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main(){
    
    int digit = 0;
    int temp = 0;
    int temp1 = 0;
    

    
    printf("Enter you input : ");
    scanf("%d",&digit);
    
    while ( digit != 0)
    {
        temp = (digit % 2);
        temp = (digit / 2);
        
        
        digit= digit/2;
       
    }
   

    
return 0;
}