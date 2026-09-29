#include <stdio.h>

int main()
{
    int total_seconds, hours, minutes, seconds;
    printf("Enter time in seconds : ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;

    minutes = (total_seconds % 3600) / 60;

    seconds = total_seconds % 60;

    printf("\nEquivalent Time : %d hour(s), %d minute(s), and %d second(s)\n", hours, minutes, seconds);

    return 0;
}