// C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>

int main(){
    int n, i = 1;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d:\n", n);
    while(i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}
