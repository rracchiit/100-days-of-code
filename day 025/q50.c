/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*           */


#include <stdio.h>

int main() {
    int pattern[] = {1, 2, 3, 4, 5, 3};  
    int size = sizeof(pattern) / sizeof(pattern[0]);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < pattern[i]; j++) {
            printf("*\n");  
        }
        printf("\n"); 
    }

    return 0;
}
