//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

    int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int D = 0;
    int quad1 = 0;
    int quad2 = 0; 

        printf("Enter the value of a : ");
        scanf("%d",&a);

        printf("Enter the value of b : ");
        scanf("%d",&b);
        
        printf("Enter the value of c : ");
        scanf("%d",&c);



    D = (b*b)- (4 * a * c);
    quad1 = (-b +sqrt(D)/ 2)*a;
    quad2 = (-b -sqrt(D)/ 2)*a;

    printf("\n%d",quad1);
    printf("\n%d",quad2);



    printf("%d",D);
        

    return 0;
    }