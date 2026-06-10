//C program to print first 20 prime numbers
#include <stdio.h>
#include <stdbool.h>

int main() {
    int count = 0;
    int n = 2;
    printf("First 20 prime numbers:");

    while (count < 20) {
        bool isPrime = true;
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", n);
            count++;
        }
        n++;
    }
    return 0;
}