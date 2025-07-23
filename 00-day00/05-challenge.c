#include <stdio.h>
/*
    Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz
*/

int main() {
    float Celsius;

    printf("Entrer la temperature en Celsius: ");
    scanf("%f", &Celsius);

    (Celsius < 0) ? printf("Solide\n") : (Celsius < 100) ? printf("Liquide\n") : printf("Gaz\n");

    return (0);
}
