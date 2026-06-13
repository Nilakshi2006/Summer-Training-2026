// C program to enter a number and print it in words.
#include <stdio.h>

void printWords(int n) {
    char *ones[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
                    "Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen",
                    "Sixteen","Seventeen","Eighteen","Nineteen"};

    char *tens[] = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if (n == 0) {
        printf("Zero");
        return;
    }

    if (n >= 100) {
        printf("%s Hundred ", ones[n / 100]);
        n = n % 100;
    }

    if (n >= 20) {
        printf("%s ", tens[n / 10]);
        n = n % 10;
    }

    if (n > 0 && n < 20) {
        printf("%s", ones[n]);
    }
}

int main() {
    int num;
    printf("Enter a number (0-999): ");
    scanf("%d", &num);

    if (num < 0 || num > 999) {
        printf("Number out of range!");
    } else {
        printWords(num);
    }

    return 0;
}