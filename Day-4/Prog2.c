// C program to find maximum of Three numbers using Conditional Operator
// #include<stdio.h>
// int main(){
// int a,b,c;
// printf("Enter three numbers: ");
// scanf("%d,%d,%d",&a,&b,&c);
// if(a>b && a>c)
// {
//     printf("%d is Maximum",a);
// }else if(b>a && b>c){
//     printf("%d is Maximum",b);
// }else{
//     printf("%d is Maximum",c);
// }
// return 0;
// }

//or
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three numbers :");
scanf("%d,%d,%d",&a,&b,&c);
int max=a;
if(max<b){
max=b;
}
if(max<c){
    max=c;
}
printf("%d is maximum",max);
return 0;
}