// C program to perform Scalar matrix multiplication.
#include<stdio.h>
#define rows 2
#define cols 2

int main(){
    int i, j, scalar, mat1[rows][cols], result[rows][cols];

    printf("Enter the scalar value: ");
    scanf("%d", &scalar);

    printf("Enter the Elements of the matrix: ");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    // Scalar multiplication
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            result[i][j] = scalar * mat1[i][j];
        }
    }

    printf("Resultant matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}