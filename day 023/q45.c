//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    float sum = 0.0;

    for (int i = 1; i <= n; i++) {
        float term = (2.0 * i) / (4.0 * i - 1);
        sum += term;
        printf("Term %d = %.2f\n", i, term);
    }

    printf("Sum of series up to %d terms = %.2f\n", n, sum);
    return 0;
}
