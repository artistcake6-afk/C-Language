#include<stdio.h>

int main()
{
    int a[100][100], n, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Enter value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Output in box format
    printf("\nMatrix in box format:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("| %d ", a[i][j]);   // box style
        }
        printf("|\n");  // end of row
    }

    return 0;
}