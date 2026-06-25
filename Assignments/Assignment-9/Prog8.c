// C program to copy all elements from an array to another array.
#include<stdio.h>
int main(){
    int arr[100],n,i;
int arr1[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);

printf("Enter the elements of Array: ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
    arr1[i]=arr[i];
}
printf("copied elemnts are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
return 0;
}