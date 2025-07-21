#include <stdio.h>

// Check if a number is positive, negative, or zero.

int     main()
{
    int     number;

    printf("Enter a Number: ");
    scanf("%d",&number);

    if (number > 0)
        printf("positive\n");

    else if (number < 0)
        printf("negative\n");
        
    else
        printf("zero\n");

    return (0);
}