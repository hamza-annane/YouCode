#include <stdio.h>

/*
** CHALLENGE 05: YEAR CONVERSION
**
** Description:
** Create a menu-driven program that allows the user to convert a given
** number of years into one of the following units:
**
**   - Months
**   - Days
**   - Hours
**   - Minutes
**   - Seconds
**
** Assumptions:
**   - 1 year = 365 days
**   - 1 month = 30 days
**   - No leap year consideration
**
** Objective:
**   - Prompt the user to enter a number of years.
**   - Display a menu of conversion options.
**   - Based on the user's choice, perform the appropriate conversion
**     and display the result.
*/

#include <stdio.h>

int main()
{
    int years;
    int option;

    printf("Enter a number of years: ");
    scanf("%d", &years);

    printf("\nChoose a conversion option:\n");
    printf("1. Convert to Months\n");
    printf("2. Convert to Days\n");
    printf("3. Convert to Hours\n");
    printf("4. Convert to Minutes\n");
    printf("5. Convert to Seconds\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
            printf("%d years = %d months\n", years, years * 12);
            break;
        case 2:
            printf("%d years = %d days\n", years, years * 365);
            break;
        case 3:
            printf("%d years = %d hours\n", years, years * 365 * 24);
            break;
        case 4:
            printf("%d years = %d minutes\n", years, years * 365 * 24 * 60);
            break;
        case 5:
            printf("%d years = %d seconds\n", years, years * 365 * 24 * 60 * 60);
            break;
        default:
            printf("Invalid choice. Please run the program again and choose between 1 and 5.\n");
            break;
    }

    return 0;
}
