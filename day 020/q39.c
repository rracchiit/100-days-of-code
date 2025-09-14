// Program to find the product of odd digits of a number
#include <stdio.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    int prod = 1;
    int foundOdd = 0; 

    while (num > 0) {
        int temp = num % 10;   
        if (temp % 2 != 0) {   
            prod *= temp;
            foundOdd = 1;
        }
        num /= 10;             
    }

    if (foundOdd)
        printf("The product of odd digits is: %d\n", prod);
    else
        printf("No odd digits found.\n");

    return 0;
}
