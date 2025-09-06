/*write a program to calc lib fine based on late days as follows
First 5 days late: $2/day
Next 5 days late: $4/day
Next 20 days later: $6/day
More than 30 days: Membership cancelled. */

#include <stdio.h>
int main (){

    int late_days = 0;
    int cost1 = 0;
    int cost2 = 0;
    int cost3 = 0;


    printf("Enter the number of late days : ");
    scanf("%d", &late_days);

    if (late_days <= 5){
        cost1 = late_days*2;
        printf("%d",cost1);

    }

    else if (late_days > 5 && late_days <=20){
        cost2 = ((late_days - 5)*4) + (5*2) ;
        
        printf("%d",cost2);
    }
  
    else if (late_days > 20 && late_days <=30){
        cost3 = ((late_days-20)*6) + (15*4) + (5*2) ;
        printf("%d",cost3);
    }

    else if(late_days > 30){

        printf("Membership cancelled");

    } 

    else {
        printf("Enter valid input");
    }

    return 0;
}