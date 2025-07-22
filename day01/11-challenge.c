#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Display a random day of the week using a C program.

int     main()
{
    srand(time(NULL));
    int random_day = (rand() % 7) + 1;

    switch (random_day)
{
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day number\n");
        break;
}

return (0);
}