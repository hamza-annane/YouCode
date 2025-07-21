#include <stdio.h>
#include <math.h>

/******************************************************
 * Program: Quadratic Equation Solver                 *
 * Description: Calculates the possible real solutions*
 *              of a quadratic equation of the form   *
 *              ax² + bx + c = 0                      *
 *                                                    *
 * Formula used:                                      *
 *      Discriminant D = b² - 4ac                     *
 *                                                    *
 *      If D > 0: Two real solutions                  *
 *          x1 = (-b + sqrt(D)) / (2a)                *
 *          x2 = (-b - sqrt(D)) / (2a)                *
 *                                                    *
 *      If D == 0: One real solution                  *
 *          x = -b / (2a)                             *
 *                                                    *
 *      If D < 0: No real solutions                   *
 *                                                    *
 ******************************************************/

int main()
{
    float a, b, c;
    float del, x, x1, x2;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    del = pow(b, 2) - (4 * a * c);

    if (del == 0)
    {
        x = -b / (2 * a);
        printf("One real solution: x = %.2f\n", x);
    }
    else if (del > 0)
    {
        x1 = (-b - sqrt(del)) / (2 * a);
        x2 = (-b + sqrt(del)) / (2 * a);
        printf("Two real solutions: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else
    {
        printf("No real solutions!\n");
    }

    return 0;
}
