// C program to multiply two matrices.
#include<stdio.h>
#define rows 2
#define cols 2

int main(){
    int i, j, k, mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    printf("Enter the Elements of matrix1: ");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the Elements of matrix2: ");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix multiplication
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            result[i][j] = 0;
            for(k=0; k<cols; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Result of matrix multiplication:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}