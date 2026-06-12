// C program to find roots of a quadratic equation using switch case.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, r1, r2, real, imag;
    printf("Enter coefficients a, b, c: ");
    scanf("%f,%f,%f", &a, &b, &c);

    D = b*b - 4*a*c;

    switch(D > 0) {
        case 1:
            printf("Roots are real and distinct\n");
            r1 = (-b + sqrt(D)) / (2*a);
            r2 = (-b - sqrt(D)) / (2*a);
            printf("Roots: %.2f, %.2f\n", r1, r2);
            break;
        case 0:
            switch(D < 0) {
                case 1:
                    printf("Roots are imaginary\n");
                    real = -b / (2*a);
                    imag = sqrt(-D) / (2*a);
                    printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n", real, imag, real, imag);
                    break;
                default:
                    printf("Roots are real and equal\n");
                    r1 = -b / (2*a);
                    printf("Root: %.2f\n", r1);
                    break;
            }
            break;
    }
    return 0;
}