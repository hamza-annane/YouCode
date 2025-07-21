#include <stdio.h>

/*
** -------------------------------------------------------------
** CHALLENGE 08: GRADE MENTION
**
** Description:
** This program takes a student's average score as input and
** displays their academic mention based on the following scale:
**
**   - Less than 10       → "Fail"
**   - From 10 to 11.99   → "Pass"
**   - From 12 to 13.99   → "Fair"
**   - From 14 to 15.99   → "Good"
**   - 16 or more         → "Very Good"
**
** The program uses if-else conditions to determine which
** category the average falls into, and then prints the result.
**
** Example:
**   Input: 13.5
**   Output: Fair
**
** -------------------------------------------------------------
*/

int     main()
{
    float average;

    printf("Enter student's average: ");
    scanf("%f",&average);

    if (average < 10.00)
        printf("Fail\n");

    else if (average >= 10.00 && average <= 11.99)
        printf("Pass\n");
    
    else if (average >= 12.00 && average <= 13.99)
        printf("Fair\n");
    
    else if (average >= 14.00 && average <= 15.99)
        printf("Good\n");
    
    else
        printf("Very Good\n");

    return (0);
}
