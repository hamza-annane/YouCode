#include <stdio.h>
#include <math.h>   // Pour pow()

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    float r;        // rayon de la sphère
    float volume;   // volume de la sphère

    // Lire le rayon depuis l'utilisateur
    printf("Entrez le rayon de la sphere : ");
    scanf("%f", &r);

    // Calcul du volume
    volume = (4.0 / 3.0) * M_PI * pow(r, 3);

    // Afficher le résultat
    printf("Le volume de la sphere est : %.2f\n", volume);

    return 0;
}
