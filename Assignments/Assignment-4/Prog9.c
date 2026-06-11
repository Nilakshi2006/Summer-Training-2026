/*  C program to input electricity unit charges and calculate total electricity bill according to the
given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */

#include<stdio.h>

int main(){
    int units;
    float bill = 0;
    printf("Enter Electricity Units: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Add 20% surcharge
    bill *= 1.20;

printf("Total Electricity bill is Rs. %.2f\n", bill);
    return 0;
}