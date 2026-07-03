// C program to subtract two matrices.
#include<stdio.h>
#define rows 2
#define cols 2
int main(){
int i,j,mat1[rows][cols],mat2[rows][cols],sub[rows][cols];
    printf("Enter the Elements of matrix1: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
     printf("Enter the Elements of matrix2: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

   for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sub[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    printf("Subtraction if two matrices is: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d",sub[i][j]);
        }
    }
    return 0;
}