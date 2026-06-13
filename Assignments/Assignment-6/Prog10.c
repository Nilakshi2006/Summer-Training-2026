// C program to count number of digits in a number#include<stdio.h>
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    int num = a;
    int cnt = 0;
    while(num > 0){
        num /= 10;
        cnt++;
    }

    printf("Digits in %d is: %d\n", a, cnt);
    return 0;
}