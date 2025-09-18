//Write a program to print the following pattern:
#include <stdio.h>

int main() {
    int n = 0;;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
