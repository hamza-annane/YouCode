#include <stdio.h>

// Read an integer and print whether it’s positive, negative, or zero.

int     main()
{
    int n;
   
    printf("N: ");
    scanf("%d",&n);

    (n == 0) ? printf("zero\n") : (n > 0 ? printf("positive\n") : printf("negative\n"));

    return (0);
}