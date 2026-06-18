//wild pointer
#include<stdio.h>

int main(){
    int *p; // not assigned address
    printf("%d",*p); // will print garbage value or crash
    return 0;
}