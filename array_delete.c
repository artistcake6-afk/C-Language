#include <stdio.h>

int main() {
    int arr[100], n, i, j, value, found = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value to delete
    printf("Enter value to delete: ");
    scanf("%d", &value);

    // Delete value (all occurrences)
    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            for(j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;        // check same index again
            found = 1;
        }
    }

    // Output result
    if(found == 1) {
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Value not found in array.");
    }

    return 0;
}