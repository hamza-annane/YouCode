#include <stdio.h>

// Read two integers and print their addition, subtraction, multiplication, and division results.

int     main()
{
    int n1;
    int n2;

    printf("Enter N1: ");
    scanf("%d",&n1);
    printf("Enter N2: ");
    scanf("%d",&n2);

    int addition = n1 + n2 ;
    int subtraction = n1 - n2;
    int multiplication = n1 * n2;
    int division = n1 / n2 ;

    printf(" %d + %d = %d \n",n1,n2,addition);
    printf(" %d - %d = %d \n",n1,n2,subtraction);
    printf(" %d * %d = %d \n",n1,n2,multiplication);
    printf(" %d / %d = %d \n",n1,n2,division);

    return (0);
}