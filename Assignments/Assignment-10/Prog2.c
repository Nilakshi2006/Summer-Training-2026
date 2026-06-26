//C program to print all unique elements in the array.
#include<stdio.h>
int main(){
    int arr[100],n,i,j;
    printf("Enter the size of Array: ");
    scanf("%d",&n);

    printf("Enter the elemnts in an Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    printf("Unique elements are: ");
    for(i=0;i<n;i++){

        int isUnique=1;
for(j=0;j<i;j++){
  if(arr[i]==arr[j]){
    isUnique=0;
    break;
  } 

}
if(isUnique){
       printf("%d ", arr[i]);
}
    }

return 0;
}