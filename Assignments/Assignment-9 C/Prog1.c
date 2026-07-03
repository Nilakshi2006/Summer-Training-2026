// C program to read and print the elemnt of array
#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the size of Array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are: ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
       printf("\n");
    return 0;
}