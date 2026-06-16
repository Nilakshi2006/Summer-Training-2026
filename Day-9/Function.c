// //C program to find HCF using function
// #include<stdio.h>

// // Function to calculate HCF
// int HCF(int x, int y){
//     int rem;
//     while(rem != 0){
//         rem = x % y;
//         x = y;
//         y = rem;
//     }
//     return x;
// }

// int main(){
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);

//     printf("HCF of %d and %d is: %d", a, b, HCF(a,b));
//     return 0;
// }



//  function in the main
// #include<stdio.h>
// int HCF(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);

//     printf("HCF of %d and %d is: %d", a, b, HCF(a,b));
//     return 0;
// }
//     int HCF(int x, int y){
//         int rem;
//         while(rem != 0){
//             rem = x % y;
//             x = y;
//             y = rem;
//         }
//         return x;
//     }


//call by value
#include<stdio.h>
int HCF(int *, int *);
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("HCF of %d and %d is: %d", a, b, HCF(a,b));
    return 0;
}
    int HCF(int *a, int *b){
        int rem;
        while(*a%*b!= 0){
            rem = *a % *b;
            *a = *b;
           * b = rem;
        }
        return *a;
    }