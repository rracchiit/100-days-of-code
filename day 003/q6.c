//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main (){

    int a = 4;
    int b = 8;
    int c = 0;

    c = a;
    a = b;
    b = c;

    printf("\n%d",a);
    printf("\n%d",b);

    return 0;
}