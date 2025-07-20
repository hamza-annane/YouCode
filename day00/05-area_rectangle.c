#include <stdio.h>

// Input length and width (floats) and print the area of the rectangle.

int     main()
{
    float area ;
    float length , width;

    printf("enter the length: ");
    scanf("%f",&length);
    printf("Enter the width: ");
    scanf("%f",&width);

    area = length * width ;

    printf("the area of the rectangle = %.2f\n",area);

    return (0);
}