//3. Write a C program to find power of any number using recursive function.

#include<stdio.h>
int power(b,e){
    int base, exponent;
    if(e==0)
        return 1;
    else if (e>0){
        return (base * power(base, exponent-1));
    }
    else if (e<0){
        return (1 / power(base, -exponent));
    }
}
    
int main(){
    int base,exponent,result;
    
    printf("Enter number : ");
    scanf("%d",&base);
    
    printf("Enter exponent : ");
    scanf("%d",&exponent);
    
    result = power(base,exponent);
   
    printf("\nThe power of %d to the power %d is %d: ",base,exponent,result);
    
    return 0;
}
