#include <stdio.h>

int     main()
{
    float Yards , Km ;

    printf("la distance en KM?: ");
    scanf(" %f",&Km);

    Yards = Km * 1093.61;

    printf("la distance en Yards = %.2f \n",Yards);

    return (0);
}