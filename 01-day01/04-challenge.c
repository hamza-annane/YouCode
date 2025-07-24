#include <stdio.h>
#include <math.h>

 // Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.

int main()
{
    double a, b, c;    // Coefficients de l'équation
    double delta;      // Discriminant (b² - 4ac)
    double x1, x2;     // Les solutions

    // Saisie des coefficients
    printf("Entrez les coefficients a, b et c (a != 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Vérification si a = 0
    if (a == 0)
    {
        printf("Ce n'est pas une équation du deuxième degré.\n");
        return 0; // Fin du programme
    }

    // Calcul du discriminant
    delta = (b * b) - (4 * a * c);

    // Vérification de la valeur de delta
    if (delta > 0)
    {
        // Deux solutions réelles distinctes
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Deux solutions réelles: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    }
    else if (delta == 0)
    {
        // Une seule solution réelle double
        x1 = -b / (2 * a);
        printf("Une seule solution réelle double: x = %.2lf\n", x1);
    }
    else
    {
        // Pas de solution réelle
        printf("Pas de solution réelle (delta < 0).\n");
    }

    return 0;
}
