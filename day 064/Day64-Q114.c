//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Enter string: ");
    scanf("%s", input);
    int len = strlen(input);

    if (len == 0) {
        printf("0\n");
        return 0;
    }

    int maxLen = 0;
    int start = 0;
    int charIndex[256];

    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    for (int end = 0; end < len; end++) {
        char currentChar = input[end];

        if (charIndex[currentChar] >= start) {
            start = charIndex[currentChar] + 1;
        }

        charIndex[currentChar] = end;

        int currentLen = end - start + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}