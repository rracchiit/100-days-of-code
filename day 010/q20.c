//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>

int main (){

    int daysOfWeek = 0;

    printf("Enter a digit (1-7): ");
    scanf("%c", &daysOfWeek);

    switch(daysOfWeek){
        case '1' :
            printf("its monday");
        break;
        case '2':
            printf("its tuesday");
        break;
        case '3':
            printf("its wednesday");
        break;
        case '4':
            printf("its thursday");
        break;
        case '5':
            printf("it is friday");
        break;
        case '6':
            printf("it is saturday");
        break;
        case '7':
            printf("It is sunday");
        break;

        default:
            printf("Entere a number between 1-7");

    }

    return 0;

}