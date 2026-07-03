//C program to search an element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i=0; i<n; i++) {
        if(arr[i] == key) {
            printf("%d found at position %d", key, i+1);
            found = 1;
            break;
        }
    }

    if(!found) printf("%d not found in array", key);
    return 0;
}