// C program to check whether triangle is equilateral, scalene or isosceles Input: all side's Length
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of triangle(separated by commas): ");
    scanf("%d,%d,%d", &a,&b,&c);

    if (a == b && b == c) {
        printf("Equilateral triangle\n");   //All three sides are equal
    } else if ((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b)) {
        printf("Isosceles triangle\n");    //Exactly two sides are equal
    } else {
        printf("Scalene triangle\n");      // All three sides are different
    }  

    return 0;
}