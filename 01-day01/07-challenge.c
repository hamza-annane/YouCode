#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractere : ");
    scanf("%c", &caractere);

    if ((int)caractere >= 65 && (int)caractere <= 90) {
        printf("C'est un alphabet majuscule.\n");
    } else {
        printf("Ce n'est pas un alphabet majuscule.\n");
    }

    return 0;
}
