// C program to check whether a number is even or odd using switch case.

#include<stdio.h>

int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    switch(num % 2) {
        case 0:
            printf("Even Number\n");
            break;
        case 1:
            printf("Odd Number\n");
            break;
    }
    return 0;
}