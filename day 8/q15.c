//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main (){

    char a = '\0';

    printf("Enter your character : ");
    scanf("%c",&a);

    if(a >= 'a' && a<= 'z'){
        printf("It is lowercase alphabet");
    }

    else if (a >= 'A' && a<= 'Z')
    {
        printf("It is uppercase alphabet");
    }


    else if ( a >= '0' && a <= '9')
    {
        printf("It is a digit");
    }
    
    
    else{
        printf("It is a special character");
    }


    

    return 0;

}