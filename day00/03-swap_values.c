#include <stdio.h>

int     main()
{
    int n1 , n2 ;
    int temp;

    printf("Enter N1: ");
    scanf("%d",&n1);

    printf("Enter N2: ");
    scanf("%d",&n2);

    printf("===== Before Swap =====\n\n");

    printf(" n1 = %d\n n2 = %d\n\n",n1,n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("===== After Swap =====\n\n");

    printf(" n1 = %d\n n2 = %d\n",n1,n2);

    printf("\n");

    return (0);
}