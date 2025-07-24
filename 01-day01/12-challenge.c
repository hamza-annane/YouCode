#include <stdio.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    printf("Entrez le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Entrez le deuxième instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // Convertir les instants en secondes depuis minuit pour comparer facilement
    int totalSec1 = h1 * 3600 + m1 * 60 + s1;
    int totalSec2 = h2 * 3600 + m2 * 60 + s2;

    if (totalSec1 < totalSec2) {
        printf("Le premier instant vient avant le deuxième ;\n");
    } else if (totalSec2 < totalSec1) {
        printf("Le deuxième instant vient avant le premier ;\n");
    } else {
        printf("Il s'agit du même instant.\n");
    }

    return 0;
}
