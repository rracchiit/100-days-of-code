// Program to find the 1's complement of a binary number
#include <stdio.h>

int main() {
    char binary[100];   // store binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Traverse the string and flip bits
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary digit: %c\n", binary[i]);
            return 1; // exit if input is not binary
        }
    }

    printf("1's complement is: %s\n", binary);
    return 0;
}
