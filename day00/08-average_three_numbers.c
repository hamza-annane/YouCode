#include <stdio.h>

int     main()
{
    float n1 , n2 , n3;
    float average;

    printf("Entre 3 Numbers: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    average = ( n1 + n2 + n3) / 3;

    printf("average = %.2f\n",average);

    return (0);
}