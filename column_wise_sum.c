#include <stdio.h>

int main()
{
    int a[100][100], n, i, j;
    int colSum;

    scanf("%d", &n);   // direct size input

    // Input values (no messages)
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Print matrix
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    // Line
    for(j = 0; j < n; j++)
    {
        printf("_____");
    }
    printf("\n");

    // Column sum
    for(j = 0; j < n; j++)
    {
        colSum = 0;
        for(i = 0; i < n; i++)
        {
            colSum += a[i][j];
        }
        printf("%3d ", colSum);
    }

    return 0;
}