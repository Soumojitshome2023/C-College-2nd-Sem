#include<stdio.h>
    int main(){
    
    int i,j,r,c;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    
    printf("Enter number of columns : ");
    scanf("%d", &c);
    
    int matrix[r][c],sum_main=0,sum_minor=0;
    
    printf("Enter elements of matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element for Row: %d and Col: %d = ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }   
    
    for(i=0;i<r;i++){
        sum_main += matrix[i][i];
        sum_minor += matrix[i][c-1-i];
    }
    
    printf("\n Matrix is: \n\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("\t%d",matrix[i][j]);
            
        printf("\n\n");
    }   
    
    printf("\n The sum of main diagonal is : %d \n\n",sum_main);
    printf("\n The sum of minor diagonal is : %d \n\n",sum_minor);
    
        
    return 0;

}
