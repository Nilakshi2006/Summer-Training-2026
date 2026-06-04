//Write a C program to convert specified days into years, weeks and days.
#include <stdio.h>

int main()
{
    int total_days, years, weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    total_days = total_days % 365;

    weeks = total_days / 7;
    days = total_days % 7;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}