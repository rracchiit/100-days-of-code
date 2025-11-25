//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>
#include <limits.h>

int maximumSubarray(int* arr, int arrSize, int k) {
    if (k > arrSize) {
        printf("Error! k is greater than size of array!\n");
        return INT_MIN;
    }
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    int maxSum = window_sum;
    for (int i = k; i < arrSize; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];
        if (window_sum > maxSum) {
            maxSum = window_sum;
        }
    }
    return maxSum;

}

int main() {
    int arrSize;
    printf("Enter number of elements: ");
    scanf("%d",&arrSize);
    int arr[arrSize];
    printf("Enter elements: ");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter size of subarrays: ");
    scanf("%d",&k);
    printf("%d\n", maximumSubarray(arr, arrSize, k));

    return 0;
}