//  C program to count total number of duplicate elements in an array.
#include<stdio.h>
int main(){
    int arr[100],n,i,j,count=0;

    printf("Enter the size of Array: ");
    scanf("%d",&n);

    printf("Enter the elements of Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   for (i = 0; i < n; i++) {
        int freq = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > 1 && i == 0 || (i > 0 && arr[i] != arr[i-1])) {
            count += freq - 1;
        }
    }

    printf("Total Duplicate elements: %d\n", count);
    return 0;
}