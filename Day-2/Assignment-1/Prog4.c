// C program that calculates volume of sphere (formula: V = 4/3 * π * r^3)
#include <stdio.h>

int main()
{
    float radius;
    const float PI = 3.14;
    double volume;

    printf("Enter radius of the Sphere: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("Volume of the Sphere is: %.2lf\n", volume);

    return 0;
}
