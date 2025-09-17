//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main(){
    int token = 0;
    printf("Enter your token : ");
    scanf("%d",&token);

    int numerator = 1;
    int denominator = 2;

    float sum = 0.0f;

    for(int i = 1 ; i <= token ;i ++){
        sum += (float) numerator/denominator;
        numerator += 2;
        denominator += 2;

    }
    printf("%.4f",sum);

    
    return 0;
}