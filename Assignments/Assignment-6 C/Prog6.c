// C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>

int main(){
    int n, sum = 0, i = 1;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += i;
        i++;
    }
    printf("Sum of natural numbers from 1 to %d: %d\n", n, sum);
    return 0;
}