// C program to calculate total average and percentage of five subjects
#include <stdio.h>

int main() {
    int a, b, c, d, e, total;
    float avg, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    avg = total / 5.0;
    percentage = avg;

    printf("Total = %d\n", total);
    printf("Average = %.0f\n", avg);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}
