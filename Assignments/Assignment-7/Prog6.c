// C program to find power of a number using for loop.
#include<stdio.h>
#include<math.h>

int main(){
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    double result = pow(base, exponent);
    printf("%d^%d = %.0f\n", base, exponent, result);
    return 0;
}