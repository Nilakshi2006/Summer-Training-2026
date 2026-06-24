#include<stdio.h>
int main(){
int *ptr=(int*)calloc(5,4);      //calloc(5,4)- 5 block with size of 4
//allocate continous memory
int i;
for(i=0;i<5;i++){
     ptr[i]=i+10;
}
for(i=0;i<5;i++){
   printf("%d ",ptr[i]);  
}
free(ptr);   //free() is used to deallocate memory
return 0;
}