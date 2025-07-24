#include <stdio.h>

int main() {
    int choix;
    int annee;
    const int jours_par_an = 365;
    const int jours_par_mois = 30;

    printf("=== Programme de Conversion d'Annee ===\n");
    printf("Entrez une annee (nombre d'annees): ");
    scanf("%d", &annee);

    do {
        printf("\n--- Menu de Conversion ---\n");
        printf("1. Convertir en Mois\n");
        printf("2. Convertir en Jours\n");
        printf("3. Convertir en Heures\n");
        printf("4. Convertir en Minutes\n");
        printf("5. Convertir en Secondes\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("%d annee(s) = %d mois (1 mois = 30 jours)\n",
                       annee, annee * (jours_par_an / jours_par_mois));
                break;
            case 2:
                printf("%d annee(s) = %d jours\n",
                       annee, annee * jours_par_an);
                break;
            case 3:
                printf("%d annee(s) = %d heures\n",
                       annee, annee * jours_par_an * 24);
                break;
            case 4:
                printf("%d annee(s) = %d minutes\n",
                       annee, annee * jours_par_an * 24 * 60);
                break;
            case 5:
                printf("%d annee(s) = %d secondes\n",
                       annee, annee * jours_par_an * 24 * 60 * 60);
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide ! Veuillez reessayer.\n");
        }
    } while (choix != 0);

    return 0;
}
