#include<stdio.h>

int main()
{
    char str[100];
    int i;
    int upper = 0, lower = 0;
    int number = 0, space = 0;
    int special = 0, alphabet = 0;
    int word = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
            alphabet++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
            alphabet++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            number++;
        }
        else if(str[i] == ' ')
        {
            space++;
            word++;
        }
        else if(str[i] != '\n')
        {
            special++;
        }
    }

    printf("Uppercase Letters = %d\n", upper);
    printf("Lowercase Letters = %d\n", lower);
    printf("Numbers = %d\n", number);
    printf("Spaces = %d\n", space);
    printf("Special Characters = %d\n", special);
    printf("Words = %d\n", word);
    printf("Alphabets = %d\n", alphabet);

    return 0;
}