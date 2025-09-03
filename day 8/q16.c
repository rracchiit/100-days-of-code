// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if (a >= b) {
        if (a >= c) {
            printf("A is the greatest: %d\n", a);
        } else {
            printf("C is the greatest: %d\n", c);
        }
    } else {
        if (b >= c) {
            printf("B is the greatest: %d\n", b);
        } else {
            printf("C is the greatest: %d\n", c);
        }
    }

    return 0;
}
