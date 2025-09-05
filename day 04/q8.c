//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
