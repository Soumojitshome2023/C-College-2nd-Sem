#include<stdio.h>
    int main(){
    
    int i,j,r,c;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    
    printf("Enter number of columns : ");
    scanf("%d", &c);
    
    int matrix[r][c],num;
    
    printf("Enter elements of matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element for Row: %d and Col: %d = ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter number : ");
    scanf("%d",&num);    
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            matrix[i][j] = num*matrix[i][j];
    }
    printf("\n Matrix is: \n\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("\t%d",matrix[i][j]);
            
        printf("\n\n");
    }   
        
    return 0;

}
