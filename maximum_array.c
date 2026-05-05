#include <stdio.h>

int main() {
    int a[100], n, i, max;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Assume first element is maximum
    max = a[0];

    // Find maximum
    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    // Output
    printf("Maximum value is: %d", max);

    return 0;
}