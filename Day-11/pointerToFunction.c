//Pointer to function
#include<stdio.h>

int sum(int a,int b){
    return a+b;
}

int main(){
    int (*fp)(int ,int) = sum;
    printf("%d",fp(3,5));
    return 0;
}