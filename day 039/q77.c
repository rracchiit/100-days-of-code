//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n;
    printf("Enter n (size of square matrix): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int matrix[n][n];
    printf("Enter the matrix elements (row-wise):\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // Check if diagonal elements matrix[i][i] are all distinct
    int distinct = 1; // assume distinct until we find a duplicate
    for (int i = 0; i < n && distinct; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct) {
        printf("Diagonal elements are all distinct.\n");
    } else {
        printf("Diagonal elements are NOT distinct.\n");
    }

    return 0;
}
