//  C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>

int main(){
    int n, i;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Natural numbers from %d to 1:\n", n);
    i = n;
    while(i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");
    return 0;
}