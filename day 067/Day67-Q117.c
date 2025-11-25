//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b ) {
    return *(int*)a - *(int*)b;
}

int* mergeSort(int* arr1, int arr1Size, int* arr2, int arr2Size, int *returnSize) {
    *returnSize = arr1Size + arr2Size;
    int* ans = (int*)malloc((*returnSize) * sizeof(int));
    memcpy(ans, arr1, arr1Size * sizeof(int));
    memcpy(ans + arr1Size, arr2, arr2Size * sizeof(int));
    qsort(ans, *returnSize, sizeof(int), compare);
    return ans;
}

int main() {
    int m, n;
    printf("Enter the number of elements of array 1: ");
    scanf("%d", &m);
    printf("Enter the number of elements of array 2: ");
    scanf("%d", &n);
    int arr1[m];
    int arr2[m];
    printf("Enter elements of array 1: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of array 2: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    int returnSize;
    int* ans = mergeSort(arr1, m, arr2, n, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }

    free(ans);
    return 0;
}