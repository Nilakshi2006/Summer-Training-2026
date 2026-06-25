//C program to find maximum and minimum element in an array.
#include<stdio.h>
int main(){
    int arr[100],n,i;

    printf("Enter the size of array: ");
    scanf("%d",&n);

printf("Enter the elements of Array: ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int max=0,min=arr[0];
for(i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
printf("Maximum elements is: %d\n",max);

for(i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
printf("Minimum elements is: %d",min);
return 0 ;
}