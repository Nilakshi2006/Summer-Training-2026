// C program to check whether two matrices are equal or not.
#include<stdio.h>
#define rows 2
#define cols 2

int main(){
    int i, j, mat1[rows][cols], mat2[rows][cols], equal = 1;

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

    // Check equality
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(mat1[i][j] != mat2[i][j]){
                equal = 0;
                break;
            }
        }
        if(!equal) break;
    }

    if(equal){
        printf("The two matrices are equal");
    }else{
        printf("The two matrices are not equal");
    }

    return 0;
}