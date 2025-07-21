#include <stdio.h>

// Convert a date from 15/09/2012 to 15-September-2012.
int main()
{
    int day, month, year;

    printf("Enter a date (dd/mm/yyyy): ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3)
    {
        printf("Invalid input format!\n");
        return 1;
    }

    // Check for valid day and month
    if (day < 1 || day > 31 || month < 1 || month > 12)
    {
        printf("Invalid date!\n");
        return 1;
    }

    printf("%d-", day);

    switch (month)
    {
        case 1:  printf("January-"); break;
        case 2:  printf("February-"); break;
        case 3:  printf("March-"); break;
        case 4:  printf("April-"); break;
        case 5:  printf("May-"); break;
        case 6:  printf("June-"); break;
        case 7:  printf("July-"); break;
        case 8:  printf("August-"); break;
        case 9:  printf("September-"); break;
        case 10: printf("October-"); break;
        case 11: printf("November-"); break;
        case 12: printf("December-"); break;
        default: printf("Invalid month-"); break;
    }

    printf("%d\n", year);
    return 0;
}
