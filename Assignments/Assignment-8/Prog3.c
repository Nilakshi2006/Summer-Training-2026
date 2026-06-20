//C program to swap first and last digits of a number
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, firstDigit, lastDigit, numOfDigits;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    temp = num;

    // Find the number of digits
    numOfDigits = 0;
    while (temp != 0) {
        numOfDigits++;
        temp /= 10;
    }

    // Find the first and last digits
    firstDigit = num / (int)pow(10, numOfDigits - 1);
    lastDigit = num % 10;

    // Swap the first and last digits
    num = num - (firstDigit * (int)pow(10, numOfDigits - 1)) - lastDigit;
    num = num + (lastDigit * (int)pow(10, numOfDigits - 1)) + firstDigit;

    printf("Number after swapping first and last digits: %d\n", num);

    return 0;
}