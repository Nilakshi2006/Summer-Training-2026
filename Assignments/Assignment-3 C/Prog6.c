// Write a C program to swap two numbers using bitwise operator
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap using XOR
    a = a ^ b;     //a: 6, b: 3
    b = a ^ b;     //a: 6, b: 5
    a = a ^ b;     //a: 3, b: 5

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
