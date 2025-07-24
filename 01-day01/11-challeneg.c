#include <stdio.h>
#include <stdlib.h>   // Pour rand() et srand()
#include <time.h>     // Pour time()

int main() {
    int jour;

    // Initialiser le générateur aléatoire
    srand(time(NULL));

    // Générer un nombre aléatoire entre 1 et 7
    jour = (rand() % 7) + 1;

    // Afficher le jour correspondant
    switch (jour) {
        case 1: printf("Lundi\n");    break;
        case 2: printf("Mardi\n");    break;
        case 3: printf("Mercredi\n"); break;
        case 4: printf("Jeudi\n");    break;
        case 5: printf("Vendredi\n"); break;
        case 6: printf("Samedi\n");   break;
        case 7: printf("Dimanche\n"); break;
    }

    return 0;
}
