#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the second number : ");
    scanf("%f", &b);
    printf("Sum :  %f\n", a + b);
    printf("Difference  : %f\n", a - b);
    printf("product: %f\n ", a * b);

    // Check for division by zero before calculating quotient

    if (b != 0)
    {
        printf("Quotient : %f\n", a / b);
    }
    else
    {
        printf("Quotient :  Undefined( cannot divide by zero)\n ");
    }

    return 0;
}