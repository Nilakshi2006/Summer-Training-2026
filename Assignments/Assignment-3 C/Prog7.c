// C program to enter a four digit number and print all digit
#include <stdio.h>

int main() {
    int num;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Extract and print digits
    printf("Digits: ");
    printf("%d %d %d %d\n", 
           (num / 1000), 
           (num / 100) % 10, 
           (num / 10) % 10, 
           num % 10);

    return 0;
}