#include <stdio.h>
#include <math.h>   // Pour utiliser M_PI (valeur de π)

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
