// C program to enter a number and print its reverse
#include<stdio.h>

int main(){
    int num, rev = 0, rem;
    printf("Enter the Number: ");
    scanf("%d", &num);

    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("Reverse of original number is: %d\n", rev);
    return 0;
}