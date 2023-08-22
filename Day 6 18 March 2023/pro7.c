#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,x;
    float p,sum=1,fact=1;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Enter a number X = ");
    scanf("%d", &x);
    
    printf("1+");
    for(i=1;i<=n;i++){
        fact=1;
        p=pow(x,i);
        for(j=1;j<=i;j++){
            fact = fact*j;
        }
        sum = sum+(p/fact);
        printf("x^%d/%d! + ",i,i);
    }
    
    printf("= %f ",sum);
    
    return 0;
}
