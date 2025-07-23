#include <stdio.h>
#include <math.h>

// Moyenne géométrique = (a * b * c)^(1/3)


int main()
{
    float n1, n2, n3;
    float Moyenne_geomtrique;

    printf("Entrer trois nombres: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    Moyenne_geomtrique = pow((n1*n2*n3), 1.0 / 3.0);

    printf("la moyenne geometrique de trois nombres = %.2f\n",Moyenne_geomtrique);

    
    return 0;
}
