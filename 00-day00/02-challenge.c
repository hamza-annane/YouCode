#include <stdio.h>

int     main()
{

    float C , K ;

    printf("entrer la temperature en Celsius: ");
    scanf(" %f",&C);

    K = C + 273.15;

    printf("la temperature en Kelvin: %.2f\n",K);

    return (0);
}