#include<stdio.h>
    int main(){
    
    int i,j,r,c;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    
    printf("Enter number of columns : ");
    scanf("%d", &c);
    
    int matrix[r][c],sum_row=0,sum_column=0;
    
    printf("Enter elements of matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element for Row: %d and Col: %d = ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }       
    
    
    printf("\n Matrix is: \n\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("\t%d",matrix[i][j]);
            
        printf("\n\n");
    }   
    
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum_row += matrix[i][j];
        }
        printf("Sum of Row %d is : %d\n",i+1,sum_row);
        sum_row=0;
    }
    printf("\n\n");
    
    for(j=0;j<c;j++){
        for(i=0;i<r;i++){
            sum_column += matrix[i][j];
        }
        printf("Sum of Column %d is : %d\n",j+1,sum_column);
        sum_column=0;
    }
    
        
    return 0;

}
