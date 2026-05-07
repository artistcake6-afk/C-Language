#include<stdio.h>
int main()
{

    //count the string length in number
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("Total characters in the string = %d", count - 1); // -1 to exclude the newline character added by fgets
    return 0;
    
}