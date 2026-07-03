// a C program to Swap two Numbers Without Using temporary variable.
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;
    //the above operations will swap the values of a and b without using a temporary variable by first adding the two numbers and then using subtraction to retrieve the original values in swapped order.
    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}