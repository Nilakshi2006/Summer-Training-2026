// C program to check whether a number is even or odd using conditional operator
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
    return 0;
}