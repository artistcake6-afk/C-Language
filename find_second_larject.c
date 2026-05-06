#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    printf("Enter size: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Initialize
    largest = second = -99999;

    for(i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}