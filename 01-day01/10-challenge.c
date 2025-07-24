#include <stdio.h>

int main() {
    int jour, mois, annee;
    int jours_max;

    printf("Entrez une date (JJ/MM/AAAA) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    // Vérification du mois
    if (mois < 1 || mois > 12) {
        printf("Mois invalide.\n");
        return 0;
    }

    // Déterminer le nombre de jours max selon le mois
    switch (mois) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            jours_max = 31;
            break;
        case 4: case 6: case 9: case 11:
            jours_max = 30;
            break;
        case 2: // Février (année bissextile ou non)
            if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))
                jours_max = 29;
            else
                jours_max = 28;
            break;
    }

    // Vérification du jour
    if (jour < 1 || jour > jours_max) {
        printf("Jour invalide pour ce mois.\n");
        return 0;
    }

    // Affichage du mois avec switch
    printf("%d-", jour);
    switch (mois) {
        case 1:  printf("Janvier");   break;
        case 2:  printf("Février");   break;
        case 3:  printf("Mars");      break;
        case 4:  printf("Avril");     break;
        case 5:  printf("Mai");       break;
        case 6:  printf("Juin");      break;
        case 7:  printf("Juillet");   break;
        case 8:  printf("Août");      break;
        case 9:  printf("Septembre"); break;
        case 10: printf("Octobre");   break;
        case 11: printf("Novembre");  break;
        case 12: printf("Décembre");  break;
    }
    printf("-%d\n", annee);

    return 0;
}
