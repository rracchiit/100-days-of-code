//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int  main(){
    float length = 0.0f;
    float breadth = 0.0f;
    
    float area = 0.0f;
    float perimeter = 0.0f;

    
    printf("Enter the value of length : ");
    scanf("%f",&length);
    
    printf("Enter the value of breadth : ");
    scanf("%f",&breadth);
    
    area = length * breadth;
    perimeter = 2*(length+breadth);
    
    printf("\nthe area of the rectangle : %.2f",area);
    printf("\nthe perimerter of rectangle : %.2f",perimeter);

    return 0;
}