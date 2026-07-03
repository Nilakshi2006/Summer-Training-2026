// C program to count total number of negative elements in an array.
#include<stdio.h>
int main(){
    int arr[100],n,i,negativeCount=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

printf("Enter the elements of Array: ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
   if(arr[i]<0){
negativeCount++;
   }
    }
    printf("Number of negative elements in anarray are: %d\n",negativeCount);
    return 0;
}

