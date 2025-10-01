//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix
    printf("The matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Main diagonal
    printf("Main diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    // Secondary diagonal
    printf("Secondary diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - i - 1]);
    }
    printf("\n");

    return 0;
}
