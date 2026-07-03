//Program to find sum of main diagonal elements of a matrix.
#include<stdio.h>
#define size 3

int main(){
    int i, j, mat[size][size], sum = 0;

    printf("Enter the Elements of the matrix (%dx%d): ", size, size);
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    // Sum of main diagonal (where i == j)
    for(i=0; i<size; i++){
        sum += mat[i][i];
    }

    printf("Sum of main diagonal elements: %d", sum);
    return 0;
}