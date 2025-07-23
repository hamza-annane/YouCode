/*
    Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D.
    Formule :
            Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, z1, z2;
    float distance;

    
    printf("Enter coordinates of the first point (x1 y1 z1): ");
    scanf("%f %f %f", &x1, &y1, &z1);

   
    printf("Enter coordinates of the second point (x2 y2 z2): ");
    scanf("%f %f %f", &x2, &y2, &z2);

    
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    
    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}
