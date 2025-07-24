#include <stdio.h>

int main()
{
    char character;
    printf("Entrer un caractere: ");
    scanf(" %c", &character);

    switch (character)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c est une voyelle\n", character);
            break;
        default:
            printf("%c n'est pas une voyelle\n", character);
            break;
    }

    return 0;
}
