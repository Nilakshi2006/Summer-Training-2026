// C program to add two matrices.
#include<stdio.h>
#define rows 2
#define cols 2
int mat1[rows][cols],mat2[rows][cols],sum[rows][cols],i,j;
int main(){

    printf("Enter the elements of matrix 1: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

     printf("Enter the elements of matrix 2: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

     for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("Sum of Two matrices is: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",sum[i][j]);
        }
    }
    return 0;
}

