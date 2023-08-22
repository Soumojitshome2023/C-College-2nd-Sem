#include<stdio.h>
int main(){
    int n,i,j;
    float sum=0,fact=1;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
  
    for(i=1;i<=n;i++){
        fact=1;
        for(j=1;j<=i;j++){
            fact = fact*j;
        }
        sum = sum+(1.0/fact);
        printf("1/%d! + ",i);
    }
    
    printf("= %f ",sum);
    
    return 0;
}
