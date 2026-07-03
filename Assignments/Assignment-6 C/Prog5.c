//C program to print all odd number between 1 to 100.
#include<stdio.h>
int main(){
    int num=1;
    printf("Odd Numbers between 1 to 100 are:\n ");
    while(num<=100){
        if(num%2!=0){
            printf("%d ",num);
        }
        num++;
    }
      printf("\n");
    return 0;
}