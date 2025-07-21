#include <stdio.h>

// Check whether a character is an uppercase letter using ASCII values (if-else).

int     main()
{
    char C;

    printf("Enter a character: ");
    scanf("%c",&C);

    if (C >= 65 && C <= 90)
    {
        printf(" the character %c is an UpperCase letter\n",C);
    }
    else
        printf(" the character %c is NOT an UpperCase letter\n",C);

    return (0);
}