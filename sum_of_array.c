#include <stdio.h>

int main()
{
    int a[100][100], n, i, j;
    int rowSum;

    printf("Enter size of matrix (n x n): ");
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

    printf("\nRow-wise Sum (Box Format):\n");

   

    // Matrix with row sum
    for(i = 0; i < n; i++)
    {
        rowSum = 0;

        for(j = 0; j < n; j++)
        {
            printf("%3d ", a[i][j]);
            rowSum += a[i][j];
        }

        printf("| %3d \n", rowSum);

       
    }

    return 0;
}