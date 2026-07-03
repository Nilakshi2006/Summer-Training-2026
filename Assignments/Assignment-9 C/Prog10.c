//C program to delete an element from an array at specified position.
#include <stdio.h>

int main() {
    int arr[100], n, position, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &position);

    if(position < 1 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left
    for(i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Reduce array size

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}