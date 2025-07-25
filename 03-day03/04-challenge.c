#include <stdio.h>

int     main()
{
    int n;

    printf("Entrer un nombre: ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++)
    {
        printf(" %d ",i * 2 - 1);
    }
    
    printf("\n");

    return 0;
}