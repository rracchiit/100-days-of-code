//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int repeatElement(int nums[], int numsSize) {
    int largest = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    int freq[largest + 1];
    for (int i = 0; i <= largest; i++) {
        freq[i] = 0;
    }
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i]]++;
        if (freq[nums[i]] == 2) {
            return nums[i];
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
    int ans = repeatElement(nums, numsSize);
    printf("%d\n", ans);
    return 0;
}