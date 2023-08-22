#include<stdio.h>
    int main(){
    
    int i,j,r,c;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    
    printf("Enter number of columns : ");
    scanf("%d", &c);
    
    int matrix_1[r][c],matrix_2[r][c],subtract[r][c];
    
    printf("Enter elements of 1st matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element for Row: %d and Col: %d = ",i+1,j+1);
            scanf("%d", &matrix_1[i][j]);
        }
    }
    
    printf("Enter elements of 2nd matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element for Row: %d and Col: %d = ",i+1,j+1);
            scanf("%d", &matrix_2[i][j]);
        }
    }
    
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            subtract[i][j] = matrix_1[i][j] - matrix_2[i][j];
    }
    printf("\n Subtract of 2 matrices : \n\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("\t%d",subtract[i][j]);
            
        printf("\n\n");
    }   
        
    return 0;

}
