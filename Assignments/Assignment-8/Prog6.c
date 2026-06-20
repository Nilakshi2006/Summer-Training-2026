// C program to check whether a number is Prime number or not
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d is not prime\n", n);
            return 0;
        }
    }

    if (n > 1) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    return 0;
}