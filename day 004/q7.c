//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main (){

    int a = 8;
    int b = 10;

    a = a + b;  //18  10
    b = a - b;  //18  8
    a = a - b;  //10  8

    printf("\na is : %d",a);
    printf("\nb is : %d",b);
    return 0;
}