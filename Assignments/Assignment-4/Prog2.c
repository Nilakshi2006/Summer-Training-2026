// C program to check whether a number is even or odd.
#include<stdio.h>
int main(){
    int n;

    printf("Enter the Number : ");
    scanf("%d",&n);

    if(n%2==0){
        printf("Number is Even");
    }else{
        printf("Number is Odd");
    }
}