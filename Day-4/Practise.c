#include <stdio.h>
int main() {
    //1. C program to find max between two number using conditional operator with decision making statement
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



// this can also be used to find maximum number

// int a,b;
// scanf("%d,%d",&a,&b);
// if(a>b){
//     printf("%d is Maximum",a);
// }else{

//     printf("%d is  maximun");

// }
// return 0;


//2. C program to find maximum of Three numbers using Conditional Operator
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

//this can also be done as
// int a,b,c;
// scanf("%d,%d,%d",&a,&b,&c);
// int max=a;
// if(max<b){
// max=b;
// }
// if(max<c){
//     max=c;
// }
// printf("%d is maximum",max);
// return 0;
// }



//check alphabet is consonet or vowel
char alp;
scanf("%c",&alp);
if(alp>='A' && alp<='Z')
alp = alp + 32;
switch(alp){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    print("Vowel");
    break;
    default:
    printf("Consonant");
}
return 0;
}
