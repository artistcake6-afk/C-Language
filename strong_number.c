#include <stdio.h>

int main()
{
    int num, original, remainder, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0)
    {
        remainder = num % 10;

        // factorial find karo
        fact = 1;
        for(i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == original)
        printf("Strong Number che");
    else
        printf("Strong Number nathi");

    return 0;
}