// C program to count frequency of each element in an array.
#include<stdio.h>
int main() {
    int n, arr[100], i, freq[100] = {0};
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    printf("Frequency of each element:\n");
    for (i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("Element %d: %d times\n", i, freq[i]);
        }
    }
    return 0;
}