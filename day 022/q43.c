#include <stdio.h>


int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int a, temp, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &a);

    temp = a; 

    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == a) {
        printf("%d is a Strong Number\n", a);
    } else {
        printf("%d is NOT a Strong Number\n", a);
    }

    return 0;
}
