#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        sum = sum+((2*i)+1);
    }
    
    printf("Sum of %d terms : %d ",n,sum);
    
    return 0;
}
