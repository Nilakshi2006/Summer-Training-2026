// C program that convert kilometers per hour to miles per hour (1 km/h = 0.621371 mph)
#include <stdio.h>

int main()
{
    float kmph, mph;

    printf("Enter speed in kilometers per hour: ");
    scanf("%f", &kmph);

    mph = kmph * 0.621371;

    printf("Speed in miles per hour: %.2f\n", mph);

    return 0;
}