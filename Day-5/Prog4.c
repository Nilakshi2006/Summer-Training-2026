// C program to print the pattern 
//       *
//      **
//     ***
//    ****
//   *****
//  ****** 

#include<stdio.h>
int main(){
    int n=5;
    int i,j;
    for(i=0;i<=5;i++){
        //space
        for(j=0;j<=n-i;j++){
printf(" ");
        }
        //star
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}