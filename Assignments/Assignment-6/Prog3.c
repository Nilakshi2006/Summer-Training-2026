// C program to print all alphabets from a to z. - using while loop
#include<stdio.h>

int main(){
    char ch = 'a';
    printf("Alphabets from a to z:\n");
    while(ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    return 0;
}