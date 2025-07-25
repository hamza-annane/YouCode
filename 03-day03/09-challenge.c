#include <stdio.h>

int main(void)
{
    int nombre;
    int sum = 0;

    printf("Entrer un nombre: ");
    scanf("%d", &nombre);

    if (nombre < 0)
        nombre = -nombre;

    while (nombre != 0)
    {
        sum = sum + (nombre % 10);
        nombre = nombre / 10;
    }

    printf("La somme des chiffres est: %d\n", sum);

    return 0;
}
