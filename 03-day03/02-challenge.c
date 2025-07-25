#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    long long factorial = 1;

    printf("Entrer un nombre: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
        return 1;
    }

    while (i <= n) {
        factorial = factorial * i;
        i++;
    }

    printf("La factorielle du nombre %d est %lld\n", n, factorial);
    return 0;
}
