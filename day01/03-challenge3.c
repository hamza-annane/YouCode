#include <stdio.h>

// Write a program to compute the sum of two integers. If both values are equal, return triple their sum.

int main()
{
    int n1, n2;
    int sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 != n2)
    {
        sum = n1 + n2;
    }
    else
    {
        sum = (n1 + n2) * 3;
    }

    printf("Result: %d\n", sum);

    return 0;
}
