//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int  main(){
    float radius = 0.0f;
    
    float area = 0.0f;
    float circumference  = 0.0f;

    
    printf("Enter the value of radius : ");
    scanf("%f",&radius);
    
    
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    
    printf("\nthe area of the rectangle : %.2f",area);
    printf("\nthe perimerter of rectangle : %.2f",circumference);

    return 0;
}