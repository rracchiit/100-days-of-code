//Delete an element from an array.
#include <stdio.h>

int main() {
    int n, pos, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("Array after deletion: ");
        for (i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
