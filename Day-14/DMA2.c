//Assign value by pointer in DMA
#include<stdio.h>
int main(){
    int *ptr=(int *)malloc(4);
    *ptr=23;          //make value 23 of the block to whom pointer is pointing
printf("%d",*ptr);
}