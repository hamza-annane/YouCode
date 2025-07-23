#include <stdio.h>

/*
    Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :

m/s = km/h * 0.27778
*/

int     main()
{
    float Km_h;
    float M_s;

    printf("Entrer la vitesse en kilometres par heure (km/h): ");
    scanf(" %f",&Km_h);

    M_s = Km_h * 0.27778;

    printf("La vitesse en metres par seconde (m/s) = %.2f m/s\n",M_s);

    return (0);
}