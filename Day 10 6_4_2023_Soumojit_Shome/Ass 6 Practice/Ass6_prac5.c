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
    
    
    printf("\n The Lower Triangular Matrix is: \n\n");
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i>=j){
                printf("\t%d",matrix[i][j]);
            }
            else{
                printf("\t0");
            }
            
        }
        printf("\n\n");
        
    }
    printf("\n\n");
    
    printf("\n The Upper Triangular Matrix is: \n\n");
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i>j){
                printf("\t0");
                
            }
            else{
                printf("\t%d",matrix[i][j]);
            }
            
        }
        printf("\n\n");
        
    }
    printf("\n\n");
    
        
    return 0;

}
