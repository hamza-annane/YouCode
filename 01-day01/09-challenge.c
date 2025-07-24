#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractere : ");
    scanf("%c", &caractere);

    if ((caractere >= 65 && caractere <= 90) || (caractere >= 97 && caractere <= 122)) {
        // C'est un alphabet
        if (caractere >= 65 && caractere <= 90) {
            printf("C'est une lettre majuscule.\n");
        } else {
            printf("C'est une lettre minuscule.\n");
        }
    } else {
        printf("Ce n'est pas un alphabet.\n");
    }

    return 0;
}
