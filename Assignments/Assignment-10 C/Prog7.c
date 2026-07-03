//C program to put even and odd elements of array in two separate array.
#include <stdio.h>

int main() {
    int arr[100], even[100], odd[100], n, i, e=0, o=0;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i]%2 == 0) {
            even[e++] = arr[i];
        } else {
            odd[o++] = arr[i];
        }
    }

    printf("Even elements: ");
    for(i=0; i<e; i++) printf("%d ", even[i]);
    printf("\nOdd elements: ");
    for(i=0; i<o; i++) printf("%d ", odd[i]);
    return 0;
}