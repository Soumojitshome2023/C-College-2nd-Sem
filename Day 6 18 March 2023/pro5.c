#include<stdio.h>
#include<math.h>

int main(){
    int n,i,sum = 1,x;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
    printf("Enter a number X = ");
    scanf("%d", &x);
    
    for(i=1;i<=n;i++){
        sum = sum + pow(x,i);
    }
    
    printf("Sum of %d terms : %d ",n,sum);
    
    return 0;
}
