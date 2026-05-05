#include <stdio.h>

int main() {
    int a[100], n, i, min;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Assume first element is minimum
    min = a[0];

    // Find minimum
    for(i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }

    // Output
    printf("Minimum value is: %d", min);

    return 0;
}