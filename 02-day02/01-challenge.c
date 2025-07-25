#include <stdio.h>

int main() {
    double revenu;
    int score_credit;
    int duree;

    // Saisie des données
    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%lf", &revenu);

    printf("Entrez votre score de credit (sur 1000) : ");
    scanf("%d", &score_credit);

    printf("Entrez la duree du pret (en annees) : ");
    scanf("%d", &duree);

    // Conditions d'éligibilité
    if (revenu >= 30000 && score_credit >= 700 && duree <= 10) {
        printf("Votre pret est ELIGIBLE.\n");
    } 
    else if (revenu >= 30000 && score_credit >= 650 && duree <= 15) {
        printf("Votre pret est ELIGIBLE AVEC CONDITIONS.\n");
    } 
    else {
        printf("Votre pret est NON ELIGIBLE.\n");
    }

    return 0;
}
