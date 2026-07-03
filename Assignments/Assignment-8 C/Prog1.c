//C program to find first and last digit of a number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    // Calculate first digit
    int firstDigit = n;
    while(firstDigit >= 10){
        firstDigit /= 10;
    }
    printf("The first digit of number is: %d\n", firstDigit);

    // Calculate last digit
    int lastDigit = n % 10;
    printf("The last digit of number is: %d\n", lastDigit);

    return 0;
}