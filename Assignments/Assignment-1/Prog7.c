//C program to find third angle of a triangle if two angles are given
#include <stdio.h>

int main()
{
int first_angle, second_angle, third_angle;


printf("Enter two angles (separated by comma): ");
scanf("%d,%d", &first_angle, &second_angle);

third_angle = 180 - (first_angle + second_angle);

printf("The third angle of the triangle is: %d\n", third_angle);

return 0;


}
