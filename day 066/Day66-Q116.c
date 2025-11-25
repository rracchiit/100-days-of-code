//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/

#include <stdio.h>
#include <stdlib.h>

int* two_sum(int* nums, int numsSize, int* returnSize, int target) {
    *returnSize = 2;
    int* ans = (int*)malloc((*returnSize) * sizeof(int));
    ans[0] = -1;
    ans[1] = -1;
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            if (complement == nums[j]) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return ans;

}

int main() {
    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int target;
    printf("Enter the target value: ");
    scanf("%d", &target);
    int returnSize;
    int* ans = two_sum(nums, numsSize, &returnSize , target);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }
    free(ans);
    return 0;
}