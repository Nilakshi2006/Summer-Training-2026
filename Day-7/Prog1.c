// Decimal to Binary conversion
// #include<stdio.h>
// int main(){
//     int num,binary,rem,base;
//     printf("Enter the decimal number :");
//     scanf("%d",&num);

//    base=1;
//    binary=0;

//    while(num>0){
// rem=num%2;
// binary+=base*rem;
// num=num/2;
// base=base*10;
//    }

//   printf("Binary is :%d",binary);
//   return 0;

// }

//can also be used with bitwise operator as
#include<stdio.h>

int main(){
    int num, rem, base;
    printf("Enter the decimal number :");
    scanf("%d",&num);
    base=1;
    long long binary=0; 
    while(num>0){
        rem=num&1; 
        binary+=base*rem;
        num=num>>1;
        base=base*10;
    }
    printf("Binary is :%lld",binary); 
    return 0;
}