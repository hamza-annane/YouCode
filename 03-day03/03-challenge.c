#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Entrer un nombre: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("La somme des %d premiers nombres naturels = %d\n", n, sum);

    return 0;
}
