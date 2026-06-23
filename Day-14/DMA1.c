//DMA-Dynamic Memory Allocation
#include<stdio.h>
int main(){
 int *ptr =  (int*)malloc(4);   //allocate memory of 4 byte in heap(inside pointer) using malloc int is used because address is of integer type
 //malloc allocate memory and give us a pointer
 // we store the ponter in ptr
 //(int*)-scale factor

 //pointer is in stack that points the heap memory from stack
 int *ptr1=(int*)malloc(4);
 printf("%d %d\n",ptr,ptr1);     //Heap Memory
 int a,b;
 printf("%d %d\n",&a,&b);        //Stack Memory
 static int p,q;
  printf("%d %d\n",&p,&q);       //Data segment
}

//the above coding showing thaat all these three address are of diff memory 