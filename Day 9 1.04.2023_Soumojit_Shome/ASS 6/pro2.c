#include<stdio.h>
int main(){

    int m,n,i,j,p,q;
    
    printf("Enter rows and columns of A matrix : ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    
    printf("Enter elements for matrix A\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element for row %d and column %d : ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    
    
    printf("Enter rows and columns of B matrix : ");
    scanf("%d %d",&p,&q);
    int b[m][n];
    
    if(n!=p)
        printf("Multiplication is not possible");
    else{
        printf("Enter elements for matrix B\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("Enter element for row %d and column %d : ",i+1,j+1);
                scanf("%d", &b[i][j]);
            }
        }
    
    // Multiplication
        int multiply[m][n],sum,k;
        printf("The product of matrices: \n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                sum=0;
                for(k=0;k<n;k++){
                    sum = sum+a[i][k]*b[k][j];
                }
                multiply[i][j]=sum;
                printf("\t%d\t",multiply[i][j]);
            }
            printf("\n\n");
        }
    }
    
    return 0;
}
