//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool valid_anagram(char* s, char* t) {
    int s_len = strlen(s);
    int t_len = strlen(t);
    if (s_len != t_len) {
        return false;
    }
    char alphabet[26] = {0};
    for (int i = 0; i < s_len; i++) {
        alphabet[s[i] - 'a']++;
        alphabet[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    char s[100];
    printf("Enter s: ");
    scanf("%s", s);
    char t[100];
    printf("Enter t: ");
    scanf("%s", t);
    bool valid = valid_anagram(s, t);
    if (valid) {
        printf("Anagram\n");
    } else {
        printf("Not anagram\n");
    }
    return 0;
}
