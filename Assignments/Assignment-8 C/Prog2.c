//C program to find sum of first and last digit of a number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    int firstDigit=n;
    while(firstDigit>=10){
firstDigit/=10;
    }
    printf("The first digit of number is: %d\n", firstDigit);

    int lastDigit=n%10;
    printf("The first digit of number is: %d\n", lastDigit);

    int sum=firstDigit+lastDigit;
    printf("Sum of Fisrt and Last digit is: %d\n",sum);

    return 0;

}