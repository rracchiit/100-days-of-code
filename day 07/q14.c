//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main(){
    char a = '\0';

    printf("Enter your character : ");
    scanf("%c",&a);

    if(a == 'a' || a =='e' || a == 'i' || a == 'o' || a == 'u'||
    a == 'A' || a =='E' || a == 'I' || a == 'O' || a == 'U')
    
    {
        printf("%c is a vowel",a);
    }

    else{
        printf("%c is a consonant",a);
    }

    return 0;
}