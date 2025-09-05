//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main(){
    double principal = 0.0f; 
    double rate = 0.0f;
    double time = 0;
    double si = 0.0f;
    double ci = 0.0f;
    double amount = 0.0f;


    printf("Enter principal: ");
    scanf("%lf", &principal);

    printf("Enter rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    si = (principal * rate * time) / 100.0;

    amount = principal * pow((1 + rate / 100.0), time);
    ci = amount - principal;


    printf("\nSimple Intrest is : %.2lf",si);
    printf("\nCompound Interest = %.2lf\n", ci);


    return 0;
}