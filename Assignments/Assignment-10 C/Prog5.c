// C program to merge two array to third array.
#include <stdio.h>

int main() {
    int a[100], b[100], c[200], n1, n2, i, j, k;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of array 1: ");
    for(i=0; i<n1; i++) scanf("%d", &a[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of array 2: ");
    for(i=0; i<n2; i++) scanf("%d", &b[i]);

    // Merge
    for(i=0; i<n1; i++) c[i] = a[i];
    for(j=0; j<n2; j++) c[i+j] = b[j];

    printf("Merged array: ");
    for(k=0; k<n1+n2; k++) printf("%d ", c[k]);
    return 0;
}