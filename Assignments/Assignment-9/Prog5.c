//C program to find second largest element in an array.
#include<stdio.h>
int main(){
    int arr[100],n,i,sMax;

    printf("Enter the size of array: ");
    scanf("%d",&n);

printf("Enter the elements of Array: ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int max=0;
for(i=0;i<n;i++){
    if(arr[i]>max){
     sMax=max;
        max=arr[i];
    }else if(sMax<max && arr[i]!=max){
sMax=arr[i];
    }
}
printf("Second maximum element is: %d",sMax);
}