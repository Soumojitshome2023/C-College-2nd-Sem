#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    
    printf("Sum of %d terms : %d ",n,sum);
    
    return 0;
}
