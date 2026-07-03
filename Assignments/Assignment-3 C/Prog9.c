// C program to find the absolute value of a number using conditional operator
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int absValue;
    if (num < 0) {
        absValue = -num;
    } else {
        absValue = num;
    }

    printf("Absolute value of %d is : %d\n", num, absValue);
    return 0;
}