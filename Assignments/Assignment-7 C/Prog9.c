// C program to find HCF (GCD) of two numbers.
#include<stdio.h>
int main(){
    int a, b, rem;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    int originalA = a, originalB = b;
    while(rem != 0){
        rem = a % b;
        a = b;
        b = rem;
    }
    printf("HCF of %d and %d is: %d", originalA, originalB, a);
    return 0;
}