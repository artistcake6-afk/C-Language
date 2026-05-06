#include <stdio.h>

int main()
{
    int a[100], b[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    // Input in array a
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Copy a → b
    for(i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    // Print array b
    printf("Array b: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}