//C program to find sum of matrix
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    printf("Enter matrix A:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    // sum
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}