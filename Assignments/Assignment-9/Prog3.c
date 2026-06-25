// C program to find sum of all array elements.
#include<stdio.h>
int main(){
    int arr[100],n,i;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
scanf("%d",&arr[i]);
    }

         int sum=0;
    for(i=0;i<n;i++){
     sum =sum+arr[i];
    }
    printf("Sum is: %d",sum);
    return 0;
}