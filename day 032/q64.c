//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}, digit, maxCount = 0, mostFrequent = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num; // handle negative numbers
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequent = i;
        }
    }

    printf("The digit that occurs most is %d (appears %d times)\n", mostFrequent, maxCount);

    return 0;
}
