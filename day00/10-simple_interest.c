#include <stdio.h>

int main()
{
    float principal, rate, interest;
    int time;

   
    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%d", &time);

   
    interest = (principal * rate * time) / 100;

    
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
