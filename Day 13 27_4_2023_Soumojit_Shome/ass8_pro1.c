//1. Write a C program to find the factorial of a number and also find the value of nCr using this function.

#include<stdio.h>
int fact(n){
    int i,f=1;
    for(i=1;i<=n;i++){
        f*=i;
    }
    return f;
    
}
int main(){
    int n,factorial;
    printf("Enter any number : ");
    scanf("%d",&n);
    
    factorial = fact(n);
    
    printf("The factorial of %d is %d",n,factorial);
    

    return 0;
}
