//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main(){
    int token = 0;
    int seconds = 0;
    int minutes = 0;
    int hours = 0;

    printf("Enter your time in seconds : ");
    scanf("%d",&token);

    hours = token / 3600;
    minutes = (token%3600) / 60;
    seconds = token % 60;

    printf("%d:%d:%d",hours,minutes,seconds);


    


    return 0;
}