//NULL Pointer
#include<stdio.h>

int main(){
    int *p = NULL; // assigned null value
    // printf("%d",*p); // will crash or throw error
    // p = &x;
    printf("%d",*p); 
    return 0;
}