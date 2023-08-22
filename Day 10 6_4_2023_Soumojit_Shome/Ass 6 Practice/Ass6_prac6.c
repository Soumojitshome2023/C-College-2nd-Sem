#include<stdio.h>
    int main(){
    
    int i,j,r,c,flag=1;
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
            if(matrix[i][j]!=1 && matrix[j][i] !=0){
                flag=0;
                break;
            }              
        }        
    }
    if(flag==1)
        printf("Identity Matrix\n");
        
    else
        printf("Not an Identity Matrix\n");
    
        
    return 0;

}
