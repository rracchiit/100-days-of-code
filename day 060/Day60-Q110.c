//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>
#include <stdlib.h>

int* max_subarray(int* arr, int arrSize, int* returnSize , int k) {
    if (k > arrSize) {
        return NULL;
    }
    *returnSize = arrSize - k + 1;
    int *ans = (int*) malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < *returnSize; i++) {
        int window_max = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > window_max) {
                window_max = arr[j];
            }
        }
        ans[i] = window_max;
    }


    return ans;
}

int main() {
    int arrSize;
    printf("Enter size of array: ");
    scanf("%d", &arrSize);
    int arr[arrSize];
    printf("Enter array elements: ");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter k: ");
    scanf("%d", &k);
    int returnSize;
    int* ans = max_subarray(arr, arrSize, &returnSize , k);
    if (ans == NULL) {
        printf("Error! k is greater than size of array!\n");
        return 0;
    }
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }
    free(ans);
    return 0;
}