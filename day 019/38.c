//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){

    int a = 0;

    printf("Enter your number : ");
    scanf("%d",&a);

    int result = 0;

    for(int i = 0 ; i < a+1 ; i ++){
        int temp = a % 10;
        result += temp ;
        printf("%d\n",temp);
        a /= 10;

    }
    printf("The result of dightis of %d is : %d",a, result);


    return 0;
}