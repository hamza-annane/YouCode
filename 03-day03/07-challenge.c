#include <stdio.h>

int main()
{
    int digits;
    int rev = 0;

    printf("Enter a number: ");
    scanf("%d", &digits);

    while (digits > 0)
    {
        rev = rev * 10 + digits % 10;
        digits = digits / 10;
    }

    printf("Reversed number = %d\n", rev);
    return 0;
}
