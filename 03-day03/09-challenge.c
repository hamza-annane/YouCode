#include <stdio.h>

int main(void)
{
    int nombre;
    int compteur = 0;

    
    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

   
    if (nombre <= 0)
    {
        printf("Erreur : le nombre doit être positif.\n");
        return 1;
    }

    
    while (nombre != 0)
    {
        nombre = nombre / 10;
        compteur++;
    }

    
    printf("Nombre de chiffres = %d\n", compteur);

    return 0;
}
