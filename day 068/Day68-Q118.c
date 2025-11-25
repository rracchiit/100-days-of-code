//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>

int missingElement(int nums[], int numsSize) {
    int freq[numsSize + 1];
    for (int i = 0; i < numsSize + 1; i++) {
        freq[i] = 0;
    }
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i]]++;
    }
    for (int i = 0; i <= numsSize ; i++) {
        if (freq[i] == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numsSize;
    printf("Enter size of array: ");
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("Enter elements of array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int ans = missingElement(nums, numsSize);
    if (ans == -1) {
        printf("No such element\n");
    }else {
        printf("%d\n", ans);
    }
    return 0;
}