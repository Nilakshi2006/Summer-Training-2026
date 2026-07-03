// C program to check whether year is leap year or not using conditional operator
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    int days;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days = 366;
    } else {
        days = 365;
    }

    if (days > 365) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
    return 0;
}