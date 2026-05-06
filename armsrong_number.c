#include<stdio.h>
int main()
{
    int n, sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}