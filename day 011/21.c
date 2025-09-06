// write a program to display the month name and number of days using switch-case for a given month number

#include <stdio.h>
int main(){

    int month = 0;

    printf("Enter your month (1-12) : ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("Jan, 31 days");
        break;
        
    case 2:
        printf("Feb, 28 days");
        break;

    case 3:
        printf("Mar, 31 days");
        break;

    case 4:
        printf("Apr, 30 days");
        break;

    case 5:
        printf("May, 31 days");
        break;

    case 6:
        printf("Jun, 30 days");
        break;

    case 7:
        printf("jul, 31 days");
        break;

    case 8:
        printf("Aug, 31 days");
        break;

    case 9:
        printf("Sept, 30 days");
        break;

    case 10:
        printf("Oct, 31 days");
        break;

    case 11:
        printf("Nov, 30 days");
        break;

    case 12:
        printf("Dec, 31 days");
        break;
    
    default:
    printf("Enter a valid input (1-12)");
        break;
    }


    return 0;
}