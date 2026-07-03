// C program to find sum of each row and column of a matrix
#include<stdio.h>
#define rows 3
#define cols 3

int main(){
    int i, j, mat[rows][cols];

    printf("Enter the Elements of the matrix (%dx%d): ", rows, cols);
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    // Sum of each row
    printf("Sum of each row:\n");
    for(i=0; i<rows; i++){
        int rowSum = 0;
        for(j=0; j<cols; j++){
            rowSum += mat[i][j];
        }
        printf("Row %d: %d\n", i+1, rowSum);
    }

    // Sum of each column
    printf("Sum of each column:\n");
    for(j=0; j<cols; j++){
        int colSum = 0;
        for(i=0; i<rows; i++){
            colSum += mat[i][j];
        }
        printf("Column %d: %d\n", j+1, colSum);
    }

    return 0;
}