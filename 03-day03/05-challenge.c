#include <stdio.h>

int     main()
{
    int base;
    int exposant;
    int power = 1;
    int count = 1;

    printf("entrer base: ");
    scanf(" %d",&base);
    printf("entrer exposant: ");
    scanf(" %d",&exposant);

    while (count <= exposant)
    {
        power = power * base ;
        count = count + 1;
    }

    printf("le resultat est %d ^ %d = %d \n",base,exposant,power);

    return 0;
}