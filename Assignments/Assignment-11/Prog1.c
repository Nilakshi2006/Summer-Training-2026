// C program to left rotate an array.// C program to left rotate an array
#include<stdio.h>
int main(){
    int arr[100], n, i;
    printf("Enter the size of an Array: ");
    scanf("%d",&n);
    printf("Enter the elements of Array: ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    int temp = arr[0];
    for(i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

    printf("Left Rotate in an Array is: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
}