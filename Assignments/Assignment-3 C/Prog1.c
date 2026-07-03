// C program to find maximum between two numbers using conditional operator
#include <stdio.h>
int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
  
    printf("The maximum number is: %d", max);
    return 0;
}