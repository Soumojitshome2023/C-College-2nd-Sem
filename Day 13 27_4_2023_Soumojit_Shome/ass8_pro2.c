//2. Write a C Program to find the sum of two matrices using function.

#include<stdio.h>
void matrixadd(int matrix1[][10], int matrix2[][10], int matrix3[][10], int m, int n){
    int i,j,row,col;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            matrix3[i][j]= matrix1[i][j]+matrix2[i][j];
        }
    }
    
}
    
int main(){
    int matrix1[10][10], matrix2[10][10], matrix3[10][10], row, col, i, j;
    
    printf("Enter number of rows : ");
    scanf("%d",&row);
    
    printf("Enter number of columns : ");
    scanf("%d",&col);
    
   
    printf("\nEnter the elements of the 1st matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nmatrix1[%d][%d]=",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("\nEnter the elements of the 2nd matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nmatrix2[%d][%d]=",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    matrixadd(matrix1,matrix2,matrix3,row,col);
    
    printf("\nThe sum of the two matrices:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%3d",matrix3[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
