//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, key, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1];  

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        
        arr[pos - 1] = key;

        printf("Array after insertion: ");
        for (i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
