// //1. C program to find max between two number using conditional operator with decision making statement
// #include <stdio.h>
// int main() {
//     int a, b, max;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     if (a > b) {
//         max = a;
//     } else {
//         max = b;
//     }
  
//     printf("The maximum number is: %d", max);
//     return 0;
// }

//or
#include <stdio.h>
int main() {
int a,b;
printf("Enter two numbers :");
scanf("%d,%d",&a,&b);
if(a>b){
    printf("%d is Maximum",a);
}else{

    printf("%d is  maximun");

}
return 0;
}