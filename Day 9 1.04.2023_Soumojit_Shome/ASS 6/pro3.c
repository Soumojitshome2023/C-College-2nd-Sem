#include<stdio.h>
int main(){

    int r,c,i,j;
    
    printf("Enter rows and columns : ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    
    printf("Enter elements\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element for row %d and column %d : ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    // Displaying the matrix
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d\t",a[i][j]);
        }
        printf("\n\n");
    }
    
    // Finding transpose
    int transpose[c][r];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            transpose[j][i]=a[i][j];
        }
    }
    
    // Displaying the transpose matrix
    printf("\nTranspose of the matrix : \n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("\t%d\t",transpose[i][j]);
        }
        printf("\n\n");
    }
    
    return 0;
}
