// C program to check whether a number is positive, negative, or zero using conditional operator
#include<stdio.h>
int  main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num>0){
        printf("Number is positive");
    }else if(num<0){
        printf("Number is negative");
    }else{
        printf("Number is Zero");
    }
    return 0;
}