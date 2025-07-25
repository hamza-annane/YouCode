#include <stdio.h>

int     main()
{
    int n;

    printf("entrer un nomber: ");
    scanf(" %d",&n);

    for (int i = 1 ; i <= n ; i++)
    {
        printf(" %d ", i * 2);
    }
    printf("\n");

    return 0;
}