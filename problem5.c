#include <stdio.h>

int main()
{

    float length, breadth, area;
    printf("Enter the length of the rectangle : ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("The Area of the Rectangle with length %.2f and breadth %.2f is : %.2f\n", length, breadth, area);

    return 0;
}