// C program to find sum of all odd numbers between 1 to n
#include<stdio.h>

int main(){
    int n, i = 1, sum = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    while(i <= n){
        if(i % 2 != 0){
            sum += i;
        }
        i++;
    }
    printf("Sum of odd numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}