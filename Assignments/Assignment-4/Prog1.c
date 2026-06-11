//C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
    int n;
    printf("Enter any Number : ");
    scanf("%d",&n);

    if(n<0){
        printf("Number is Negative");
    }else if(n>0){
        printf("Number is Positive");
    }else{
        printf("Number is Zero");
    }
}