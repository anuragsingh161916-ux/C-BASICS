#include <stdio.h>

int main()
{
    float r, pi = 3.14, area;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    area = pi * r * r;

    printf("The Area of circle with radius %f is : %.2f ", r, area);

    return 0;
}