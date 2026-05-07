#include<stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count++;
        }
    }

    printf("Total Lowercase Letters = %d", count);

    return 0;
}