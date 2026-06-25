// C program to insert an element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, element, position, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &position);

    if(position < 1 || position > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for(i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}