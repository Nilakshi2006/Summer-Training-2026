// C program to right rotate an array.
#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the size of Array: ");
    scanf("%d",&n);

    printf("Enter the Elements of Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int temp=arr[n-1];
    for(i=n-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

      printf("Right Rotate in an Array is: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);



}