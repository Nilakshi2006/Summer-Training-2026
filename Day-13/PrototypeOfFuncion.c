// #include<Stdio.h>
// int main(){
// fun();
// return 0;
// }
// void fun(){
//     printf("Hello World");
// }
//in c++ u have to declare the function before calling it, otherwise it will give an error. In C, you can define the function after the main function as long as you declare it before calling it.
//In C, you can declare the function before calling it, and then define it after the main function. 


// #include<Stdio.h>
// void fun(int a);
// int main(){
//     fun(67);
//     return 0;
// }
// void fun(int a){
//     printf("Hello World");
// }


// #include<stdio.h>
// void fun(int a);
// int main(){
//     fun(67);
//     return 0;
// }
// void fun(int x){    
//      //can chnage the name of the parameter in the definition, it does not have to be the same as the name of the parameter in the declaration.
//     printf("Hello World");
// }



// #include<stdio.h>
// void fun(int a,int b);
// int main(){
//     int a=10,b=20;
//     printf("%d %d\n",a,b);
//     fun(a,b);
//     printf("%d %d\n",a,b);
//     return 0;
// }
// void fun(int a,int b){
//     a=40;
//     b=50;
//     return a;
// }
//retrun type of the function is void, so it does not return any value. The return statement is used to exit the function and return control to the calling function. In this case, the return statement is not necessary, as the function does not return any value.
//output: 10 20
//        10 20




// #include<stdio.h>
// int fun(int a,int b);
// int main(){
//     int a=10,b=20;
//     printf("%d %d\n",a,b);
//     fun(a,b);
//     printf("%d %d\n",a,b);
//     return 0;
// }
// int fun(int a,int b){
//     a=40;
//     b=50;
//     return a;
// }


// #include<stdio.h>
// int fun(int a,int b);
// int main(){
//     int a=10,b=20;
//     printf("%d\n",a);
//     fun(a,b);
//     printf("%d\n",a);
//     return 0;
// }
// int fun(int a,int b){

//     return a++;
// }


// #include<stdio.h>
// void fun(int a);
// int main(){
//     int a=10;
//     printf("%d\n",a);
//     fun(&a);
//     printf("%d\n",a);
//     return 0;
// }
// void fun(int a){
// a=100;
// }
//in above code the result of function is not stored in result so it doesnot print the value of a after calling the function. To store the result of the function, we can use pointers. We can pass the address of the variable to the function and then modify the value of the variable using the pointer.

//call by address using pointer
// #include<stdio.h>
// void fun(int *a);
// int main(){
//     int a=10;
//     printf("%d\n",a);
//     fun(&a);
//     printf("%d\n",a);
//     return 0;
// }
// void fun(int *a){
//     *a=100;
// }
//pointer go to another block and access the value present at that address



//call by value and swapping of numbers
// #include<stdio.h>
// void fun(int *a,int *b);
// int main(){
//     int a=10 ,b=20;
//     printf("%d %d\n",a,b);
//     fun(&a,&b);
//     printf("%d %d\n",a,b);
//     return 0;
// }
// void fun(int *a,int *b){
//     int temp=*a;
//     *a=*b;           
//     *b=temp;
// }



// #include<stdio.h>
// void fun(int arr[]);
// int main(){
//     int arr[]={10,20,30,40,50};
//     fun(arr);   //it gives the address of arr.arr is internally an constant pointer.
//     printf("%d %d",arr[0],arr[1]);
//     return 0;
// }
// void fun(int arr[]){   //int *arr
//     arr[0]=100;   //*(arr+0)=100
// }
//when passing value thorugh arr/pointer it passes



#include<stdio.h>
void fun(int *a,int *b);
int main(){
   
    return 0;
}
void fun(int *a,int *b){
   
}