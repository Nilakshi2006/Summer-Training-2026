//C program to find reverse of an array.
#include <stdio.h>

int main() {
    int arr[100], n, i;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for(i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}