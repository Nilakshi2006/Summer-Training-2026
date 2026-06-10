// Write a C program to check whether character is an alphabet or not using conditional operator.
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 
        printf("%c is an alphabet\n", c) : 
        printf("%c is not an alphabet\n", c);

    return 0;
}