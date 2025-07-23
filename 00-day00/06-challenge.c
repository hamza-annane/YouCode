#include <stdio.h>

int main()
{
    float n1, n2, n3, weighted_average;

    printf("Entrer trois nombres: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    weighted_average = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("La moyenne pondérée est: %.2f\n", weighted_average);

    return 0;
}
