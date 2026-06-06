/* C program that accepts two item’s weight (floating points' values ) and number of
purchase (floating points' values) and calculate the average value of the items.*/
#include <stdio.h>

int main() {
    float w1, w2, n1, n2, avg;

    printf("Weight - Item1: ");
    scanf("%f", &w1);
    printf("No. of item1: ");
    scanf("%f", &n1);

    printf("Weight - Item2: ");
    scanf("%f", &w2);
    printf("No. of item2: ");
    scanf("%f", &n2);

    avg = (w1*n1 + w2*n2) / (n1 + n2);

    printf("Average Value = %f", avg);

    return 0;
}