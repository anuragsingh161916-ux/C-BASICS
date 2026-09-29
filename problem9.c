#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, total, average;
    printf("Enter the marks of  subject 1 : ");
    scanf("%f", &m1);
    printf("Enter the marks of  subject 2 : ");
    scanf("%f", &m2);
    printf("Enter the marks of  subject 3 : ");
    scanf("%f", &m3);
    printf("Enter the marks of  subject 4 : ");
    scanf("%f", &m4);
    printf("Enter the marks of subject 5 : ");
    scanf("%f", &m5);
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;
    printf("The total marks of 5 Subjects is : %.2f\n", total);
    printf("The Average of total marks is %.2f\n : ", average);

    return 0;
}