//  C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter the 3 angles of triangle(separated by comma): ");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b){
        printf("Triangle is valid");
    }else{
        printf("Triangle is not valid");
    }
}