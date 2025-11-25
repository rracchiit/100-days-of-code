//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>
#include <stdlib.h>

int *productOthers(int* nums, int numsSize, int *returnSize) {
    *returnSize = numsSize;
    int *ans = (int*) malloc(sizeof(int) * (*returnSize));

    ans[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;
    for (int i = numsSize - 1; i >= 0 ; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }
    return ans;
}

int main() {
    int numsSize;
    printf("Enter size of array: ");
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("Enter %d elements: ", numsSize);
    for (int i = 0; i < numsSize; i++) {\
        scanf("%d", &nums[i]);
    }

    int returnSize;
    int *ans = productOthers(nums, numsSize, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        if (i == 0) {
            printf("[%d,", ans[i]);
        } else if (i == returnSize - 1) {
            printf(" %d]", ans[i]);
        } else {
            printf(" %d,", ans[i]);
        }
    }
    free(ans);

    return 0;
}
