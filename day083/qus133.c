// Q133: Create an enum for months and print how many days each month has.

#include<stdio.h>
#include<string.h>

enum days_in_month {
    January, February, March, April, May, June, July, August, September, October, November, December
};

int main(){
    enum days_in_month month;
    char input[10];
    printf("Enter the month (first 3 letters of month in uppercase) to know how many days: ");
    scanf("%s", &input);
    if (strcmp(input, "JAN")==0) month = January;
    else if (strcmp(input, "FEB")==0) month = February;
    else if (strcmp(input, "MAR")==0) month = March;
    else if (strcmp(input, "APR")==0) month = April;
    else if (strcmp(input, "MAY")==0) month = May;
    else if (strcmp(input, "JUN")==0) month = June;
    else if (strcmp(input, "JUL")==0) month = July;
    else if (strcmp(input, "AUG")==0) month = August;
    else if (strcmp(input, "SEP")==0) month = September;
    else if (strcmp(input, "OCT")==0) month = October;
    else if (strcmp(input, "NOV")==0) month = November;
    else if (strcmp(input, "DEC")==0) month = December;
    else {
        printf("Enter valid month name with first 3 letters of month name all in upper case!\n");
        return 1;
    }

    switch (month){
        case January:
            printf("31 days\n");
            break;
        case February:
            printf("28 or 29 days\n");
            break;
        case March:
            printf("31 days\n");
            break;
        case April:
            printf("30 days\n");
            break;
        case May:
            printf("31 days\n");
            break;
        case June:
            printf("30 days\n");
            break;
        case July:
            printf("31 days\n");
            break;
        case August:
            printf("31 days\n");
            break;
        case September:
            printf("30 days\n");
            break;
        case October:
            printf("31 days\n");
            break;
        case November:
            printf("30 days\n");
            break;
        case December:
            printf("31 days\n");
            break;
        
    }
    return 0;
}