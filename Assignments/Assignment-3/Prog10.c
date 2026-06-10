// C program to demonstrate the use of logical operators by checking whether a given number lies within a specified range (e.g., between 10 and 20).
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 20) {
        printf("%d is within the range 10-20\n", num);
    } else {
        printf("%d is outside the range 10-20\n", num);
    }

    return 0;
}