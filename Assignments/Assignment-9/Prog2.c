//C program to print all negative elements in an array.
#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elemnst of array: ");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("The negative elements in array are: ");
    for(i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }

    }
    printf("\n");
}