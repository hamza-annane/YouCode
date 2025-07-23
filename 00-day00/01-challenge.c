#include <stdio.h>

int     main()
{
    

    char nom[20];
    char prenom[20];
    int age;
    char sexe;
    char adresse_email[40];

    printf("Nom    : ");
    scanf(" %s",nom);
    printf("Prenom : ");
    scanf(" %s",prenom);
    printf("age    : ");
    scanf(" %d",&age);
    printf("sexe   :(M / F) ");
    scanf(" %c",&sexe);
    printf("Email  : ");
    scanf(" %s",&adresse_email);


    printf("-------- Votre Informations --------\n");

    printf("Prenom : %s\n",prenom);
    printf("nom    : %s\n",nom);
    printf("age    : %d\n",age);
    printf("sexe   : %c\n",sexe);
    printf("Email  : %s\n",adresse_email);

    return (0);
}