#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Taking input from user
    printf("Enter 5 values:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the values
    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}