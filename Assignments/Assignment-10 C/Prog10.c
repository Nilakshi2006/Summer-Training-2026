// C program to sort even and odd elements of array separately
#include <stdio.h>

void sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[100], even[100], odd[100], n, i, e=0, o=0;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i]%2 == 0) even[e++] = arr[i];
        else odd[o++] = arr[i];
    }

    sort(even, e);
    sort(odd, o);

    printf("Even (sorted): ");
    for(i=0; i<e; i++) printf("%d ", even[i]);
    printf("\nOdd (sorted): ");
    for(i=0; i<o; i++) printf("%d ", odd[i]);
    return 0;
}