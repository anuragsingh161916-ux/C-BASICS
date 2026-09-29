#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in degree Celsius : ");
    scanf("%f", &celsius);
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("%.2f degree celsius in fahrenheit is equal to :  %.2f ", celsius, fahrenheit);

    return 0;
}