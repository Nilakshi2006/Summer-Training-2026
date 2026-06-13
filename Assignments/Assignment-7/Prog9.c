// C program to find HCF (GCD) of two numbers.
#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while(a != b){
        if(a > b) a -= b;
        else b -= a;
    }

    printf("HCF (GCD) = %d\n", a);
    return 0;
}