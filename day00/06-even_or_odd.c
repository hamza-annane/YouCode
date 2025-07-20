#include <stdio.h>

// Read an integer and print whether it’s even or odd

int     main()
{
    int n;
    int check;

    printf("Enter N: ");
    scanf("%d",&n);

    check = n % 2 == 0 ? printf("even\n") : printf("odd\n");

    return (0);
}