#include <stdio.h>
#include <ctype.h>

// Determine if a character is an alphabet. If yes, specify whether it's uppercase or lowercase.

int     main()
{
    char character;

    printf("Enter a character: ");
    scanf(" %c",&character);

    if(isalpha(character))
    {
        if(isupper(character))
        {
            printf("is UpperCase\n");
        }
        else
            printf("is LowerCase\n");
    }
    else
        printf("Not an alphabet!\n");

    return (0);
}