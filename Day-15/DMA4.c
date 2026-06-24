// #include<stdio.h>
// int main(){
// int *ptr=(int*)malloc(20);      //make block of 20 bytes 4*5
// int i;
// ptr[0]=101;                       //*(ptr+0)=101  pointer notation
// //ptr[0] array notation
// for(i=0;i<5;i++){
//     printf("%d ",ptr[i]);      
// }
// return 0;
// }




#include<stdio.h>
int main(){
int *ptr=(int*)malloc(20);      //make block of 20 bytes 4*5
int i;
for(i=0;i<5;i++){
     ptr[i]=i+10;
}
for(i=0;i<5;i++){
   printf("%d ",ptr[i]);  
}
return 0;
}