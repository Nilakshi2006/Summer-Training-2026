// C program to calculate product of digits of a number

#include<stdio.h>

int main(){
    int n, mul=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0){
        mul *= n % 10;
        n /= 10;
    }

    printf("Multiplication of digits: %d\n", mul);
    return 0;
}