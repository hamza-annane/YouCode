#include <stdio.h>

int main()
{
    float longueur, largeur, surface;

    // Lire la longueur et la largeur
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    // Calcul de la surface
    surface = longueur * largeur;

    // Afficher le résultat
    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}
