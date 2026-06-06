/* a C program to input principle, time and rate (P, T, R) from user and find Simple Interest.
How to calculate simple interest in C programming.*/

#include <stdio.h>

int main() {
    float P, T, R, SI;

    printf("Enter principal: ");
    scanf("%f", &P);

    printf("Enter time: ");
    scanf("%f", &T);

    printf("Enter rate: ");
    scanf("%f", &R);

    SI = (P * T * R) / 100;

    printf("Simple Interest = %.2f", SI);

    return 0;
}