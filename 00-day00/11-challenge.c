#include <stdio.h>

int main()
{
    int nombre;
    int d1, d2, d3, d4, inverse;

    // Lire un nombre entier à 4 chiffres
    printf("Entrez un nombre entier a 4 chiffres : ");
    scanf("%d", &nombre);

    // Extraire chaque chiffre
    d1 = nombre % 10;          // Unités
    d2 = (nombre / 10) % 10;   // Dizaines
    d3 = (nombre / 100) % 10;  // Centaines
    d4 = nombre / 1000;        // Milliers

    // Former le nombre inversé
    inverse = d1 * 1000 + d2 * 100 + d3 * 10 + d4;

    // Afficher le résultat
    printf("Le nombre inverse est : %d\n", inverse);

    return 0;
}
