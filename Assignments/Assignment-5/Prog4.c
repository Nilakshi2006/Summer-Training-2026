// C program to find maximum between two numbers using switch case.#include<stdio.h>
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers(separated by commas): ");
    scanf("%d,%d", &num1, &num2);

    switch(num1 > num2) {
        case 1:
            printf("Number 1 is maximum: %d\n", num1);
            break;
        case 0:
            switch(num1 < num2) {
                case 1:
                    printf("Number 2 is maximum: %d\n", num2);
                    break;
                default:
                    printf("Both numbers are equal\n");
                    break;
            }
            break;
    }
    return 0;
}