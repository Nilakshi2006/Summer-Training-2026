
// Print even number from 2 to 20 
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=2;i<=20;i=i+2){
// printf("%d ",i);
//     }
// }


//Print first 10 fibbonacci series using for loop
// #include<stdio.h>
// int main(){
//     int a=0,b=1,c,i;
//     printf("%d %d ",a,b);

//     for(i=2;i<10;i++){
//         c=a+b;
//         printf("%d ",c);
//           a=b;
//           b=c;
//     }
// }


//print first 10 fibonacci series using goto statement
// #include <stdio.h>
// int main()
// {
//     int a=0,b=1,c,i=2;
//     printf("%d %d ",a,b);
//     loop:
//     if(i<10)
//     {
//         c=a+b;
//         printf("%d ",c);
//         a=b;
//         b=c;
//         i++;
//         goto loop;
//     }
//     return 0;
// }


//Print the pattern of star
//       *
//      **
//     ***
//    ****
//   *****
//  ****** 

// #include<stdio.h>
// int main(){
//     int n=5;
//     int i,j;
//     for(i=0;i<=5;i++){
//         //space
//         for(j=0;j<=n-i;j++){
// printf(" ");
//         }
//         //star
//         for(j=0;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//print the start pattern
// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 

// #include<stdio.h>

// int main(){
//     int n=5;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//             if(i==0 || i==n || j==0 || j==n){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//print pattern like
// * * * * * 
// * *   * * 
// *   *   * 
// * *   * * 
// * * * * * 

// #include<stdio.h>

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n || i==j || i+j==n+1){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//print pattern like this
//         *         
//       *   *       
//     *       *     
//   *           *   
// * * * * * * * * * 

// #include<stdio.h>
// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= 2*n-1; j++){
//             if(i == n || i + j == n + 1 || j == n + i - 1){
//                 printf("* ");
//             } else {
//                 printf("  ");
//             }
//         }
//         printf("\n");  
//     }
//     return 0;
// }


//print pattern like
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<stdio.h>
int main(){
    int n = 5;
 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        for(int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  
    
    }
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        for(int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}