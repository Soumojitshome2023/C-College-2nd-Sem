//1. Write a C program to find the factorial of a number and also find the value of nCr using this function.
//Find the value of nCr using ‘factorial function:

#include<stdio.h>
int fact(n){
    int i,f=1;
    for(i=1;i<=n;i++){
        f*=i;
    }
    return f;
    
}
int main(){
    int n,r;
    float ncr;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    
    
    ncr=fact(n)/(fact(r)*fact(n-r));
    
    printf("nCr = %f",ncr);
    

    return 0;
}
