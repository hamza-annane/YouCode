#include <stdio.h>

int main() {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre > 0) {
        printf("Positif\n");
    } else if (nombre < 0) {
        printf("Négatif\n");
    } else {
        printf("Nul\n");
    }

    return 0;
}
