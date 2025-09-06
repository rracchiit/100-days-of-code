/*write a program to calculate electricity bill bases on units consumed with these rates:
First 100 units = $5/unit
Next 100 units = %7/unit
Next 100 units = $10/unit
above at $12/unit */

#include<stdio.h>
int main(){

    int cost = 0;
    int units = 0;

    printf("Enter the no. units : ");
    scanf("%d",&units);

    if (units <= 100){
        cost = units * 5;
        printf("You have to pay $%d for %d units", cost , units);

    }
  
    else if (units > 100 && units <=200){
        cost = (units -100)*7 + 500 ;
        printf("You have to pay $%d for %d units", cost , units);

    }
  
    else if (units > 200 && units <=300){
        cost = (units -200)*10 + 1200 ;
        printf("You have to pay $%d for %d units", cost , units);

    }
    else if (units > 300){
        cost = (units -300)*12 + 2200 ;
        printf("You have to pay $%d for %d units", cost , units);

    }

    
    return 0;
}