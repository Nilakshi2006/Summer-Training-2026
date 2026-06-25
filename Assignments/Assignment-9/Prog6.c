// C program to count total number of even and odd elements in an array.
#include<stdio.h>
int main(){
    int arr[100],n,i;
int evenCount=0,oddCount=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

printf("Enter the elements of Array: ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
    if(arr[i]%2==0){
        evenCount++;
    }else{
oddCount++;
    }
}
 printf("Number of Even Element are: %d\n",evenCount);
 printf("Number of Odd Element are: %d",oddCount);
return 0;
}
