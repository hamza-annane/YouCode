#include <stdio.h>

int     main()

{
    int digit;
    int last;

    printf("Enter a Digit: ");
    scanf("%d",&digit);

    last = digit % 10 ;

    printf("the last digit of %d is %d \n",digit,last);

    return (0);
}



