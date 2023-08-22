// 5. Write a C program to add two matrix using pointers.

#include <stdio.h>

void addMatrices(int *matrix1, int *matrix2, int *result, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(matrix1 + i * cols + j) + *(matrix2 + i * cols + j);
        }
    }
}

void displayMatrix(int *matrix, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int matrix1[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    
    int matrix2[][3] = {{9, 8, 7},
                        {6, 5, 4},
                        {3, 2, 1}};
    
    int rows = sizeof(matrix1) / sizeof(matrix1[0]);
    int cols = sizeof(matrix1[0]) / sizeof(matrix1[0][0]);
    
    int result[rows][cols];
    
    addMatrices(&matrix1[0][0], &matrix2[0][0], &result[0][0], rows, cols);
    
    printf("Matrix 1:\n");
    displayMatrix(&matrix1[0][0], rows, cols);
    
    printf("\nMatrix 2:\n");
    displayMatrix(&matrix2[0][0], rows, cols);
    
    printf("\nSum of matrices:\n");
    displayMatrix(&result[0][0], rows, cols);
    
    return 0;
}
