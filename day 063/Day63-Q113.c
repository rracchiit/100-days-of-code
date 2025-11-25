//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>
#include <stdlib.h>

int compare (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int smallest_kth_element(int* arr, int arrSize, int k) {
    qsort(arr,arrSize,sizeof(int),compare);
    return arr[k-1];
}

int main() {
    int arrSize;
    printf("Enter size of array: ");
    scanf("%d",&arrSize);
    int arr[arrSize];
    printf("Enter array elements: ");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
    int ans = smallest_kth_element(arr, arrSize,k);
    printf("Answer: %d\n",ans);
    return 0;
}