//Rotate an array to the right by k positions
#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    k = k % n; 

    
    int rotated[n];

    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}
