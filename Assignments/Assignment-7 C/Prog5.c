// C program to print all ASCII character with their values.
#include<stdio.h>

int main(){
    printf("ASCII characters and their values:\n");
    for(int i = 0; i < 128; i++){
        printf("%d: %c\n", i, i);
    }
    return 0;
}