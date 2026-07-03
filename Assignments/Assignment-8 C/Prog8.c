// C program to find sum of all prime numbers between 1 to n.
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) break;
        }
        if (j * j > i) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of Prime Numbers is: %d\n", sum);
    return 0;
}