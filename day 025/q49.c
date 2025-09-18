/*Write a program to print the following pattern:
5
45
345
2345
12345 */

#include <stdio.h>
int main() {
    int a = 0;
    printf("Enter the number : ");
    scanf("%d", &a);

    for (int i = a; i >= 1; i--) {        // row loop
        for (int j = i; j <= a; j++) {    // print from i to a
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
