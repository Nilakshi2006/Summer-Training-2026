// C program to check whether a number is positive, negative or zero using switch case.#include<stdio.h>
#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    switch(num < 0) {
        case 1:
            printf("Number is Negative\n");
            break;
        case 0:
            switch(num > 0) {
                case 1:
                    printf("Number is Positive\n");
                    break;
                default:
                    printf("Number is Zero\n");
                    break;
            }
            break;
    }
    return 0;
}