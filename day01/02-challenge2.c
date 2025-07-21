#include <stdio.h>

// Write a C program that checks if a character entered by the user is a vowel using switch case.

int     main()
{
    char character;

    printf("enter a Char: ");
    scanf("%c",&character);

    switch (character)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'u':
        case 'o':
        case 'A':
        case 'E':
        case 'I':
        case 'U':
        case 'O':
            printf("the char: %c is a vowel\n",character);
            break;
        default :
            printf("the char: %c is Not a vowel\n",character);
    }

    return (0);
}