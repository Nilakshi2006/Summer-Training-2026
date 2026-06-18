//Pointer to constant
#include<stdio.h>

int main(){
    int x = 20;
    int y = 30;
    const int *p1 = &x;
    p1 = &y; // can change address
    // *p1 = 40; // cannot change value
    printf("%d",*p1);
    return 0;
}