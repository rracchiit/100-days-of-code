//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];  // main diagonal element
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
