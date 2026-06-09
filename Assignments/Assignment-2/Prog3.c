// C program to find area of Equilateral Triangle
// C equivalent expression to find area of equilateral triangle - (sqrt(3) / 4) * (side * side)
#include <stdio.h>
#include <math.h>

int main() {
    float side, area;

    printf("Enter side of the equilateral triangle: ");
    scanf("%f", &side);

    area = (sqrt(3) / 4) * side * side;

    printf("Area of equilateral triangle = %.2f sq. units", area);

    return 0;
}