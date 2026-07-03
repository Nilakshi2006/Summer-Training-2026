// C program to find all prime factors of a number.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime Factors of %d: ", num);
    int i = 2;
    while (num > 1) {
        if (num % i == 0) {
            printf("%d ", i);
            num /= i;
        } else {
            i++;
        }
    }
    printf("\n");
    return 0;
}