//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main (){

    float temp = 0.0f;
    float farenheit = 0.0f;

    printf("Enter your temp in celcius : ");
    scanf("%f",&temp);

    farenheit = (temp *9/5)+32;

    printf("%.2f",farenheit);


    return 0;
}