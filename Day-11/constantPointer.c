//Constant Pointer
#include<stdio.h>

int main(){
    int x = 20;
    int y = 30;
    int *const ptr = &x; // constant pointer
    // ptr = &y; // cannot change address
    *ptr = 40; // can change value
    printf("%d",*ptr);
    return 0;
}