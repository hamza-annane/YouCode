#include <stdio.h>

// Write a program that asks for a number and displays whether it is even or odd.

int     main()
{
    int number;

    printf("enter a number: ");
    scanf("%d",&number);

    if ( number % 2 == 0)
    {
        printf("the number %d is Even\n",number);
    }
    else
        printf("the number %d is Odd\n",number);

    return (0);
}