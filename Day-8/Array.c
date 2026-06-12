#include<stdio.h>
int main(){
    //Declaration of 2D array
    //1
    // int arr[2][3]={{1,2,4},{1,2,3}}; 
    // //2
    // int arr[2][3]={1,2,3};
    // //3
    // int arr[2][3]={[1]=1,[1]=2,[2]=0};   
    
    

    //Finding address of arr 
    int arr[2][3]={{1,2,4},{1,2,3}};
    printf("%p\n",arr);        //100
      printf("%p\n",&arr);     //100
     printf("%p\n",arr+1);     //112
     printf("%p\n",arr[0]+1);  //104
      printf("%p\n",*(arr[0]+1));
    return 0;
}