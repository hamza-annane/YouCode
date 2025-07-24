#include <stdio.h>

int main()
{
    int n1, n2;
    int sum;

    printf("Entrer deux valeurs: ");
    scanf("%d %d", &n1, &n2);

    sum = n1 + n2;

    if (n1 == n2)
    {
        sum *= 3;  // sum = sum * 3
    }

    printf("somme = %d\n", sum);

    return 0;
}
