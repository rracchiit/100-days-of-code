//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>
#include <stdlib.h>

int* first_negative_subarray(int* arr, int numSize, int *returnSize, int k){
    *returnSize = numSize - k + 1;
    int *ans = (int*)malloc((*returnSize) * sizeof(int));
    for (int i = 0; i < *returnSize; i++) {
        ans[i] = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                ans[i] = arr[j];
                break;
            }
        }
    }
    return ans;

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
    int returnSize;
    int *ans = first_negative_subarray(arr, arrSize, &returnSize, k);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ",ans[i]);
    }
    free(ans);
    return 0;
}